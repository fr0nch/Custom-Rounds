package main

//#include "autoexports.h"
import "C"
import (
	"reflect"
	"unsafe"

	listeners "github.com/fr0nch/listener-manager"
	"github.com/untrustedmodders/go-plugify"
)

var _ = reflect.TypeOf(0)
var _ = unsafe.Sizeof(0)
var _ = plugify.ApiVersion

//export __OnConfigLoadRegister
func __OnConfigLoadRegister(callback unsafe.Pointer) int32 {
	__result := OnConfigLoadRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnConfigLoadCallback(nil))).(OnConfigLoadCallback))
	return int32(__result)
}

//export __OnConfigLoadUnregister
func __OnConfigLoadUnregister(index int32) {
	OnConfigLoadUnregister(listeners.ListenerID(index))
}

//export __OnConfigLoadedRegister
func __OnConfigLoadedRegister(callback unsafe.Pointer) int32 {
	__result := OnConfigLoadedRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnConfigLoadedCallback(nil))).(OnConfigLoadedCallback))
	return int32(__result)
}

//export __OnConfigLoadedUnregister
func __OnConfigLoadedUnregister(index int32) {
	OnConfigLoadedUnregister(listeners.ListenerID(index))
}

//export __OnForceRoundStartPreRegister
func __OnForceRoundStartPreRegister(callback unsafe.Pointer) int32 {
	__result := OnForceRoundStartPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnForceRoundStartPreCallback(nil))).(OnForceRoundStartPreCallback))
	return int32(__result)
}

//export __OnForceRoundStartPreUnregister
func __OnForceRoundStartPreUnregister(index int32) {
	OnForceRoundStartPreUnregister(listeners.ListenerID(index))
}

//export __OnForceRoundStartPostRegister
func __OnForceRoundStartPostRegister(callback unsafe.Pointer) int32 {
	__result := OnForceRoundStartPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnForceRoundStartPostCallback(nil))).(OnForceRoundStartPostCallback))
	return int32(__result)
}

//export __OnForceRoundStartPostUnregister
func __OnForceRoundStartPostUnregister(index int32) {
	OnForceRoundStartPostUnregister(listeners.ListenerID(index))
}

//export __OnSetNextRoundPreRegister
func __OnSetNextRoundPreRegister(callback unsafe.Pointer) int32 {
	__result := OnSetNextRoundPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnSetNextRoundPreCallback(nil))).(OnSetNextRoundPreCallback))
	return int32(__result)
}

//export __OnSetNextRoundPreUnregister
func __OnSetNextRoundPreUnregister(index int32) {
	OnSetNextRoundPreUnregister(listeners.ListenerID(index))
}

//export __OnSetNextRoundPostRegister
func __OnSetNextRoundPostRegister(callback unsafe.Pointer) int32 {
	__result := OnSetNextRoundPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnSetNextRoundPostCallback(nil))).(OnSetNextRoundPostCallback))
	return int32(__result)
}

//export __OnSetNextRoundPostUnregister
func __OnSetNextRoundPostUnregister(index int32) {
	OnSetNextRoundPostUnregister(listeners.ListenerID(index))
}

//export __OnCancelCurrentRoundPreRegister
func __OnCancelCurrentRoundPreRegister(callback unsafe.Pointer) int32 {
	__result := OnCancelCurrentRoundPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnCancelCurrentRoundPreCallback(nil))).(OnCancelCurrentRoundPreCallback))
	return int32(__result)
}

//export __OnCancelCurrentRoundPreUnregister
func __OnCancelCurrentRoundPreUnregister(index int32) {
	OnCancelCurrentRoundPreUnregister(listeners.ListenerID(index))
}

//export __OnCancelCurrentRoundPostRegister
func __OnCancelCurrentRoundPostRegister(callback unsafe.Pointer) int32 {
	__result := OnCancelCurrentRoundPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnCancelCurrentRoundPostCallback(nil))).(OnCancelCurrentRoundPostCallback))
	return int32(__result)
}

//export __OnCancelCurrentRoundPostUnregister
func __OnCancelCurrentRoundPostUnregister(index int32) {
	OnCancelCurrentRoundPostUnregister(listeners.ListenerID(index))
}

