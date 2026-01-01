package main

import (
	"encoding/json"
	"sort"
	"sync"
)

type PluginResult = int32 // Результат выполнения callback'а.

const (
	Plugin_Continue PluginResult = 0 // Продолжить выполнение без изменений.
	Plugin_Changed  PluginResult = 1 // Состояние или поведение было изменено.
	Plugin_Handled  PluginResult = 2 // Событие обработано, дальнейшие действия не требуются.
	Plugin_Stop     PluginResult = 3 // Остановить обработку, дальнейшие шаги не выполняются.
)

type CallbackMode = int32

const (
	Pre  CallbackMode = 0
	Post CallbackMode = 1
)

type callbackHolder[T any] struct {
	callback T
	mode     CallbackMode
}

type Callback[T any] struct {
	forwards map[int32]callbackHolder[T]
	index    int32
	mu       sync.RWMutex
}

func NewCallback[T any]() *Callback[T] {
	return &Callback[T]{
		forwards: make(map[int32]callbackHolder[T]),
	}
}

func (cm *Callback[T]) AddCallback(callback T, mode CallbackMode) int32 {
	cm.mu.Lock()
	defer cm.mu.Unlock()

	index := cm.index
	cm.forwards[index] = callbackHolder[T]{
		callback,
		mode,
	}
	cm.index++

	return index
}

func (cm *Callback[T]) RemoveCallback(index int32) {
	cm.mu.Lock()
	defer cm.mu.Unlock()
	delete(cm.forwards, index)
}

func (cm *Callback[T]) getSortedIndexes() []int32 {
	indexes := make([]int32, 0, len(cm.forwards))
	for idx := range cm.forwards {
		indexes = append(indexes, idx)
	}

	sort.Slice(indexes, func(i, j int) bool {
		return indexes[i] < indexes[j]
	})

	return indexes
}

func (cm *Callback[T]) InvokePre(invokeFunc func(T) PluginResult) PluginResult {
	cm.mu.RLock()
	defer cm.mu.RUnlock()

	indexes := cm.getSortedIndexes()

	finalResult := Plugin_Continue
	for _, idx := range indexes {
		holder := cm.forwards[idx]
		if holder.mode == Pre {
			result := invokeFunc(holder.callback)

			if result > finalResult {
				finalResult = result
			}

			if finalResult >= Plugin_Handled {
				break
			}
		}

	}

	return finalResult
}

func (cm *Callback[T]) InvokePost(invokeFunc func(T)) {
	cm.mu.RLock()
	defer cm.mu.RUnlock()

	indexes := cm.getSortedIndexes()

	for _, idx := range indexes {
		holder := cm.forwards[idx]
		if holder.mode == Post {
			invokeFunc(holder.callback)
		}

	}
}

// OnConfigLoadCallback
//
//	@brief Обрабатывает событие загрузки конфигурации.
type OnConfigLoadCallback = func()

var OnConfigLoad = NewCallback[OnConfigLoadCallback]()

// OnConfigLoadRegister
//
//	@brief Регистрирует callback для события OnConfigLoad.
//	@param callback: функция обратного вызова (type: OnConfigLoadCallback)
//	@prototype OnConfigLoadCallback
//
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnConfigLoadRegister
func OnConfigLoadRegister(callback OnConfigLoadCallback) int32 {
	index := OnConfigLoad.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnConfigLoad' registered.")
	return index
}

// OnConfigLoadUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnConfigLoad.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnConfigLoadUnregister
func OnConfigLoadUnregister(index int32) {
	OnConfigLoad.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnConfigLoad' unregistered.")
}

func ForwardOnConfigLoad() bool {

	OnConfigLoad.InvokePost(func(callback OnConfigLoadCallback) {
		callback()
	})

	CRDebug("[Forwards] Forward 'OnConfigLoad' called.")

	return true
}

type OnConfigLoadedCallback = func(rounds string)

var OnConfigLoaded = NewCallback[OnConfigLoadedCallback]()

// OnConfigLoadedRegister
//
//	@brief Регистрирует callback для события OnConfigLoaded.
//	@param callback: функция обратного вызова (type: OnConfigLoadedCallback)
//	@prototype OnConfigLoadedCallback
//
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnConfigLoadedRegister
func OnConfigLoadedRegister(callback OnConfigLoadedCallback) int32 {
	index := OnConfigLoaded.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnConfigLoaded' registered.")
	return index
}

// OnConfigLoadedUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnConfigLoaded.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnConfigLoadedUnregister
func OnConfigLoadedUnregister(index int32) {
	OnConfigLoaded.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnConfigLoaded' unregistered.")
}

func ForwardOnConfigLoaded() bool {

	jsonData, err := json.Marshal(Plugin.Config.Rounds)
	if err != nil {
		CRDebug("[Forwards] Forward 'OnConfigLoaded'. Error marshaling to JSON: %v", err)
		return false
	}

	jsonString := string(jsonData)

	OnConfigLoaded.InvokePost(func(callback OnConfigLoadedCallback) {
		callback(jsonString)
	})

	CRDebug("[Forwards] Forward 'OnConfigLoaded' called.")

	return true
}

// OnForceRoundStartPreCallback
//
//	@brief Обрабатывает событие установки следующего раунда. Позволяет реагировать на событие, используя данные о его названии и клиенте.
//	@param name Указатель на строку с именем следующего раунда.
//	@param client ID клиента, инициировавшего событие.
//
//	@return PluginResult Возможные результаты выполнения операции.
type OnForceRoundStartPreCallback = func(name *string, client int32) PluginResult
type OnForceRoundStartPostCallback = func(name string, client int32)

var OnForceRoundStartPre = NewCallback[OnForceRoundStartPreCallback]()
var OnForceRoundStartPost = NewCallback[OnForceRoundStartPostCallback]()

// OnForceRoundStartPreRegister
//
//	@brief Регистрирует callback для события OnForceRoundStartPre.
//	@param callback: функция обратного вызова (type: OnForceRoundStartPreCallback)
//	@prototype OnForceRoundStartPreCallback
//
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnForceRoundStartPreRegister
func OnForceRoundStartPreRegister(callback OnForceRoundStartPreCallback) int32 {
	index := OnForceRoundStartPre.AddCallback(callback, Pre)
	CRDebug("[Forwards] Forward 'OnForceRoundStartPre' registered.")
	return index
}

// OnForceRoundStartPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnForceRoundStartPre.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnForceRoundStartPreUnregister
func OnForceRoundStartPreUnregister(index int32) {
	OnForceRoundStartPre.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnForceRoundStartPre' unregistered.")
}

// OnForceRoundStartPostRegister
//
//	@brief Регистрирует callback для события OnForceRoundStartPost.
//	@param callback: функция обратного вызова (type: OnForceRoundStartPostCallback)
//	@prototype OnForceRoundStartPostCallback
//
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnForceRoundStartPostRegister
func OnForceRoundStartPostRegister(callback OnForceRoundStartPostCallback) int32 {
	index := OnForceRoundStartPost.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnForceRoundStartPost' registered.")
	return index
}

// OnForceRoundStartPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnForceRoundStartPost.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnForceRoundStartPostUnregister
func OnForceRoundStartPostUnregister(index int32) {
	OnForceRoundStartPost.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnForceRoundStartPost' unregistered.")
}

func ForwardOnForceRoundStart(name *string, client int32) bool {
	if name == nil {
		CRDebug("[Forwards] name *string: is nil")
		return false
	}

	CRDebug("[Forwards] name *string: %s.", *name)
	nameCopy := *name
	CRDebug("[Forwards] nameCopy: %s.", nameCopy)

	result := OnForceRoundStartPre.InvokePre(func(callback OnForceRoundStartPreCallback) PluginResult {
		return callback(&nameCopy, client)
	})

	CRDebug("[Forwards] Forward 'OnForceRoundStartPre' called. Client: %d. Round: %s.", client, *name)

	switch result {
	case Plugin_Stop, Plugin_Handled:
		return false
	case Plugin_Changed:
		*name = nameCopy
	}

	OnForceRoundStartPost.InvokePost(func(callback OnForceRoundStartPostCallback) {
		callback(nameCopy, client)
	})

	CRDebug("[Forwards] Forward 'OnSetNextRoundPost' called. Client: %d. Round: %s.", client, *name)

	return true
}

type OnSetNextRoundPreCallback = func(name *string, client int32) PluginResult
type OnSetNextRoundPostCallback = func(name string, client int32)

var OnSetNextRoundPre = NewCallback[OnSetNextRoundPreCallback]()
var OnSetNextRoundPost = NewCallback[OnSetNextRoundPostCallback]()

