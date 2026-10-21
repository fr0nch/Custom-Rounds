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

//export __OnConfigLoad_Register
func __OnConfigLoad_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigLoad_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigLoadCallback(nil))).(internal.OnConfigLoadCallback))
	return int32(__result)
}

//export __OnConfigLoad_Unregister
func __OnConfigLoad_Unregister(index int32) {
	internal.OnConfigLoad_Unregister(listeners.ListenerID(index))
}

//export __OnConfigSectionLoad_Register
func __OnConfigSectionLoad_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigSectionLoad_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigSectionLoadCallback(nil))).(internal.OnConfigSectionLoadCallback))
	return int32(__result)
}

//export __OnConfigSectionLoad_Unregister
func __OnConfigSectionLoad_Unregister(index int32) {
	internal.OnConfigSectionLoad_Unregister(listeners.ListenerID(index))
}

//export __OnConfigSectionLoadPost_Register
func __OnConfigSectionLoadPost_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigSectionLoadPost_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigSectionLoadPostCallback(nil))).(internal.OnConfigSectionLoadPostCallback))
	return int32(__result)
}

//export __OnConfigSectionLoadPost_Unregister
func __OnConfigSectionLoadPost_Unregister(index int32) {
	internal.OnConfigSectionLoadPost_Unregister(listeners.ListenerID(index))
}

//export __OnConfigLoaded_Register
func __OnConfigLoaded_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnConfigLoaded_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnConfigLoadedCallback(nil))).(internal.OnConfigLoadedCallback))
	return int32(__result)
}

//export __OnConfigLoaded_Unregister
func __OnConfigLoaded_Unregister(index int32) {
	internal.OnConfigLoaded_Unregister(listeners.ListenerID(index))
}

//export __OnForceRoundStartPre_Register
func __OnForceRoundStartPre_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnForceRoundStartPre_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnForceRoundStartPreCallback(nil))).(internal.OnForceRoundStartPreCallback))
	return int32(__result)
}

//export __OnForceRoundStartPre_Unregister
func __OnForceRoundStartPre_Unregister(index int32) {
	internal.OnForceRoundStartPre_Unregister(listeners.ListenerID(index))
}

//export __OnForceRoundStartPost_Register
func __OnForceRoundStartPost_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnForceRoundStartPost_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnForceRoundStartPostCallback(nil))).(internal.OnForceRoundStartPostCallback))
	return int32(__result)
}

//export __OnForceRoundStartPost_Unregister
func __OnForceRoundStartPost_Unregister(index int32) {
	internal.OnForceRoundStartPost_Unregister(listeners.ListenerID(index))
}

//export __OnSetNextRoundPre_Register
func __OnSetNextRoundPre_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnSetNextRoundPre_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnSetNextRoundPreCallback(nil))).(internal.OnSetNextRoundPreCallback))
	return int32(__result)
}

//export __OnSetNextRoundPre_Unregister
func __OnSetNextRoundPre_Unregister(index int32) {
	internal.OnSetNextRoundPre_Unregister(listeners.ListenerID(index))
}

//export __OnSetNextRoundPost_Register
func __OnSetNextRoundPost_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnSetNextRoundPost_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnSetNextRoundPostCallback(nil))).(internal.OnSetNextRoundPostCallback))
	return int32(__result)
}

//export __OnSetNextRoundPost_Unregister
func __OnSetNextRoundPost_Unregister(index int32) {
	internal.OnSetNextRoundPost_Unregister(listeners.ListenerID(index))
}

//export __OnCancelCurrentRoundPre_Register
func __OnCancelCurrentRoundPre_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelCurrentRoundPre_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelCurrentRoundPreCallback(nil))).(internal.OnCancelCurrentRoundPreCallback))
	return int32(__result)
}

//export __OnCancelCurrentRoundPre_Unregister
func __OnCancelCurrentRoundPre_Unregister(index int32) {
	internal.OnCancelCurrentRoundPre_Unregister(listeners.ListenerID(index))
}

//export __OnCancelCurrentRoundPost_Register
func __OnCancelCurrentRoundPost_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelCurrentRoundPost_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelCurrentRoundPostCallback(nil))).(internal.OnCancelCurrentRoundPostCallback))
	return int32(__result)
}

//export __OnCancelCurrentRoundPost_Unregister
func __OnCancelCurrentRoundPost_Unregister(index int32) {
	internal.OnCancelCurrentRoundPost_Unregister(listeners.ListenerID(index))
}

//export __OnCancelNextRoundPre_Register
func __OnCancelNextRoundPre_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelNextRoundPre_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelNextRoundPreCallback(nil))).(internal.OnCancelNextRoundPreCallback))
	return int32(__result)
}

//export __OnCancelNextRoundPre_Unregister
func __OnCancelNextRoundPre_Unregister(index int32) {
	internal.OnCancelNextRoundPre_Unregister(listeners.ListenerID(index))
}

//export __OnCancelNextRoundPost_Register
func __OnCancelNextRoundPost_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnCancelNextRoundPost_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnCancelNextRoundPostCallback(nil))).(internal.OnCancelNextRoundPostCallback))
	return int32(__result)
}

//export __OnCancelNextRoundPost_Unregister
func __OnCancelNextRoundPost_Unregister(index int32) {
	internal.OnCancelNextRoundPost_Unregister(listeners.ListenerID(index))
}

//export __OnPlayerSpawn_Register
func __OnPlayerSpawn_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnPlayerSpawn_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnPlayerSpawnCallback(nil))).(internal.OnPlayerSpawnCallback))
	return int32(__result)
}

//export __OnPlayerSpawn_Unregister
func __OnPlayerSpawn_Unregister(index int32) {
	internal.OnPlayerSpawn_Unregister(listeners.ListenerID(index))
}

//export __OnRoundStart_Register
func __OnRoundStart_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnRoundStart_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnRoundStartCallback(nil))).(internal.OnRoundStartCallback))
	return int32(__result)
}

//export __OnRoundStart_Unregister
func __OnRoundStart_Unregister(index int32) {
	internal.OnRoundStart_Unregister(listeners.ListenerID(index))
}

//export __OnRoundEnd_Register
func __OnRoundEnd_Register(callback unsafe.Pointer) int32 {
	__result := internal.OnRoundEnd_Register(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(internal.OnRoundEndCallback(nil))).(internal.OnRoundEndCallback))
	return int32(__result)
}

//export __OnRoundEnd_Unregister
func __OnRoundEnd_Unregister(index int32) {
	internal.OnRoundEnd_Unregister(listeners.ListenerID(index))
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
