package s2sdk

/*
#include "listeners.h"
#cgo noescape OnClientConnect_Register
#cgo noescape OnClientConnect_Unregister
#cgo noescape OnClientConnect_Post_Register
#cgo noescape OnClientConnect_Post_Unregister
#cgo noescape OnClientConnected_Register
#cgo noescape OnClientConnected_Unregister
#cgo noescape OnClientPutInServer_Register
#cgo noescape OnClientPutInServer_Unregister
#cgo noescape OnClientDisconnect_Register
#cgo noescape OnClientDisconnect_Unregister
#cgo noescape OnClientDisconnect_Post_Register
#cgo noescape OnClientDisconnect_Post_Unregister
#cgo noescape OnClientActive_Register
#cgo noescape OnClientActive_Unregister
#cgo noescape OnClientFullyConnect_Register
#cgo noescape OnClientFullyConnect_Unregister
#cgo noescape OnClientSettingsChanged_Register
#cgo noescape OnClientSettingsChanged_Unregister
#cgo noescape OnClientAuthenticated_Register
#cgo noescape OnClientAuthenticated_Unregister
#cgo noescape OnRoundTerminated_Register
#cgo noescape OnRoundTerminated_Unregister
#cgo noescape OnEntityCreated_Register
#cgo noescape OnEntityCreated_Unregister
#cgo noescape OnEntityDeleted_Register
#cgo noescape OnEntityDeleted_Unregister
#cgo noescape OnEntityParentChanged_Register
#cgo noescape OnEntityParentChanged_Unregister
#cgo noescape OnServerCheckTransmit_Register
#cgo noescape OnServerCheckTransmit_Unregister
#cgo noescape OnServerStartup_Register
#cgo noescape OnServerStartup_Unregister
#cgo noescape OnServerActivate_Register
#cgo noescape OnServerActivate_Unregister
#cgo noescape OnServerSpawn_Register
#cgo noescape OnServerSpawn_Unregister
#cgo noescape OnServerStarted_Register
#cgo noescape OnServerStarted_Unregister
#cgo noescape OnMapStart_Register
#cgo noescape OnMapStart_Unregister
#cgo noescape OnMapEnd_Register
#cgo noescape OnMapEnd_Unregister
#cgo noescape OnGameFrame_Register
#cgo noescape OnGameFrame_Unregister
#cgo noescape OnUpdateWhenNotInGame_Register
#cgo noescape OnUpdateWhenNotInGame_Unregister
#cgo noescape OnPreWorldUpdate_Register
#cgo noescape OnPreWorldUpdate_Unregister
*/
import "C"
import (
	"errors"
	"github.com/untrustedmodders/go-plugify"
	"reflect"
	"runtime"
	"unsafe"
)

var _ = errors.New("")
var _ = reflect.TypeOf(0)
var _ = runtime.GOOS
var _ = unsafe.Sizeof(0)
var _ = plugify.Plugin.Loaded

// Generated from s2sdk (group: listeners)

// OnClientConnect_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientConnect_Register(callback OnClientConnectCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientConnect_Register(__callback)
}

// OnClientConnect_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientConnect_Unregister(callback OnClientConnectCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientConnect_Unregister(__callback)
}

// OnClientConnect_Post_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientConnect_Post_Register(callback OnClientConnect_PostCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientConnect_Post_Register(__callback)
}

// OnClientConnect_Post_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientConnect_Post_Unregister(callback OnClientConnect_PostCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientConnect_Post_Unregister(__callback)
}

// OnClientConnected_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientConnected_Register(callback OnClientConnectedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientConnected_Register(__callback)
}

// OnClientConnected_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientConnected_Unregister(callback OnClientConnectedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientConnected_Unregister(__callback)
}

// OnClientPutInServer_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientPutInServer_Register(callback OnClientPutInServerCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientPutInServer_Register(__callback)
}

// OnClientPutInServer_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientPutInServer_Unregister(callback OnClientPutInServerCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientPutInServer_Unregister(__callback)
}

// OnClientDisconnect_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientDisconnect_Register(callback OnClientDisconnectCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientDisconnect_Register(__callback)
}

// OnClientDisconnect_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientDisconnect_Unregister(callback OnClientDisconnectCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientDisconnect_Unregister(__callback)
}

// OnClientDisconnect_Post_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientDisconnect_Post_Register(callback OnClientDisconnect_PostCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientDisconnect_Post_Register(__callback)
}

// OnClientDisconnect_Post_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientDisconnect_Post_Unregister(callback OnClientDisconnect_PostCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientDisconnect_Post_Unregister(__callback)
}

// OnClientActive_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientActive_Register(callback OnClientActiveCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientActive_Register(__callback)
}

// OnClientActive_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientActive_Unregister(callback OnClientActiveCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientActive_Unregister(__callback)
}

// OnClientFullyConnect_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientFullyConnect_Register(callback OnClientFullyConnectCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientFullyConnect_Register(__callback)
}