// OnSetNextRoundPreRegister
//
//	@brief Регистрирует callback для события OnSetNextRoundPre.
//	@param callback: функция обратного вызова (type: OnSetNextRoundPreCallback)
//	@prototype OnSetNextRoundPreCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnSetNextRoundPreRegister
func OnSetNextRoundPreRegister(callback OnSetNextRoundPreCallback) int32 {
	index := OnSetNextRoundPre.AddCallback(callback, Pre)
	CRDebug("[Forwards] Forward 'OnSetNextRoundPre' registered.")
	return index
}

// OnSetNextRoundPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnSetNextRoundPre.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnSetNextRoundPreUnregister
func OnSetNextRoundPreUnregister(index int32) {
	OnSetNextRoundPre.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnSetNextRoundPre' unregistered.")
}

// OnSetNextRoundPostRegister
//
//	@brief Регистрирует callback для события OnSetNextRoundPost.
//	@param callback: функция обратного вызова (type: OnSetNextRoundPostCallback)
//	@prototype OnSetNextRoundPostCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnSetNextRoundPostRegister
func OnSetNextRoundPostRegister(callback OnSetNextRoundPostCallback) int32 {
	index := OnSetNextRoundPost.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnSetNextRoundPost' registered.")
	return index
}

// OnSetNextRoundPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnSetNextRoundPost.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnSetNextRoundPostUnregister
func OnSetNextRoundPostUnregister(index int32) {
	OnSetNextRoundPost.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnSetNextRoundPost' unregistered.")
}

func ForwardOnSetNextRound(name *string, client int32) bool {
	if name == nil {
		CRDebug("[Forwards] name *string: is nil")
		return false
	}

	CRDebug("[Forwards] name *string: %s.", *name)
	nameCopy := *name
	CRDebug("[Forwards] nameCopy: %s.", nameCopy)

	result := OnSetNextRoundPre.InvokePre(func(callback OnSetNextRoundPreCallback) PluginResult {
		return callback(&nameCopy, client)
	})

	CRDebug("[Forwards] Forward 'OnSetNextRoundPre' called. Client: %d. Round: %s.", client, *name)

	switch result {
	case Plugin_Stop, Plugin_Handled:
		return false
	case Plugin_Changed:
		*name = nameCopy
	}

	OnSetNextRoundPost.InvokePost(func(callback OnSetNextRoundPostCallback) {
		callback(nameCopy, client)
	})

	CRDebug("[Forwards] Forward 'OnSetNextRoundPost' called. Client: %d. Round: %s.", client, *name)

	return true
}

type OnCancelCurrentRoundPreCallback = func(name string, client int32) PluginResult
type OnCancelCurrentRoundPostCallback = func(name string, client int32)

var OnCancelCurrentRoundPre = NewCallback[OnCancelCurrentRoundPreCallback]()
var OnCancelCurrentRoundPost = NewCallback[OnCancelCurrentRoundPostCallback]()

// OnCancelCurrentRoundPreRegister
//
//	@brief Регистрирует callback для события OnCancelCurrentRoundPre.
//	@param callback: функция обратного вызова (type: OnCancelCurrentRoundPreCallback)
//	@prototype OnCancelCurrentRoundPreCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnCancelCurrentRoundPreRegister
func OnCancelCurrentRoundPreRegister(callback OnCancelCurrentRoundPreCallback) int32 {
	index := OnCancelCurrentRoundPre.AddCallback(callback, Pre)
	CRDebug("[Forwards] Forward 'OnCancelCurrentRoundPre' registered.")
	return index
}

// OnCancelCurrentRoundPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelCurrentRoundPre.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnCancelCurrentRoundPreUnregister
func OnCancelCurrentRoundPreUnregister(index int32) {
	OnCancelCurrentRoundPre.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnCancelCurrentRoundPre' unregistered.")
}

// OnCancelCurrentRoundPostRegister
//
//	@brief Регистрирует callback для события OnCancelCurrentRoundPost.
//	@param callback: функция обратного вызова (type: OnCancelCurrentRoundPostCallback)
//	@prototype OnCancelCurrentRoundPostCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnCancelCurrentRoundPostRegister
func OnCancelCurrentRoundPostRegister(callback OnCancelCurrentRoundPostCallback) int32 {
	index := OnCancelCurrentRoundPost.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnCancelCurrentRoundPost' registered.")
	return index
}

// OnCancelCurrentRoundPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelCurrentRoundPost.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnCancelCurrentRoundPostUnregister
func OnCancelCurrentRoundPostUnregister(index int32) {
	OnCancelCurrentRoundPost.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnCancelCurrentRoundPost' unregistered.")
}

func ForwardOnCancelCurrentRound(client int32) bool {
	//roundName := GetNextRoundName()
	//
	//result := OnCancelNextRoundPre.InvokePre(func(callback OnCancelNextRoundPreCallback) PluginResult {
	//	return callback(roundName, client)
	//})
	//
	//CRDebug("[Forwards] Forward 'OnCancelNextRoundPre' called. Client: %d. Round: %s.", client, roundName)
	//
	//if result > Plugin_Continue {
	//	return false
	//}
	//
	//CRDebug("roundName: '%s'", roundName)
	//
	//OnCancelNextRoundPost.InvokePost(func(callback OnCancelNextRoundPostCallback) {
	//	callback(roundName, client)
	//})
	//
	//CRDebug("[Forwards] Forward 'OnCancelNextRoundPost' called. Client: %d. Round: %s.", client, roundName)
	//
	//return true

	roundName := GetCurrentRoundName()

	result := OnCancelCurrentRoundPre.InvokePre(func(callback OnCancelCurrentRoundPreCallback) PluginResult {
		return callback(roundName, client)
	})

	CRDebug("[Forwards] Forward 'OnCancelCurrentRoundPre' called. Client: %d. Round: '%s'.", client, roundName)

	CRDebug("result: '%v'", result)

	if result > Plugin_Continue {
		return false
	}

	OnCancelCurrentRoundPost.InvokePost(func(callback OnCancelCurrentRoundPostCallback) {
		callback(roundName, client)
	})

	CRDebug("[Forwards] Forward 'OnCancelCurrentRoundPost' called. Client: %d. Round: '%s'.", client, roundName)

	return true
}

type OnCancelNextRoundPreCallback = func(name string, client int32) PluginResult
type OnCancelNextRoundPostCallback = func(name string, client int32)

var OnCancelNextRoundPre = NewCallback[OnCancelNextRoundPreCallback]()
var OnCancelNextRoundPost = NewCallback[OnCancelNextRoundPostCallback]()

// OnCancelNextRoundPreRegister
//
//	@brief Регистрирует callback для события OnCancelNextRoundPre.
//	@param callback: функция обратного вызова (type: OnCancelNextRoundPreCallback)
//	@prototype OnCancelNextRoundPreCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnCancelNextRoundPreRegister
func OnCancelNextRoundPreRegister(callback OnCancelNextRoundPreCallback) int32 {
	index := OnCancelNextRoundPre.AddCallback(callback, Pre)
	CRDebug("[Forwards] Forward 'OnCancelNextRoundPre' registered.")
	return index
}

// OnCancelNextRoundPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelNextRoundPre.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnCancelNextRoundPreUnregister
func OnCancelNextRoundPreUnregister(index int32) {
	OnCancelNextRoundPre.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnCancelNextRoundPre' unregistered.")
}

// OnCancelNextRoundPostRegister
//
//	@brief Регистрирует callback для события OnCancelNextRoundPost.
//	@param callback: функция обратного вызова (type: OnCancelNextRoundPostCallback)
//	@prototype OnCancelNextRoundPostCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnCancelNextRoundPostRegister
func OnCancelNextRoundPostRegister(callback OnCancelNextRoundPostCallback) int32 {
	index := OnCancelNextRoundPost.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnCancelNextRoundPost' registered.")
	return index
}

// OnCancelNextRoundPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelNextRoundPost.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnCancelNextRoundPostUnregister
func OnCancelNextRoundPostUnregister(index int32) {
	OnCancelNextRoundPost.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnCancelNextRoundPost' unregistered.")
}

func ForwardOnCancelNextRound(client int32) bool {
	roundName := GetNextRoundName()

	result := OnCancelNextRoundPre.InvokePre(func(callback OnCancelNextRoundPreCallback) PluginResult {
		return callback(roundName, client)
	})

	CRDebug("[Forwards] Forward 'OnCancelNextRoundPre' called. Client: %d. Round: %s.", client, roundName)

	if result > Plugin_Continue {
		return false
	}

	CRDebug("roundName: '%s'", roundName)

	OnCancelNextRoundPost.InvokePost(func(callback OnCancelNextRoundPostCallback) {
		callback(roundName, client)
	})

	CRDebug("[Forwards] Forward 'OnCancelNextRoundPost' called. Client: %d. Round: %s.", client, roundName)

	return true
}

