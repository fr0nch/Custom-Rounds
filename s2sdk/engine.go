package s2sdk

/*
#include "engine.h"
#cgo noescape FindModule
#cgo noescape FindInterface
#cgo noescape QueryInterface
#cgo noescape GetGameDirectory
#cgo noescape GetCurrentMap
#cgo noescape IsMapValid
#cgo noescape GetGameTime
#cgo noescape GetGameTickCount
#cgo noescape GetGameFrameTime
#cgo noescape GetEngineTime
#cgo noescape GetMaxClients
#cgo noescape Precache
#cgo noescape IsPrecached
#cgo noescape GetEconItemSystem
#cgo noescape IsServerPaused
#cgo noescape QueueTaskForNextFrame
#cgo noescape QueueTaskForNextWorldUpdate
#cgo noescape GetSoundDuration
#cgo noescape EmitSound
#cgo noescape StopSound
#cgo noescape EmitSoundToClient
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

// Generated from s2sdk (group: engine)

// FindModule
//
//	@brief Finds a module by name.
//
//	@param name: The name of the module to find.
//
//	@return A pointer to the specified module.
func FindModule(name string) uintptr {
	var __retVal uintptr
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.FindModule((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// FindInterface
//
//	@brief Finds an interface by name.
//
//	@param name: The name of the interface to find.
//
//	@return A pointer to the interface.
func FindInterface(name string) uintptr {
	var __retVal uintptr
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.FindInterface((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// QueryInterface
//
//	@brief Queries an interface from a specified module.
//
//	@param module: The name of the module to query the interface from.
//	@param name: The name of the interface to find.
//
//	@return A pointer to the queried interface.
func QueryInterface(module string, name string) uintptr {
	var __retVal uintptr
	__module := plugify.ConstructString(module)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.QueryInterface((*C.String)(unsafe.Pointer(&__module)), (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__module)
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameDirectory
//
//	@brief Returns the path of the game's directory.
//
//
//	@return A reference to a string where the game directory path will be stored.
func GetGameDirectory() string {
	var __retVal string
	var __retVal_native plugify.PlgString
	plugify.Block{
		Try: func() {
			__native := C.GetGameDirectory()
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

// GetCurrentMap
//
//	@brief Returns the current map name.
//
//
//	@return A reference to a string where the current map name will be stored.
func GetCurrentMap() string {
	var __retVal string
	var __retVal_native plugify.PlgString
	plugify.Block{
		Try: func() {
			__native := C.GetCurrentMap()
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

// IsMapValid
//
//	@brief Returns whether a specified map is valid or not.
//
//	@param mapname: The name of the map to check for validity.
//
//	@return True if the map is valid, false otherwise.
func IsMapValid(mapname string) bool {
	var __retVal bool
	__mapname := plugify.ConstructString(mapname)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.IsMapValid((*C.String)(unsafe.Pointer(&__mapname))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__mapname)
		},
	}.Do()
	return __retVal
}

// GetGameTime
//
//	@brief Returns the game time based on the game tick.
//
//
//	@return The current game time.
func GetGameTime() float32 {
	__retVal := float32(C.GetGameTime())
	return __retVal
}

// GetGameTickCount
//
//	@brief Returns the game's internal tick count.
//
//
//	@return The current tick count of the game.
func GetGameTickCount() int32 {
	__retVal := int32(C.GetGameTickCount())
	return __retVal
}

// GetGameFrameTime
//
//	@brief Returns the time the game took processing the last frame.
//
//
//	@return The frame time of the last processed frame.
func GetGameFrameTime() float32 {
	__retVal := float32(C.GetGameFrameTime())
	return __retVal
}

// GetEngineTime
//
//	@brief Returns a high-precision time value for profiling the engine.
//
//
//	@return A high-precision time value.
func GetEngineTime() float64 {
	__retVal := float64(C.GetEngineTime())
	return __retVal
}

// GetMaxClients
//
//	@brief Returns the maximum number of clients that can connect to the server.
//
//
//	@return The maximum client count, or -1 if global variables are not initialized.
func GetMaxClients() int32 {
	__retVal := int32(C.GetMaxClients())
	return __retVal
}

// Precache
//
//	@brief Precaches a given file.
//
//	@param resource: The name of the resource to be precached.
func Precache(resource string) {
	__resource := plugify.ConstructString(resource)
	plugify.Block{
		Try: func() {
			C.Precache((*C.String)(unsafe.Pointer(&__resource)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__resource)
		},
	}.Do()
}

// IsPrecached
//
//	@brief Checks if a specified file is precached.
//
//	@param resource: The name of the file to check.
func IsPrecached(resource string) bool {
	var __retVal bool
	__resource := plugify.ConstructString(resource)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.IsPrecached((*C.String)(unsafe.Pointer(&__resource))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__resource)
		},
	}.Do()
	return __retVal
}

// GetEconItemSystem
//
//	@brief Returns a pointer to the Economy Item System.
//
//
//	@return A pointer to the Econ Item System.
func GetEconItemSystem() uintptr {
	__retVal := uintptr(C.GetEconItemSystem())
	return __retVal
}

// IsServerPaused
//
//	@brief Checks if the server is currently paused.
//
//
//	@return True if the server is paused, false otherwise.
func IsServerPaused() bool {
	__retVal := bool(C.IsServerPaused())
	return __retVal
}

// QueueTaskForNextFrame
//
//	@brief Queues a task to be executed on the next frame.
//
//	@param callback: A callback function to be executed on the next frame.
//	@param userData: An array intended to hold user-related data, allowing for elements of any type.
func QueueTaskForNextFrame(callback TaskCallback, userData []any) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__userData := plugify.ConstructVectorVariant(userData)
	plugify.Block{
		Try: func() {
			C.QueueTaskForNextFrame(__callback, (*C.Vector)(unsafe.Pointer(&__userData)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorVariant(&__userData)
		},
	}.Do()
}

// QueueTaskForNextWorldUpdate
//
//	@brief Queues a task to be executed on the next world update.
//
//	@param callback: A callback function to be executed on the next world update.
//	@param userData: An array intended to hold user-related data, allowing for elements of any type.
func QueueTaskForNextWorldUpdate(callback TaskCallback, userData []any) {
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__userData := plugify.ConstructVectorVariant(userData)
	plugify.Block{
		Try: func() {
			C.QueueTaskForNextWorldUpdate(__callback, (*C.Vector)(unsafe.Pointer(&__userData)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorVariant(&__userData)
		},
	}.Do()
}

// GetSoundDuration
//
//	@brief Returns the duration of a specified sound.
//
//	@param name: The name of the sound to check.
//
//	@return The duration of the sound in seconds.
func GetSoundDuration(name string) float32 {
	var __retVal float32
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = float32(C.GetSoundDuration((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// EmitSound
//
//	@brief Emits a sound from a specified entity.
//
//	@param entityHandle: The handle of the entity that will emit the sound.
//	@param sound: The name of the sound to emit.
//	@param pitch: The pitch of the sound.
//	@param volume: The volume of the sound.
//	@param delay: The delay before the sound is played.
func EmitSound(entityHandle int32, sound string, pitch int32, volume float32, delay float32) {
	__entityHandle := C.int32_t(entityHandle)
	__sound := plugify.ConstructString(sound)
	__pitch := C.int32_t(pitch)
	__volume := C.float(volume)
	__delay := C.float(delay)
	plugify.Block{
		Try: func() {
			C.EmitSound(__entityHandle, (*C.String)(unsafe.Pointer(&__sound)), __pitch, __volume, __delay)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__sound)
		},
	}.Do()
}

// StopSound
//
//	@brief Stops a sound from a specified entity.
//
//	@param entityHandle: The handle of the entity that will stop the sound.
//	@param sound: The name of the sound to stop.
func StopSound(entityHandle int32, sound string) {
	__entityHandle := C.int32_t(entityHandle)
	__sound := plugify.ConstructString(sound)
	plugify.Block{
		Try: func() {
			C.StopSound(__entityHandle, (*C.String)(unsafe.Pointer(&__sound)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__sound)
		},
	}.Do()
}

// EmitSoundToClient
//
//	@brief Emits a sound to a specific client.
//
//	@param playerSlot: The index of the client to whom the sound will be emitted.
//	@param channel: The channel through which the sound will be played.
//	@param sound: The name of the sound to emit.
//	@param volume: The volume of the sound.
//	@param soundLevel: The level of the sound.
//	@param flags: Additional flags for sound playback.
//	@param pitch: The pitch of the sound.
//	@param origin: The origin of the sound in 3D space.
//	@param soundTime: The time at which the sound should be played.
func EmitSoundToClient(playerSlot int32, channel int32, sound string, volume float32, soundLevel int32, flags int32, pitch int32, origin plugify.Vector3, soundTime float32) {
	__playerSlot := C.int32_t(playerSlot)
	__channel := C.int32_t(channel)
	__sound := plugify.ConstructString(sound)
	__volume := C.float(volume)
	__soundLevel := C.int32_t(soundLevel)
	__flags := C.int32_t(flags)
	__pitch := C.int32_t(pitch)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__soundTime := C.float(soundTime)
	plugify.Block{
		Try: func() {
			C.EmitSoundToClient(__playerSlot, __channel, (*C.String)(unsafe.Pointer(&__sound)), __volume, __soundLevel, __flags, __pitch, &__origin, __soundTime)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__sound)
		},
	}.Do()
}
