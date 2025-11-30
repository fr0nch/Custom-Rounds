package s2sdk

/*
#include "events.h"
#cgo noescape HookEvent
#cgo noescape UnhookEvent
#cgo noescape CreateEvent
#cgo noescape FireEvent
#cgo noescape FireEventToClient
#cgo noescape CancelCreatedEvent
#cgo noescape GetEventBool
#cgo noescape GetEventFloat
#cgo noescape GetEventInt
#cgo noescape GetEventUInt64
#cgo noescape GetEventString
#cgo noescape GetEventPtr
#cgo noescape GetEventPlayerController
#cgo noescape GetEventPlayerIndex
#cgo noescape GetEventPlayerPawn
#cgo noescape GetEventEntity
#cgo noescape GetEventEntityIndex
#cgo noescape GetEventEntityHandle
#cgo noescape GetEventName
#cgo noescape SetEventBool
#cgo noescape SetEventFloat
#cgo noescape SetEventInt
#cgo noescape SetEventUInt64
#cgo noescape SetEventString
#cgo noescape SetEventPtr
#cgo noescape SetEventPlayerController
#cgo noescape SetEventPlayerIndex
#cgo noescape SetEventEntity
#cgo noescape SetEventEntityIndex
#cgo noescape SetEventEntityHandle
#cgo noescape SetEventBroadcast
#cgo noescape LoadEventsFromFile
*/
import "C"
import (
	"github.com/untrustedmodders/go-plugify"
	"reflect"
	"unsafe"
)

var _ = reflect.TypeOf(0)
var _ = unsafe.Sizeof(0)
var _ = plugify.Plugin.Loaded

// Generated with https://github.com/untrustedmodders/plugify-module-golang/blob/main/generator/generator.py from s2sdk (group: events)