// OnClientFullyConnect_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientFullyConnect_Unregister(callback OnClientFullyConnectCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientFullyConnect_Unregister(__callback)
}

// OnClientSettingsChanged_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientSettingsChanged_Register(callback OnClientSettingsChangedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientSettingsChanged_Register(__callback)
}

// OnClientSettingsChanged_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientSettingsChanged_Unregister(callback OnClientSettingsChangedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientSettingsChanged_Unregister(__callback)
}

// OnClientAuthenticated_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnClientAuthenticated_Register(callback OnClientAuthenticatedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientAuthenticated_Register(__callback)
}

// OnClientAuthenticated_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnClientAuthenticated_Unregister(callback OnClientAuthenticatedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnClientAuthenticated_Unregister(__callback)
}

// OnRoundTerminated_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnRoundTerminated_Register(callback OnRoundTerminatedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnRoundTerminated_Register(__callback)
}

// OnRoundTerminated_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnRoundTerminated_Unregister(callback OnRoundTerminatedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnRoundTerminated_Unregister(__callback)
}

// OnEntityCreated_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnEntityCreated_Register(callback OnEntityCreatedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnEntityCreated_Register(__callback)
}

// OnEntityCreated_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnEntityCreated_Unregister(callback OnEntityCreatedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnEntityCreated_Unregister(__callback)
}

// OnEntityDeleted_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnEntityDeleted_Register(callback OnEntityDeletedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnEntityDeleted_Register(__callback)
}

// OnEntityDeleted_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnEntityDeleted_Unregister(callback OnEntityDeletedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnEntityDeleted_Unregister(__callback)
}

// OnEntityParentChanged_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnEntityParentChanged_Register(callback OnEntityParentChangedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnEntityParentChanged_Register(__callback)
}

// OnEntityParentChanged_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnEntityParentChanged_Unregister(callback OnEntityParentChangedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnEntityParentChanged_Unregister(__callback)
}

// OnServerCheckTransmit_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnServerCheckTransmit_Register(callback OnServerCheckTransmitCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerCheckTransmit_Register(__callback)
}

// OnServerCheckTransmit_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnServerCheckTransmit_Unregister(callback OnServerCheckTransmitCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerCheckTransmit_Unregister(__callback)
}

// OnServerStartup_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnServerStartup_Register(callback OnServerStartupCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerStartup_Register(__callback)
}

// OnServerStartup_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnServerStartup_Unregister(callback OnServerStartupCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerStartup_Unregister(__callback)
}

// OnServerActivate_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnServerActivate_Register(callback OnServerActivateCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerActivate_Register(__callback)
}

// OnServerActivate_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnServerActivate_Unregister(callback OnServerActivateCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerActivate_Unregister(__callback)
}

// OnServerSpawn_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnServerSpawn_Register(callback OnServerSpawnCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerSpawn_Register(__callback)
}

// OnServerSpawn_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnServerSpawn_Unregister(callback OnServerSpawnCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerSpawn_Unregister(__callback)
}

// OnServerStarted_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnServerStarted_Register(callback OnServerStartedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerStarted_Register(__callback)
}

// OnServerStarted_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnServerStarted_Unregister(callback OnServerStartedCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnServerStarted_Unregister(__callback)
}

// OnMapStart_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnMapStart_Register(callback OnMapStartCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnMapStart_Register(__callback)
}

// OnMapStart_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnMapStart_Unregister(callback OnMapStartCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnMapStart_Unregister(__callback)
}

// OnMapEnd_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnMapEnd_Register(callback OnMapEndCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnMapEnd_Register(__callback)
}

// OnMapEnd_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnMapEnd_Unregister(callback OnMapEndCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnMapEnd_Unregister(__callback)
}

// OnGameFrame_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnGameFrame_Register(callback OnGameFrameCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnGameFrame_Register(__callback)
}

// OnGameFrame_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnGameFrame_Unregister(callback OnGameFrameCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnGameFrame_Unregister(__callback)
}

// OnUpdateWhenNotInGame_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnUpdateWhenNotInGame_Register(callback OnUpdateWhenNotInGameCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnUpdateWhenNotInGame_Register(__callback)
}

// OnUpdateWhenNotInGame_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnUpdateWhenNotInGame_Unregister(callback OnUpdateWhenNotInGameCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnUpdateWhenNotInGame_Unregister(__callback)
}

// OnPreWorldUpdate_Register
//
//	@brief Register callback to event.
//
//	@param callback: Function callback.
func OnPreWorldUpdate_Register(callback OnPreWorldUpdateCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnPreWorldUpdate_Register(__callback)
}

// OnPreWorldUpdate_Unregister
//
//	@brief Unregister callback to event.
//
//	@param callback: Function callback.
func OnPreWorldUpdate_Unregister(callback OnPreWorldUpdateCallback) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.OnPreWorldUpdate_Unregister(__callback)
}
