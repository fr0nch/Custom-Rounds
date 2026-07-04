package main

import (
	"encoding/json"

	"github.com/fr0nch/listener-manager"
)

// OnConfigLoadCallback
//
// @brief Обрабатывает событие загрузки конфигурации.
type OnConfigLoadCallback func()

var OnConfigLoad = listeners.NewListener[OnConfigLoadCallback]()

// OnConfigLoadRegister
//
//	@brief Регистрирует callback для события OnConfigLoad.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback
//
//plugify:export OnConfigLoadRegister
func OnConfigLoadRegister(callback OnConfigLoadCallback) listeners.ListenerID {
	plugin.log.Debugf("[Forwards] Forward 'OnConfigLoad' registered.")
	return OnConfigLoad.Add(callback, listeners.Post)
}

// OnConfigLoadUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnConfigLoad.
//	@param index Индекс callback, который нужно удалить
//
//plugify:export OnConfigLoadUnregister
func OnConfigLoadUnregister(index listeners.ListenerID) {
	OnConfigLoad.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnConfigLoad' unregistered.")
}

func ForwardOnConfigLoad() bool {
	OnConfigLoad.InvokePost(func(callback OnConfigLoadCallback) {
		callback()
	})
	plugin.log.Debugf("[Forwards] Forward 'OnConfigLoad' called.")
	return true
}

// OnConfigLoadedCallback
//
//	@brief Прототип функции
//	@param rounds Настройка раудов в json формате
type OnConfigLoadedCallback func(rounds string)

var OnConfigLoaded = listeners.NewListener[OnConfigLoadedCallback]()

// OnConfigLoadedRegister
//
//	@brief Регистрирует callback для события OnConfigLoaded.
//	@param callback Функция обратного вызов.
//
//	@return Индекс зарегистрированного callback
//
//plugify:export OnConfigLoadedRegister
func OnConfigLoadedRegister(callback OnConfigLoadedCallback) listeners.ListenerID {
	index := OnConfigLoaded.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnConfigLoaded' registered.")
	return index
}

// OnConfigLoadedUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnConfigLoaded.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnConfigLoadedUnregister
func OnConfigLoadedUnregister(index listeners.ListenerID) {
	OnConfigLoaded.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnConfigLoaded' unregistered.")
}