//export __OnCancelNextRoundPreRegister
func __OnCancelNextRoundPreRegister(callback unsafe.Pointer) int32 {
	__result := OnCancelNextRoundPreRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnCancelNextRoundPreCallback(nil))).(OnCancelNextRoundPreCallback))
	return int32(__result)
}

//export __OnCancelNextRoundPreUnregister
func __OnCancelNextRoundPreUnregister(index int32) {
	OnCancelNextRoundPreUnregister(listeners.ListenerID(index))
}

//export __OnCancelNextRoundPostRegister
func __OnCancelNextRoundPostRegister(callback unsafe.Pointer) int32 {
	__result := OnCancelNextRoundPostRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnCancelNextRoundPostCallback(nil))).(OnCancelNextRoundPostCallback))
	return int32(__result)
}

//export __OnCancelNextRoundPostUnregister
func __OnCancelNextRoundPostUnregister(index int32) {
	OnCancelNextRoundPostUnregister(listeners.ListenerID(index))
}

//export __OnPlayerSpawnRegister
func __OnPlayerSpawnRegister(callback unsafe.Pointer) int32 {
	__result := OnPlayerSpawnRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnPlayerSpawnCallback(nil))).(OnPlayerSpawnCallback))
	return int32(__result)
}

//export __OnPlayerSpawnUnregister
func __OnPlayerSpawnUnregister(index int32) {
	OnPlayerSpawnUnregister(listeners.ListenerID(index))
}

//export __OnRoundStartRegister
func __OnRoundStartRegister(callback unsafe.Pointer) int32 {
	__result := OnRoundStartRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnRoundStartCallback(nil))).(OnRoundStartCallback))
	return int32(__result)
}

//export __OnRoundStartUnregister
func __OnRoundStartUnregister(index int32) {
	OnRoundStartUnregister(listeners.ListenerID(index))
}

//export __OnRoundEndRegister
func __OnRoundEndRegister(callback unsafe.Pointer) int32 {
	__result := OnRoundEndRegister(plugify.GetDelegateForFunctionPointer(callback, reflect.TypeOf(OnRoundEndCallback(nil))).(OnRoundEndCallback))
	return int32(__result)
}

//export __OnRoundEndUnregister
func __OnRoundEndUnregister(index int32) {
	OnRoundEndUnregister(listeners.ListenerID(index))
}

//export __SetNextRound
func __SetNextRound(name *C.String, client int32) bool {
	__result := SetNextRound(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))), client)
	return __result
}

//export __SetNextRoundFromJson
func __SetNextRoundFromJson(presetRound *C.String, client int32) bool {
	__result := SetNextRoundFromJson(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(presetRound))), client)
	return __result
}

//export __CancelNextRound
func __CancelNextRound(client int32) bool {
	__result := CancelNextRound(client)
	return __result
}

//export __StartRound
func __StartRound(name *C.String, client int32) bool {
	__result := StartRound(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))), client)
	return __result
}

//export __StopRound
func __StopRound(client int32) bool {
	__result := StopRound(client)
	return __result
}

//export __IsCustomRound
func __IsCustomRound() bool {
	__result := IsCustomRound()
	return __result
}

//export __IsNextRoundCustom
func __IsNextRoundCustom() bool {
	__result := IsNextRoundCustom()
	return __result
}

//export __IsRoundEnd
func __IsRoundEnd() bool {
	__result := IsRoundEnd()
	return __result
}

//export __IsRoundExists
func __IsRoundExists(name *C.String) bool {
	__result := IsRoundExists(plugify.GetStringData[string]((*plugify.PlgString)(unsafe.Pointer(name))))
	return __result
}

//export __GetNextRoundName
func __GetNextRoundName() C.String {
	__result := GetNextRoundName()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetCurrentRoundName
func __GetCurrentRoundName() C.String {
	__result := GetCurrentRoundName()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetJsonString
func __GetJsonString() C.String {
	__result := GetJsonString()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetCurrentRoundJsonString
func __GetCurrentRoundJsonString() C.String {
	__result := GetCurrentRoundJsonString()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __GetNextRoundKeyValueJsonString
func __GetNextRoundKeyValueJsonString() C.String {
	__result := GetNextRoundKeyValueJsonString()
	__return := plugify.ConstructString(__result)
	return *(*C.String)(unsafe.Pointer(&__return))
}

//export __ReloadConfig
func __ReloadConfig() {
	ReloadConfig()
}