type OnPlayerSpawnCallback = func(client int32)

var OnPlayerSpawn = NewCallback[OnPlayerSpawnCallback]()

// OnPlayerSpawnRegister
//
//	@brief Регистрирует callback для события OnPlayerSpawn.
//	@param callback: функция обратного вызова (type: OnPlayerSpawnCallback)
//	@prototype OnPlayerSpawnCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnPlayerSpawnRegister
func OnPlayerSpawnRegister(callback OnPlayerSpawnCallback) int32 {
	index := OnPlayerSpawn.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnPlayerSpawn' registered.")
	return index
}

// OnPlayerSpawnUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnPlayerSpawn.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnPlayerSpawnUnregister
func OnPlayerSpawnUnregister(index int32) {
	OnPlayerSpawn.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnPlayerSpawn' unregistered.")
}

func ForwardOnPlayerSpawn(client int32) bool {

	OnPlayerSpawn.InvokePost(func(callback OnPlayerSpawnCallback) {
		callback(client)
	})

	CRDebug("[Forwards] Forward 'OnPlayerSpawn' called.")

	return true
}

type OnRoundStartCallback = func(presetRound string)

var OnRoundStart = NewCallback[OnRoundStartCallback]()

// OnRoundStartRegister
//
//	@brief Регистрирует callback для события OnRoundStart.
//	@param callback: функция обратного вызова (type: OnRoundStartCallback)
//	@prototype OnRoundStartCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnRoundStartRegister
func OnRoundStartRegister(callback OnRoundStartCallback) int32 {
	index := OnRoundStart.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnRoundStart' registered.")
	return index
}

// OnRoundStartUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnRoundStart.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnRoundStartUnregister
func OnRoundStartUnregister(index int32) {
	OnRoundStart.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnRoundStart' unregistered.")
}

func ForwardOnRoundStart() bool {
	CRDebug("[Forwards] Forward 'OnRoundStart' called.")

	jsonData, err := json.Marshal(Plugin.CurrentRound)
	if err != nil {
		CRDebug("[Forwards] Forward 'OnRoundStart'. Error marshaling to JSON: %v", err)
		return false
	}

	jsonString := string(jsonData)

	OnRoundStart.InvokePost(func(callback OnRoundStartCallback) {
		callback(jsonString)
	})

	CRDebug("[Forwards] Forward 'OnRoundStart' called.")

	return true
}

type OnRoundEndCallback = func(presetRound string)

var OnRoundEnd = NewCallback[OnRoundEndCallback]()

// OnRoundEndRegister
//
//	@brief Регистрирует callback для события OnRoundEnd.
//	@param callback: функция обратного вызова (type: OnRoundEndCallback)
//	@prototype OnRoundEndCallback
//	@return Индекс зарегистрированного callback (type: int32)
//
//plugify:export OnRoundEndRegister
func OnRoundEndRegister(callback OnRoundEndCallback) int32 {
	index := OnRoundEnd.AddCallback(callback, Post)
	CRDebug("[Forwards] Forward 'OnRoundEnd' registered.")
	return index
}

// OnRoundEndUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnRoundEnd.
//	@param index: индекс callback, который нужно удалить (type: int32)
//
//plugify:export OnRoundEndUnregister
func OnRoundEndUnregister(index int32) {
	OnRoundEnd.RemoveCallback(index)
	CRDebug("[Forwards] Forward 'OnRoundEnd' unregistered.")
}

func ForwardOnRoundEnd() bool {
	CRDebug("[Forwards] Forward 'OnRoundEnd' called.")

	jsonData, err := json.Marshal(Plugin.CurrentRound)
	if err != nil {
		CRDebug("[Forwards] Forward 'OnRoundEnd'. Error marshaling to JSON: %v", err)
		return false
	}

	jsonString := string(jsonData)

	OnRoundEnd.InvokePost(func(callback OnRoundEndCallback) {
		callback(jsonString)
	})

	Plugin.CurrentRound = nil

	CRDebug("[Forwards] Forward 'OnRoundEnd' called.")

	return true
}