func ForwardOnConfigLoaded() bool {

	jsonData, err := json.Marshal(plugin.Config.Rounds)
	if err != nil {
		plugin.log.Debugf("[Forwards] Forward 'OnConfigLoaded'. Error marshaling to JSON: %v", err)
		return false
	}

	jsonString := string(jsonData)

	OnConfigLoaded.InvokePost(func(callback OnConfigLoadedCallback) {
		callback(jsonString)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnConfigLoaded' called.")

	return true
}

// OnForceRoundStartPreCallback
//
//	@brief Обрабатывает событие установки следующего раунда. Позволяет реагировать на событие, используя данные о его названии и клиенте.
//	@param name Указатель на строку с именем следующего раунда.
//	@param client ID клиента, инициировавшего событие.
//
//	@return PluginResult Возможные результаты выполнения операции.
type OnForceRoundStartPreCallback func(name *string, client int32) listeners.PluginResult
type OnForceRoundStartPostCallback func(name string, client int32)

var OnForceRoundStartPre = listeners.NewListener[OnForceRoundStartPreCallback]()
var OnForceRoundStartPost = listeners.NewListener[OnForceRoundStartPostCallback]()

// OnForceRoundStartPreRegister
//
//	@brief Регистрирует callback для события OnForceRoundStartPre.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnForceRoundStartPreRegister
func OnForceRoundStartPreRegister(callback OnForceRoundStartPreCallback) listeners.ListenerID {
	index := OnForceRoundStartPre.Add(callback, listeners.Pre)
	plugin.log.Debugf("[Forwards] Forward 'OnForceRoundStartPre' registered.")
	return index
}

// OnForceRoundStartPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnForceRoundStartPre.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnForceRoundStartPreUnregister
func OnForceRoundStartPreUnregister(index listeners.ListenerID) {
	OnForceRoundStartPre.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnForceRoundStartPre' unregistered.")
}

// OnForceRoundStartPostRegister
//
//	@brief Регистрирует callback для события OnForceRoundStartPost.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnForceRoundStartPostRegister
func OnForceRoundStartPostRegister(callback OnForceRoundStartPostCallback) listeners.ListenerID {
	index := OnForceRoundStartPost.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnForceRoundStartPost' registered.")
	return index
}

// OnForceRoundStartPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnForceRoundStartPost.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnForceRoundStartPostUnregister
func OnForceRoundStartPostUnregister(index listeners.ListenerID) {
	OnForceRoundStartPost.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnForceRoundStartPost' unregistered.")
}

func ForwardOnForceRoundStart(name *string, client int32) bool {
	if name == nil {
		plugin.log.Debugf("[Forwards] name *string: is nil")
		return false
	}

	plugin.log.Debugf("[Forwards] name *string: %s.", *name)
	nameCopy := *name
	plugin.log.Debugf("[Forwards] nameCopy: %s.", nameCopy)

	result := OnForceRoundStartPre.InvokePre(func(callback OnForceRoundStartPreCallback) listeners.PluginResult {
		return callback(&nameCopy, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnForceRoundStartPre' called. Client: %d. Round: %s.", client, *name)

	switch result {
	case listeners.Stop, listeners.Handled:
		return false
	case listeners.Changed:
		*name = nameCopy
	}

	OnForceRoundStartPost.InvokePost(func(callback OnForceRoundStartPostCallback) {
		callback(nameCopy, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnSetNextRoundPost' called. Client: %d. Round: %s.", client, *name)

	return true
}

type OnSetNextRoundPreCallback func(name *string, client int32) listeners.PluginResult
type OnSetNextRoundPostCallback func(name string, client int32)

var OnSetNextRoundPre = listeners.NewListener[OnSetNextRoundPreCallback]()
var OnSetNextRoundPost = listeners.NewListener[OnSetNextRoundPostCallback]()

// OnSetNextRoundPreRegister
//
//	@brief Регистрирует callback для события OnSetNextRoundPre.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnSetNextRoundPreRegister
func OnSetNextRoundPreRegister(callback OnSetNextRoundPreCallback) listeners.ListenerID {
	index := OnSetNextRoundPre.Add(callback, listeners.Pre)
	plugin.log.Debugf("[Forwards] Forward 'OnSetNextRoundPre' registered.")
	return index
}

// OnSetNextRoundPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnSetNextRoundPre.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnSetNextRoundPreUnregister
func OnSetNextRoundPreUnregister(index listeners.ListenerID) {
	OnSetNextRoundPre.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnSetNextRoundPre' unregistered.")
}

// OnSetNextRoundPostRegister
//
//	@brief Регистрирует callback для события OnSetNextRoundPost.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnSetNextRoundPostRegister
func OnSetNextRoundPostRegister(callback OnSetNextRoundPostCallback) listeners.ListenerID {
	index := OnSetNextRoundPost.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnSetNextRoundPost' registered.")
	return index
}

// OnSetNextRoundPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnSetNextRoundPost.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnSetNextRoundPostUnregister
func OnSetNextRoundPostUnregister(index listeners.ListenerID) {
	OnSetNextRoundPost.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnSetNextRoundPost' unregistered.")
}

func ForwardOnSetNextRound(name *string, client int32) bool {
	if name == nil {
		plugin.log.Debugf("[Forwards] name *string: is nil")
		return false
	}

	plugin.log.Debugf("[Forwards] name *string: %s.", *name)
	nameCopy := *name
	plugin.log.Debugf("[Forwards] nameCopy: %s.", nameCopy)

	result := OnSetNextRoundPre.InvokePre(func(callback OnSetNextRoundPreCallback) listeners.PluginResult {
		return callback(&nameCopy, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnSetNextRoundPre' called. Client: %d. Round: %s.", client, *name)

	switch result {
	case listeners.Stop, listeners.Handled:
		return false
	case listeners.Changed:
		*name = nameCopy
	}

	OnSetNextRoundPost.InvokePost(func(callback OnSetNextRoundPostCallback) {
		callback(nameCopy, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnSetNextRoundPost' called. Client: %d. Round: %s.", client, *name)

	return true
}

type OnCancelCurrentRoundPreCallback func(name string, client int32) listeners.PluginResult
type OnCancelCurrentRoundPostCallback func(name string, client int32)

var OnCancelCurrentRoundPre = listeners.NewListener[OnCancelCurrentRoundPreCallback]()
var OnCancelCurrentRoundPost = listeners.NewListener[OnCancelCurrentRoundPostCallback]()

// OnCancelCurrentRoundPreRegister
//
//	@brief Регистрирует callback для события OnCancelCurrentRoundPre.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnCancelCurrentRoundPreRegister
func OnCancelCurrentRoundPreRegister(callback OnCancelCurrentRoundPreCallback) listeners.ListenerID {
	index := OnCancelCurrentRoundPre.Add(callback, listeners.Pre)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelCurrentRoundPre' registered.")
	return index
}

// OnCancelCurrentRoundPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelCurrentRoundPre.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnCancelCurrentRoundPreUnregister
func OnCancelCurrentRoundPreUnregister(index listeners.ListenerID) {
	OnCancelCurrentRoundPre.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelCurrentRoundPre' unregistered.")
}

// OnCancelCurrentRoundPostRegister
//
//	@brief Регистрирует callback для события OnCancelCurrentRoundPost.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnCancelCurrentRoundPostRegister
func OnCancelCurrentRoundPostRegister(callback OnCancelCurrentRoundPostCallback) listeners.ListenerID {
	index := OnCancelCurrentRoundPost.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelCurrentRoundPost' registered.")
	return index
}

// OnCancelCurrentRoundPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelCurrentRoundPost.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnCancelCurrentRoundPostUnregister
func OnCancelCurrentRoundPostUnregister(index listeners.ListenerID) {
	OnCancelCurrentRoundPost.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelCurrentRoundPost' unregistered.")
}

func ForwardOnCancelCurrentRound(client int32) bool {
	roundName := GetCurrentRoundName()

	result := OnCancelCurrentRoundPre.InvokePre(func(callback OnCancelCurrentRoundPreCallback) listeners.PluginResult {
		return callback(roundName, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnCancelCurrentRoundPre' called. Client: %d. Round: '%s'.", client, roundName)

	plugin.log.Debugf("result: '%v'", result)

	if result > listeners.Continue {
		return false
	}

	OnCancelCurrentRoundPost.InvokePost(func(callback OnCancelCurrentRoundPostCallback) {
		callback(roundName, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnCancelCurrentRoundPost' called. Client: %d. Round: '%s'.", client, roundName)

	return true
}

type OnCancelNextRoundPreCallback func(name string, client int32) listeners.PluginResult
type OnCancelNextRoundPostCallback func(name string, client int32)

var OnCancelNextRoundPre = listeners.NewListener[OnCancelNextRoundPreCallback]()
var OnCancelNextRoundPost = listeners.NewListener[OnCancelNextRoundPostCallback]()

// OnCancelNextRoundPreRegister
//
//	@brief Регистрирует callback для события OnCancelNextRoundPre.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnCancelNextRoundPreRegister
func OnCancelNextRoundPreRegister(callback OnCancelNextRoundPreCallback) listeners.ListenerID {
	index := OnCancelNextRoundPre.Add(callback, listeners.Pre)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelNextRoundPre' registered.")
	return index
}

// OnCancelNextRoundPreUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelNextRoundPre.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnCancelNextRoundPreUnregister
func OnCancelNextRoundPreUnregister(index listeners.ListenerID) {
	OnCancelNextRoundPre.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelNextRoundPre' unregistered.")
}

// OnCancelNextRoundPostRegister
//
//	@brief Регистрирует callback для события OnCancelNextRoundPost.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnCancelNextRoundPostRegister
func OnCancelNextRoundPostRegister(callback OnCancelNextRoundPostCallback) listeners.ListenerID {
	index := OnCancelNextRoundPost.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelNextRoundPost' registered.")
	return index
}

// OnCancelNextRoundPostUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnCancelNextRoundPost.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnCancelNextRoundPostUnregister
func OnCancelNextRoundPostUnregister(index listeners.ListenerID) {
	OnCancelNextRoundPost.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnCancelNextRoundPost' unregistered.")
}

func ForwardOnCancelNextRound(client int32) bool {
	roundName := GetNextRoundName()

	result := OnCancelNextRoundPre.InvokePre(func(callback OnCancelNextRoundPreCallback) listeners.PluginResult {
		return callback(roundName, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnCancelNextRoundPre' called. Client: %d. Round: %s.", client, roundName)

	if result > listeners.Continue {
		return false
	}

	plugin.log.Debugf("roundName: '%s'", roundName)

	OnCancelNextRoundPost.InvokePost(func(callback OnCancelNextRoundPostCallback) {
		callback(roundName, client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnCancelNextRoundPost' called. Client: %d. Round: %s.", client, roundName)

	return true
}

type OnPlayerSpawnCallback func(client int32)

var OnPlayerSpawn = listeners.NewListener[OnPlayerSpawnCallback]()

// OnPlayerSpawnRegister
//
//	@brief Регистрирует callback для события OnPlayerSpawn.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnPlayerSpawnRegister
func OnPlayerSpawnRegister(callback OnPlayerSpawnCallback) listeners.ListenerID {
	index := OnPlayerSpawn.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnPlayerSpawn' registered.")
	return index
}

// OnPlayerSpawnUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnPlayerSpawn.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnPlayerSpawnUnregister
func OnPlayerSpawnUnregister(index listeners.ListenerID) {
	OnPlayerSpawn.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnPlayerSpawn' unregistered.")
}

func ForwardOnPlayerSpawn(client int32) bool {

	OnPlayerSpawn.InvokePost(func(callback OnPlayerSpawnCallback) {
		callback(client)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnPlayerSpawn' called.")

	return true
}

type OnRoundStartCallback func(presetRound string)

var OnRoundStart = listeners.NewListener[OnRoundStartCallback]()

// OnRoundStartRegister
//
//	@brief Регистрирует callback для события OnRoundStart.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnRoundStartRegister
func OnRoundStartRegister(callback OnRoundStartCallback) listeners.ListenerID {
	index := OnRoundStart.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnRoundStart' registered.")
	return index
}

// OnRoundStartUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnRoundStart.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnRoundStartUnregister
func OnRoundStartUnregister(index listeners.ListenerID) {
	OnRoundStart.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnRoundStart' unregistered.")
}

func ForwardOnRoundStart() bool {
	plugin.log.Debugf("[Forwards] Forward 'OnRoundStart' called.")

	jsonData, err := json.Marshal(plugin.CurrentRound)
	if err != nil {
		plugin.log.Debugf("[Forwards] Forward 'OnRoundStart'. Error marshaling to JSON: %v", err)
		return false
	}

	jsonString := string(jsonData)

	OnRoundStart.InvokePost(func(callback OnRoundStartCallback) {
		callback(jsonString)
	})

	plugin.log.Debugf("[Forwards] Forward 'OnRoundStart' called.")

	return true
}

type OnRoundEndCallback func(presetRound string)

var OnRoundEnd = listeners.NewListener[OnRoundEndCallback]()

// OnRoundEndRegister
//
//	@brief Регистрирует callback для события OnRoundEnd.
//	@param callback Функция обратного вызова.
//
//	@return Индекс зарегистрированного callback.
//
//plugify:export OnRoundEndRegister
func OnRoundEndRegister(callback OnRoundEndCallback) listeners.ListenerID {
	index := OnRoundEnd.Add(callback, listeners.Post)
	plugin.log.Debugf("[Forwards] Forward 'OnRoundEnd' registered.")
	return index
}

// OnRoundEndUnregister
//
//	@brief Удаляет ранее зарегистрированный callback для события OnRoundEnd.
//	@param index Индекс callback, который нужно удалить.
//
//plugify:export OnRoundEndUnregister
func OnRoundEndUnregister(index listeners.ListenerID) {
	OnRoundEnd.Remove(index)
	plugin.log.Debugf("[Forwards] Forward 'OnRoundEnd' unregistered.")
}

func ForwardOnRoundEnd() bool {
	plugin.log.Debugf("[Forwards] Forward 'OnRoundEnd' called.")

	jsonData, err := json.Marshal(plugin.CurrentRound)
	if err != nil {
		plugin.log.Debugf("[Forwards] Forward 'OnRoundEnd'. Error marshaling to JSON: %v", err)
		return false
	}

	jsonString := string(jsonData)

	OnRoundEnd.InvokePost(func(callback OnRoundEndCallback) {
		callback(jsonString)
	})

	plugin.CurrentRound = nil

	plugin.log.Debugf("[Forwards] Forward 'OnRoundEnd' called.")

	return true
}
