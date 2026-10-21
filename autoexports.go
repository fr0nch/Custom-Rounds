package main

//#include "autoexports.h"
import "C"
import (
	"reflect"
	"unsafe"

	internal "customrounds/internal"
	listeners "github.com/fr0nch/listener-manager"
	"github.com/untrustedmodders/go-plugify"
)

var _ = reflect.TypeOf(0)
var _ = unsafe.Sizeof(0)
var _ = plugify.ApiVersion

//export __OnConfigLoadRegister
func __OnConfigLoadRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigLoadRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigLoadCallback(nil))).(internal.OnConfigLoadCallback))
	return int32(__result)
}

//export __OnConfigLoadUnregister
func __OnConfigLoadUnregister(index int32) {
	internal.OnConfigLoadUnregister(listeners.ListenerID(index))
}

//export __OnConfigSectionLoadRegister
func __OnConfigSectionLoadRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigSectionLoadRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigSectionLoadCallback(nil))).(internal.OnConfigSectionLoadCallback))
	return int32(__result)
}

//export __OnConfigSectionLoadUnregister
func __OnConfigSectionLoadUnregister(index int32) {
	internal.OnConfigSectionLoadUnregister(listeners.ListenerID(index))
}

//export __OnConfigSectionLoadPostRegister
func __OnConfigSectionLoadPostRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigSectionLoadPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigSectionLoadPostCallback(nil))).(internal.OnConfigSectionLoadPostCallback))
	return int32(__result)
}

//export __OnConfigSectionLoadPostUnregister
func __OnConfigSectionLoadPostUnregister(index int32) {
	internal.OnConfigSectionLoadPostUnregister(listeners.ListenerID(index))
}

//export __OnConfigLoadedRegister
func __OnConfigLoadedRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigLoadedRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigLoadedCallback(nil))).(internal.OnConfigLoadedCallback))
	return int32(__result)
}

//export __OnConfigLoadedUnregister
func __OnConfigLoadedUnregister(index int32) {
	internal.OnConfigLoadedUnregister(listeners.ListenerID(index))
}

//export __OnForceRoundStartPreRegister
func __OnForceRoundStartPreRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnForceRoundStartPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnForceRoundStartPreCallback(nil))).(internal.OnForceRoundStartPreCallback))
	return int32(__result)
}

//export __OnForceRoundStartPreUnregister
func __OnForceRoundStartPreUnregister(index int32) {
	internal.OnForceRoundStartPreUnregister(listeners.ListenerID(index))
}

//export __OnForceRoundStartPostRegister
func __OnForceRoundStartPostRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnForceRoundStartPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnForceRoundStartPostCallback(nil))).(internal.OnForceRoundStartPostCallback))
	return int32(__result)
}

//export __OnForceRoundStartPostUnregister
func __OnForceRoundStartPostUnregister(index int32) {
	internal.OnForceRoundStartPostUnregister(listeners.ListenerID(index))
}

//export __OnSetNextRoundPreRegister
func __OnSetNextRoundPreRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnSetNextRoundPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnSetNextRoundPreCallback(nil))).(internal.OnSetNextRoundPreCallback))
	return int32(__result)
}

//export __OnSetNextRoundPreUnregister
func __OnSetNextRoundPreUnregister(index int32) {
	internal.OnSetNextRoundPreUnregister(listeners.ListenerID(index))
}

//export __OnSetNextRoundPostRegister
func __OnSetNextRoundPostRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnSetNextRoundPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnSetNextRoundPostCallback(nil))).(internal.OnSetNextRoundPostCallback))
	return int32(__result)
}

//export __OnSetNextRoundPostUnregister
func __OnSetNextRoundPostUnregister(index int32) {
	internal.OnSetNextRoundPostUnregister(listeners.ListenerID(index))
}

//export __OnCancelCurrentRoundPreRegister
func __OnCancelCurrentRoundPreRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelCurrentRoundPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelCurrentRoundPreCallback(nil))).(internal.OnCancelCurrentRoundPreCallback))
	return int32(__result)
}

//export __OnCancelCurrentRoundPreUnregister
func __OnCancelCurrentRoundPreUnregister(index int32) {
	internal.OnCancelCurrentRoundPreUnregister(listeners.ListenerID(index))
}

//export __OnCancelCurrentRoundPostRegister
func __OnCancelCurrentRoundPostRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelCurrentRoundPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelCurrentRoundPostCallback(nil))).(internal.OnCancelCurrentRoundPostCallback))
	return int32(__result)
}

//export __OnCancelCurrentRoundPostUnregister
func __OnCancelCurrentRoundPostUnregister(index int32) {
	internal.OnCancelCurrentRoundPostUnregister(listeners.ListenerID(index))
}

//export __OnCancelNextRoundPreRegister
func __OnCancelNextRoundPreRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelNextRoundPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelNextRoundPreCallback(nil))).(internal.OnCancelNextRoundPreCallback))
	return int32(__result)
}

//export __OnCancelNextRoundPreUnregister
func __OnCancelNextRoundPreUnregister(index int32) {
	internal.OnCancelNextRoundPreUnregister(listeners.ListenerID(index))
}