// HookEvent
//
//	@brief Creates a hook for when a game event is fired.
//
//	@param name: The name of the event to hook.
//	@param callback: The callback function to call when the event is fired.
//	@param type: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return An integer indicating the result of the hook operation.
func HookEvent(name string, callback EventCallback, type_ HookMode) EventHookError {
	var __retVal EventHookError
	__name := plugify.ConstructString(name)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.HookEvent((*C.String)(unsafe.Pointer(&__name)), __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// UnhookEvent
//
//	@brief Removes a hook for when a game event is fired.
//
//	@param name: The name of the event to unhook.
//	@param callback: The callback function to remove.
//	@param type: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return An integer indicating the result of the unhook operation.
func UnhookEvent(name string, callback EventCallback, type_ HookMode) EventHookError {
	var __retVal EventHookError
	__name := plugify.ConstructString(name)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.UnhookEvent((*C.String)(unsafe.Pointer(&__name)), __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// CreateEvent
//
//	@brief Creates a game event to be fired later.
//
//	@param name: The name of the event to create.
//	@param force: A boolean indicating whether to force the creation of the event.
//
//	@return A pointer to the created EventInfo structure.
func CreateEvent(name string, force bool) uintptr {
	var __retVal uintptr
	__name := plugify.ConstructString(name)
	__force := C.bool(force)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.CreateEvent((*C.String)(unsafe.Pointer(&__name)), __force))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// FireEvent
//
//	@brief Fires a game event.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param dontBroadcast: A boolean indicating whether to broadcast the event.
func FireEvent(info uintptr, dontBroadcast bool) {
	__info := C.uintptr_t(info)
	__dontBroadcast := C.bool(dontBroadcast)
	C.FireEvent(__info, __dontBroadcast)
}

// FireEventToClient
//
//	@brief Fires a game event to a specific client.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param playerSlot: The index of the client to fire the event to.
func FireEventToClient(info uintptr, playerSlot int32) {
	__info := C.uintptr_t(info)
	__playerSlot := C.int32_t(playerSlot)
	C.FireEventToClient(__info, __playerSlot)
}

// CancelCreatedEvent
//
//	@brief Cancels a previously created game event that has not been fired.
//
//	@param info: A pointer to the EventInfo structure of the event to cancel.
func CancelCreatedEvent(info uintptr) {
	__info := C.uintptr_t(info)
	C.CancelCreatedEvent(__info)
}

// GetEventBool
//
//	@brief Retrieves the boolean value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the boolean value.
//
//	@return The boolean value associated with the key.
func GetEventBool(info uintptr, key string) bool {
	var __retVal bool
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.GetEventBool(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventFloat
//
//	@brief Retrieves the float value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the float value.
//
//	@return The float value associated with the key.
func GetEventFloat(info uintptr, key string) float32 {
	var __retVal float32
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = float32(C.GetEventFloat(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventInt
//
//	@brief Retrieves the integer value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the integer value.
//
//	@return The integer value associated with the key.
func GetEventInt(info uintptr, key string) int32 {
	var __retVal int32
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.GetEventInt(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventUInt64
//
//	@brief Retrieves the long integer value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the long integer value.
//
//	@return The long integer value associated with the key.
func GetEventUInt64(info uintptr, key string) uint64 {
	var __retVal uint64
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.GetEventUInt64(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventString
//
//	@brief Retrieves the string value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the string value.
//
//	@return A string where the result will be stored.
func GetEventString(info uintptr, key string) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__native := C.GetEventString(__info, (*C.String)(unsafe.Pointer(&__key)))
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventPtr
//
//	@brief Retrieves the pointer value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the pointer value.
//
//	@return The pointer value associated with the key.
func GetEventPtr(info uintptr, key string) uintptr {
	var __retVal uintptr
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetEventPtr(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventPlayerController
//
//	@brief Retrieves the player controller address of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the player controller address.
//
//	@return A pointer to the player controller associated with the key.
func GetEventPlayerController(info uintptr, key string) uintptr {
	var __retVal uintptr
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetEventPlayerController(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventPlayerIndex
//
//	@brief Retrieves the player index of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the player index.
//
//	@return The player index associated with the key.
func GetEventPlayerIndex(info uintptr, key string) int32 {
	var __retVal int32
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.GetEventPlayerIndex(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventPlayerPawn
//
//	@brief Retrieves the player pawn address of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the player pawn address.
//
//	@return A pointer to the player pawn associated with the key.
func GetEventPlayerPawn(info uintptr, key string) uintptr {
	var __retVal uintptr
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetEventPlayerPawn(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventEntity
//
//	@brief Retrieves the entity address of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the entity address.
//
//	@return A pointer to the entity associated with the key.
func GetEventEntity(info uintptr, key string) uintptr {
	var __retVal uintptr
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetEventEntity(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventEntityIndex
//
//	@brief Retrieves the entity index of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the entity index.
//
//	@return The entity index associated with the key.
func GetEventEntityIndex(info uintptr, key string) int32 {
	var __retVal int32
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.GetEventEntityIndex(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventEntityHandle
//
//	@brief Retrieves the entity handle of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to retrieve the entity handle.
//
//	@return The entity handle associated with the key.
func GetEventEntityHandle(info uintptr, key string) int32 {
	var __retVal int32
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.GetEventEntityHandle(__info, (*C.String)(unsafe.Pointer(&__key))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
	return __retVal
}

// GetEventName
//
//	@brief Retrieves the name of a game event.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//
//	@return A string where the result will be stored.
func GetEventName(info uintptr) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__info := C.uintptr_t(info)
	plugify.Block{
		Try: func() {
			__native := C.GetEventName(__info)
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
		},
	}.Do()
	return __retVal
}

// SetEventBool
//
//	@brief Sets the boolean value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the boolean value.
//	@param value: The boolean value to set.
func SetEventBool(info uintptr, key string, value bool) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.bool(value)
	plugify.Block{
		Try: func() {
			C.SetEventBool(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventFloat
//
//	@brief Sets the floating point value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the float value.
//	@param value: The float value to set.
func SetEventFloat(info uintptr, key string, value float32) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.float(value)
	plugify.Block{
		Try: func() {
			C.SetEventFloat(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventInt
//
//	@brief Sets the integer value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the integer value.
//	@param value: The integer value to set.
func SetEventInt(info uintptr, key string, value int32) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventInt(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventUInt64
//
//	@brief Sets the long integer value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the long integer value.
//	@param value: The long integer value to set.
func SetEventUInt64(info uintptr, key string, value uint64) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.uint64_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventUInt64(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventString
//
//	@brief Sets the string value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the string value.
//	@param value: The string value to set.
func SetEventString(info uintptr, key string, value string) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := plugify.ConstructString(value)
	plugify.Block{
		Try: func() {
			C.SetEventString(__info, (*C.String)(unsafe.Pointer(&__key)), (*C.String)(unsafe.Pointer(&__value)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
			plugify.DestroyString(&__value)
		},
	}.Do()
}

// SetEventPtr
//
//	@brief Sets the pointer value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the pointer value.
//	@param value: The pointer value to set.
func SetEventPtr(info uintptr, key string, value uintptr) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.uintptr_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventPtr(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventPlayerController
//
//	@brief Sets the player controller address of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the player controller address.
//	@param value: A pointer to the player controller to set.
func SetEventPlayerController(info uintptr, key string, value uintptr) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.uintptr_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventPlayerController(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventPlayerIndex
//
//	@brief Sets the player index value of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the player index value.
//	@param value: The player index value to set.
func SetEventPlayerIndex(info uintptr, key string, value int32) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventPlayerIndex(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventEntity
//
//	@brief Sets the entity address of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the entity address.
//	@param value: A pointer to the entity to set.
func SetEventEntity(info uintptr, key string, value uintptr) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.uintptr_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventEntity(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventEntityIndex
//
//	@brief Sets the entity index of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the entity index.
//	@param value: The entity index value to set.
func SetEventEntityIndex(info uintptr, key string, value int32) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventEntityIndex(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventEntityHandle
//
//	@brief Sets the entity handle of a game event's key.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param key: The key for which to set the entity handle.
//	@param value: The entity handle value to set.
func SetEventEntityHandle(info uintptr, key string, value int32) {
	__info := C.uintptr_t(info)
	__key := plugify.ConstructString(key)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			C.SetEventEntityHandle(__info, (*C.String)(unsafe.Pointer(&__key)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__key)
		},
	}.Do()
}

// SetEventBroadcast
//
//	@brief Sets whether an event's broadcasting will be disabled or not.
//
//	@param info: A pointer to the EventInfo structure containing event data.
//	@param dontBroadcast: A boolean indicating whether to disable broadcasting.
func SetEventBroadcast(info uintptr, dontBroadcast bool) {
	__info := C.uintptr_t(info)
	__dontBroadcast := C.bool(dontBroadcast)
	C.SetEventBroadcast(__info, __dontBroadcast)
}

// LoadEventsFromFile
//
//	@brief Load game event descriptions from a file (e.g., "resource/gameevents.res").
//
//	@param path: The path to the file containing event descriptions.
//	@param searchAll: A boolean indicating whether to search all paths for the file.
//
//	@return An integer indicating the result of the loading operation.
func LoadEventsFromFile(path string, searchAll bool) int32 {
	var __retVal int32
	__path := plugify.ConstructString(path)
	__searchAll := C.bool(searchAll)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.LoadEventsFromFile((*C.String)(unsafe.Pointer(&__path)), __searchAll))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__path)
		},
	}.Do()
	return __retVal
}
