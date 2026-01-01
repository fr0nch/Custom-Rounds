package s2sdk

/*
#include "timers.h"
#cgo noescape CreateTimer
#cgo noescape KillsTimer
#cgo noescape RescheduleTimer
#cgo noescape GetTickInterval
#cgo noescape GetTickedTime
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

// Generated from s2sdk (group: timers)

// CreateTimer
//
//	@brief Creates a new timer that executes a callback function at specified delays.
//
//	@param delay: The time delay in seconds between each callback execution.
//	@param callback: The function to be called when the timer expires.
//	@param flags: Flags that modify the behavior of the timer (e.g., no-map change, repeating).
//	@param userData: An array intended to hold user-related data, allowing for elements of any type.
//
//	@return A id to the newly created Timer object, or -1 if the timer could not be created.
func CreateTimer(delay float64, callback TimerCallback, flags TimerFlag, userData []any) uint32 {
	var __retVal uint32
	__delay := C.double(delay)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__flags := C.int32_t(flags)
	__userData := plugify.ConstructVectorVariant(userData)
	plugify.Block{
		Try: func() {
			__retVal = uint32(C.CreateTimer(__delay, __callback, __flags, (*C.Vector)(unsafe.Pointer(&__userData))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorVariant(&__userData)
		},
	}.Do()
	return __retVal
}

// KillsTimer
//
//	@brief Stops and removes an existing timer.
//
//	@param timer: A id of the Timer object to be stopped and removed.
func KillsTimer(timer uint32) {
	__timer := C.uint32_t(timer)
	C.KillsTimer(__timer)
}

// RescheduleTimer
//
//	@brief Reschedules an existing timer with a new delay.
//
//	@param timer: A id of the Timer object to be stopped and removed.
//	@param newDaly: The new delay in seconds between each callback execution.
func RescheduleTimer(timer uint32, newDaly float64) {
	__timer := C.uint32_t(timer)
	__newDaly := C.double(newDaly)
	C.RescheduleTimer(__timer, __newDaly)
}

// GetTickInterval
//
//	@brief Returns the number of seconds in between game server ticks.
//
//
//	@return The tick interval value.
func GetTickInterval() float64 {
	__retVal := float64(C.GetTickInterval())
	return __retVal
}

// GetTickedTime
//
//	@brief Returns the simulated game time.
//
//
//	@return The ticked time value.
func GetTickedTime() float64 {
	__retVal := float64(C.GetTickedTime())
	return __retVal
}