//export __OnCancelNextRoundPostRegister
func __OnCancelNextRoundPostRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelNextRoundPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelNextRoundPostCallback(nil))).(internal.OnCancelNextRoundPostCallback))
	return int32(__result)
}

//export __OnCancelNextRoundPostUnregister
func __OnCancelNextRoundPostUnregister(index int32) {
	internal.OnCancelNextRoundPostUnregister(listeners.ListenerID(index))
}

//export __OnPlayerSpawnRegister
func __OnPlayerSpawnRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnPlayerSpawnRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnPlayerSpawnCallback(nil))).(internal.OnPlayerSpawnCallback))
	return int32(__result)
}

//export __OnPlayerSpawnUnregister
func __OnPlayerSpawnUnregister(index int32) {
	internal.OnPlayerSpawnUnregister(listeners.ListenerID(index))
}

//export __OnRoundStartRegister
func __OnRoundStartRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnRoundStartRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnRoundStartCallback(nil))).(internal.OnRoundStartCallback))
	return int32(__result)
}

//export __OnRoundStartUnregister
func __OnRoundStartUnregister(index int32) {
	internal.OnRoundStartUnregister(listeners.ListenerID(index))
}

//export __OnRoundEndRegister
func __OnRoundEndRegister(callback unsafe.Pointer) int32 {
	__result := internal.OnRoundEndRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnRoundEndCallback(nil))).(internal.OnRoundEndCallback))
	return int32(__result)
}

//export __OnRoundEndUnregister
func __OnRoundEndUnregister(index int32) {
	internal.OnRoundEndUnregister(listeners.ListenerID(index))
}

//export __SetNextRound
func __SetNextRound(name *C.String, client int32) bool {
	__result := internal.SetNextRound(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))), client)
	return __result
}

//export __SetNextRoundFromJson
func __SetNextRoundFromJson(presetRound *C.String, client int32) bool {
	__result := internal.SetNextRoundFromJson(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(presetRound))), client)
	return __result
}

//export __SetNextRoundFromKeyValue
func __SetNextRoundFromKeyValue(round uintptr, client int32) bool {
	__result := internal.SetNextRoundFromKeyValue(round, client)
	return __result
}

//export __CancelNextRound
func __CancelNextRound(client int32) bool {
	__result := internal.CancelNextRound(client)
	return __result
}

//export __StartRound
func __StartRound(name *C.String, client int32) bool {
	__result := internal.StartRound(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))), client)
	return __result
}

//export __StartRoundFromKeyValue
func __StartRoundFromKeyValue(round uintptr, client int32) bool {
	__result := internal.StartRoundFromKeyValue(round, client)
	return __result
}

//export __StopRound
func __StopRound(client int32) bool {
	__result := internal.StopRound(client)
	return __result
}

//export __IsCustomRound
func __IsCustomRound() bool {
	__result := internal.IsCustomRound()
	return __result
}

//export __IsNextRoundCustom
func __IsNextRoundCustom() bool {
	__result := internal.IsNextRoundCustom()
	return __result
}

//export __IsRoundEnd
func __IsRoundEnd() bool {
	__result := internal.IsRoundEnd()
	return __result
}

//export __IsRoundExists
func __IsRoundExists(name *C.String) bool {
	__result := internal.IsRoundExists(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))))
	return __result
}

//export __GetRound
func __GetRound(name *C.String) uintptr {
	__result := internal.GetRound(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))))
	return __result
}

//export __GetRounds
func __GetRounds() C.Vector {
	__result := internal.GetRounds()
	__return := plugify.ConstructVectorPointer(__result)
	return *(*C.Vector)(unsafe.Pointer(&__return))
}

//export __GetRoundNames
func __GetRoundNames() C.Vector {
	__result := internal.GetRoundNames()
	__return := plugify.ConstructVectorString(__result)
	return *(*C.Vector)(unsafe.Pointer(&__return))
}

//export __GetRoundIndex
func __GetRoundIndex(name *C.String) int32 {
	__result := internal.GetRoundIndex(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))))
	return __result
}

//export __GetCurrentRound
func __GetCurrentRound() uintptr {
	__result := internal.GetCurrentRound()
	return __result
}

//export __GetNextRound
func __GetNextRound() uintptr {
	__result := internal.GetNextRound()
	return __result
}

//export __GetCurrentRoundName
func __GetCurrentRoundName() C.String {
	__result := internal.GetCurrentRoundName()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetNextRoundName
func __GetNextRoundName() C.String {
	__result := internal.GetNextRoundName()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetJsonString
func __GetJsonString() C.String {
	__result := internal.GetJsonString()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetCurrentRoundJsonString
func __GetCurrentRoundJsonString() C.String {
	__result := internal.GetCurrentRoundJsonString()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetNextRoundKeyValueJsonString
func __GetNextRoundKeyValueJsonString() C.String {
	__result := internal.GetNextRoundKeyValueJsonString()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __ReloadConfig
func __ReloadConfig() {
	internal.ReloadConfig()
}
