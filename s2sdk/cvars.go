package s2sdk

/*
#include "cvars.h"
#cgo noescape CreateConVar
#cgo noescape CreateConVarBool
#cgo noescape CreateConVarInt16
#cgo noescape CreateConVarUInt16
#cgo noescape CreateConVarInt32
#cgo noescape CreateConVarUInt32
#cgo noescape CreateConVarInt64
#cgo noescape CreateConVarUInt64
#cgo noescape CreateConVarFloat
#cgo noescape CreateConVarDouble
#cgo noescape CreateConVarColor
#cgo noescape CreateConVarVector2
#cgo noescape CreateConVarVector3
#cgo noescape CreateConVarVector4
#cgo noescape CreateConVarQAngle
#cgo noescape CreateConVarString
#cgo noescape FindConVar
#cgo noescape FindConVar2
#cgo noescape HookConVarChange
#cgo noescape UnhookConVarChange
#cgo noescape IsConVarFlagSet
#cgo noescape AddConVarFlags
#cgo noescape RemoveConVarFlags
#cgo noescape GetConVarFlags
#cgo noescape GetConVarBounds
#cgo noescape SetConVarBounds
#cgo noescape GetConVarDefault
#cgo noescape GetConVarValue
#cgo noescape GetConVar
#cgo noescape GetConVarBool
#cgo noescape GetConVarInt16
#cgo noescape GetConVarUInt16
#cgo noescape GetConVarInt32
#cgo noescape GetConVarUInt32
#cgo noescape GetConVarInt64
#cgo noescape GetConVarUInt64
#cgo noescape GetConVarFloat
#cgo noescape GetConVarDouble
#cgo noescape GetConVarString
#cgo noescape GetConVarColor
#cgo noescape GetConVarVector2
#cgo noescape GetConVarVector
#cgo noescape GetConVarVector4
#cgo noescape GetConVarQAngle
#cgo noescape SetConVarValue
#cgo noescape SetConVar
#cgo noescape SetConVarBool
#cgo noescape SetConVarInt16
#cgo noescape SetConVarUInt16
#cgo noescape SetConVarInt32
#cgo noescape SetConVarUInt32
#cgo noescape SetConVarInt64
#cgo noescape SetConVarUInt64
#cgo noescape SetConVarFloat
#cgo noescape SetConVarDouble
#cgo noescape SetConVarString
#cgo noescape SetConVarColor
#cgo noescape SetConVarVector2
#cgo noescape SetConVarVector3
#cgo noescape SetConVarVector4
#cgo noescape SetConVarQAngle
#cgo noescape SendConVarValue
#cgo noescape GetClientConVarValue
#cgo noescape SetFakeClientConVarValue
#cgo noescape QueryClientConVar
#cgo noescape AutoExecConfig
#cgo noescape GetServerLanguage
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

// Generated with https://github.com/untrustedmodders/plugify-module-golang/blob/main/generator/generator.py from s2sdk (group: cvars)

// CreateConVar
//
//	@brief Creates a new console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value of the console variable.
//	@param description: A description of the console variable's purpose.
//	@param flags: Additional flags for the console variable.
//
//	@return A handle to the created console variable.
func CreateConVar(name string, defaultValue interface{}, description string, flags ConVarFlag) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := plugify.ConstructVariant(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVar((*C.String)(unsafe.Pointer(&__name)), (*C.Variant)(unsafe.Pointer(&__defaultValue)), (*C.String)(unsafe.Pointer(&__description)), __flags))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyVariant(&__defaultValue)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarBool
//
//	@brief Creates a new boolean console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarBool(name string, defaultValue bool, description string, flags ConVarFlag, hasMin bool, min bool, hasMax bool, max bool) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.bool(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.bool(min)
	__hasMax := C.bool(hasMax)
	__max := C.bool(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarBool((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarInt16
//
//	@brief Creates a new 16-bit signed integer console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarInt16(name string, defaultValue int16, description string, flags ConVarFlag, hasMin bool, min int16, hasMax bool, max int16) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.int16_t(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.int16_t(min)
	__hasMax := C.bool(hasMax)
	__max := C.int16_t(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarInt16((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarUInt16
//
//	@brief Creates a new 16-bit unsigned integer console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarUInt16(name string, defaultValue uint16, description string, flags ConVarFlag, hasMin bool, min uint16, hasMax bool, max uint16) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.uint16_t(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.uint16_t(min)
	__hasMax := C.bool(hasMax)
	__max := C.uint16_t(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarUInt16((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarInt32
//
//	@brief Creates a new 32-bit signed integer console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarInt32(name string, defaultValue int32, description string, flags ConVarFlag, hasMin bool, min int32, hasMax bool, max int32) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.int32_t(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.int32_t(min)
	__hasMax := C.bool(hasMax)
	__max := C.int32_t(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarInt32((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarUInt32
//
//	@brief Creates a new 32-bit unsigned integer console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarUInt32(name string, defaultValue uint32, description string, flags ConVarFlag, hasMin bool, min uint32, hasMax bool, max uint32) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.uint32_t(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.uint32_t(min)
	__hasMax := C.bool(hasMax)
	__max := C.uint32_t(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarUInt32((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarInt64
//
//	@brief Creates a new 64-bit signed integer console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarInt64(name string, defaultValue int64, description string, flags ConVarFlag, hasMin bool, min int64, hasMax bool, max int64) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.int64_t(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.int64_t(min)
	__hasMax := C.bool(hasMax)
	__max := C.int64_t(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarInt64((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarUInt64
//
//	@brief Creates a new 64-bit unsigned integer console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarUInt64(name string, defaultValue uint64, description string, flags ConVarFlag, hasMin bool, min uint64, hasMax bool, max uint64) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.uint64_t(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.uint64_t(min)
	__hasMax := C.bool(hasMax)
	__max := C.uint64_t(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarUInt64((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarFloat
//
//	@brief Creates a new floating-point console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarFloat(name string, defaultValue float32, description string, flags ConVarFlag, hasMin bool, min float32, hasMax bool, max float32) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.float(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.float(min)
	__hasMax := C.bool(hasMax)
	__max := C.float(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarFloat((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarDouble
//
//	@brief Creates a new double-precision console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarDouble(name string, defaultValue float64, description string, flags ConVarFlag, hasMin bool, min float64, hasMax bool, max float64) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.double(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.double(min)
	__hasMax := C.bool(hasMax)
	__max := C.double(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarDouble((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarColor
//
//	@brief Creates a new color console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default color value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum color value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum color value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarColor(name string, defaultValue int32, description string, flags ConVarFlag, hasMin bool, min int32, hasMax bool, max int32) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := C.int32_t(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := C.int32_t(min)
	__hasMax := C.bool(hasMax)
	__max := C.int32_t(max)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarColor((*C.String)(unsafe.Pointer(&__name)), __defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, __min, __hasMax, __max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarVector2
//
//	@brief Creates a new 2D vector console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarVector2(name string, defaultValue plugify.Vector2, description string, flags ConVarFlag, hasMin bool, min plugify.Vector2, hasMax bool, max plugify.Vector2) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := *(*C.Vector2)(unsafe.Pointer(&defaultValue))
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := *(*C.Vector2)(unsafe.Pointer(&min))
	__hasMax := C.bool(hasMax)
	__max := *(*C.Vector2)(unsafe.Pointer(&max))
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarVector2((*C.String)(unsafe.Pointer(&__name)), &__defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, &__min, __hasMax, &__max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarVector3
//
//	@brief Creates a new 3D vector console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarVector3(name string, defaultValue plugify.Vector3, description string, flags ConVarFlag, hasMin bool, min plugify.Vector3, hasMax bool, max plugify.Vector3) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := *(*C.Vector3)(unsafe.Pointer(&defaultValue))
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := *(*C.Vector3)(unsafe.Pointer(&min))
	__hasMax := C.bool(hasMax)
	__max := *(*C.Vector3)(unsafe.Pointer(&max))
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarVector3((*C.String)(unsafe.Pointer(&__name)), &__defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, &__min, __hasMax, &__max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarVector4
//
//	@brief Creates a new 4D vector console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarVector4(name string, defaultValue plugify.Vector4, description string, flags ConVarFlag, hasMin bool, min plugify.Vector4, hasMax bool, max plugify.Vector4) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := *(*C.Vector4)(unsafe.Pointer(&defaultValue))
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := *(*C.Vector4)(unsafe.Pointer(&min))
	__hasMax := C.bool(hasMax)
	__max := *(*C.Vector4)(unsafe.Pointer(&max))
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarVector4((*C.String)(unsafe.Pointer(&__name)), &__defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, &__min, __hasMax, &__max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarQAngle
//
//	@brief Creates a new quaternion angle console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value for the console variable.
//	@param description: A brief description of the console variable.
//	@param flags: Flags that define the behavior of the console variable.
//	@param hasMin: Indicates if a minimum value is provided.
//	@param min: The minimum value if hasMin is true.
//	@param hasMax: Indicates if a maximum value is provided.
//	@param max: The maximum value if hasMax is true.
//
//	@return A handle to the created console variable data.
func CreateConVarQAngle(name string, defaultValue plugify.Vector3, description string, flags ConVarFlag, hasMin bool, min plugify.Vector3, hasMax bool, max plugify.Vector3) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := *(*C.Vector3)(unsafe.Pointer(&defaultValue))
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__hasMin := C.bool(hasMin)
	__min := *(*C.Vector3)(unsafe.Pointer(&min))
	__hasMax := C.bool(hasMax)
	__max := *(*C.Vector3)(unsafe.Pointer(&max))
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarQAngle((*C.String)(unsafe.Pointer(&__name)), &__defaultValue, (*C.String)(unsafe.Pointer(&__description)), __flags, __hasMin, &__min, __hasMax, &__max))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// CreateConVarString
//
//	@brief Creates a new string console variable.
//
//	@param name: The name of the console variable.
//	@param defaultValue: The default value of the console variable.
//	@param description: A description of the console variable's purpose.
//	@param flags: Additional flags for the console variable.
//
//	@return A handle to the created console variable.
func CreateConVarString(name string, defaultValue string, description string, flags ConVarFlag) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__defaultValue := plugify.ConstructString(defaultValue)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.CreateConVarString((*C.String)(unsafe.Pointer(&__name)), (*C.String)(unsafe.Pointer(&__defaultValue)), (*C.String)(unsafe.Pointer(&__description)), __flags))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__defaultValue)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// FindConVar
//
//	@brief Searches for a console variable.
//
//	@param name: The name of the console variable to search for.
//
//	@return A handle to the console variable data if found; otherwise, nullptr.
func FindConVar(name string) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.FindConVar((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// FindConVar2
//
//	@brief Searches for a console variable of a specific type.
//
//	@param name: The name of the console variable to search for.
//	@param type: The type of the console variable to search for.
//
//	@return A handle to the console variable data if found; otherwise, nullptr.
func FindConVar2(name string, type_ ConVarType) uint64 {
	var __retVal uint64
	__name := plugify.ConstructString(name)
	__type_ := C.int16_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.FindConVar2((*C.String)(unsafe.Pointer(&__name)), __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// HookConVarChange
//
//	@brief Creates a hook for when a console variable's value is changed.
//
//	@param conVarHandle: TThe handle to the console variable data.
//	@param callback: The callback function to be executed when the variable's value changes.
func HookConVarChange(conVarHandle uint64, callback ChangeCallback) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	C.HookConVarChange(__conVarHandle, __callback)
}

// UnhookConVarChange
//
//	@brief Removes a hook for when a console variable's value is changed.
//
//	@param uint64: The handle to the console variable data.
//	@param callback: The callback function to be removed.
func UnhookConVarChange(uint64_ string, callback ChangeCallback) {
	__uint64_ := plugify.ConstructString(uint64_)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	plugify.Block{
		Try: func() {
			C.UnhookConVarChange((*C.String)(unsafe.Pointer(&__uint64_)), __callback)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__uint64_)
		},
	}.Do()
}

// IsConVarFlagSet
//
//	@brief Checks if a specific flag is set for a console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param flag: The flag to check against the console variable.
//
//	@return True if the flag is set; otherwise, false.
func IsConVarFlagSet(conVarHandle uint64, flag int64) bool {
	var __retVal bool
	__conVarHandle := C.uint64_t(conVarHandle)
	__flag := C.int64_t(flag)
	__retVal = bool(C.IsConVarFlagSet(__conVarHandle, __flag))
	return __retVal
}

// AddConVarFlags
//
//	@brief Adds flags to a console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param flags: The flags to be added.
func AddConVarFlags(conVarHandle uint64, flags ConVarFlag) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__flags := C.int64_t(flags)
	C.AddConVarFlags(__conVarHandle, __flags)
}

// RemoveConVarFlags
//
//	@brief Removes flags from a console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param flags: The flags to be removed.
func RemoveConVarFlags(conVarHandle uint64, flags ConVarFlag) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__flags := C.int64_t(flags)
	C.RemoveConVarFlags(__conVarHandle, __flags)
}

// GetConVarFlags
//
//	@brief Retrieves the current flags of a console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current flags set on the console variable.
func GetConVarFlags(conVarHandle uint64) ConVarFlag {
	var __retVal ConVarFlag
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = int64(C.GetConVarFlags(__conVarHandle))
	return __retVal
}

// GetConVarBounds
//
//	@brief Gets the specified bound (max or min) of a console variable and stores it in the output string.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param max: Indicates whether to get the maximum (true) or minimum (false) bound.
//
//	@return The bound value.
func GetConVarBounds(conVarHandle uint64, max bool) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__conVarHandle := C.uint64_t(conVarHandle)
	__max := C.bool(max)
	plugify.Block{
		Try: func() {
			__native := C.GetConVarBounds(__conVarHandle, __max)
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

// SetConVarBounds
//
//	@brief Sets the specified bound (max or min) for a console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param max: Indicates whether to set the maximum (true) or minimum (false) bound.
//	@param value: The value to set as the bound.
func SetConVarBounds(conVarHandle uint64, max bool, value string) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__max := C.bool(max)
	__value := plugify.ConstructString(value)
	plugify.Block{
		Try: func() {
			C.SetConVarBounds(__conVarHandle, __max, (*C.String)(unsafe.Pointer(&__value)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__value)
		},
	}.Do()
}

// GetConVarDefault
//
//	@brief Retrieves the default value of a console variable and stores it in the output string.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The output value in string format.
func GetConVarDefault(conVarHandle uint64) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__conVarHandle := C.uint64_t(conVarHandle)
	plugify.Block{
		Try: func() {
			__native := C.GetConVarDefault(__conVarHandle)
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

// GetConVarValue
//
//	@brief Retrieves the current value of a console variable and stores it in the output string.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The output value in string format.
func GetConVarValue(conVarHandle uint64) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__conVarHandle := C.uint64_t(conVarHandle)
	plugify.Block{
		Try: func() {
			__native := C.GetConVarValue(__conVarHandle)
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

// GetConVar
//
//	@brief Retrieves the current value of a console variable and stores it in the output.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The output value.
func GetConVar(conVarHandle uint64) interface{} {
	var __retVal interface{}
	var __retVal_native plugify.PlgVariant
	__conVarHandle := C.uint64_t(conVarHandle)
	plugify.Block{
		Try: func() {
			__native := C.GetConVar(__conVarHandle)
			__retVal_native = *(*plugify.PlgVariant)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetVariantData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVariant(&__retVal_native)
		},
	}.Do()
	return __retVal
}

// GetConVarBool
//
//	@brief Retrieves the current value of a boolean console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current boolean value of the console variable.
func GetConVarBool(conVarHandle uint64) bool {
	var __retVal bool
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = bool(C.GetConVarBool(__conVarHandle))
	return __retVal
}

// GetConVarInt16
//
//	@brief Retrieves the current value of a signed 16-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current int16_t value of the console variable.
func GetConVarInt16(conVarHandle uint64) int16 {
	var __retVal int16
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = int16(C.GetConVarInt16(__conVarHandle))
	return __retVal
}

// GetConVarUInt16
//
//	@brief Retrieves the current value of an unsigned 16-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current uint16_t value of the console variable.
func GetConVarUInt16(conVarHandle uint64) uint16 {
	var __retVal uint16
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = uint16(C.GetConVarUInt16(__conVarHandle))
	return __retVal
}

// GetConVarInt32
//
//	@brief Retrieves the current value of a signed 32-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current int32_t value of the console variable.
func GetConVarInt32(conVarHandle uint64) int32 {
	var __retVal int32
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = int32(C.GetConVarInt32(__conVarHandle))
	return __retVal
}

// GetConVarUInt32
//
//	@brief Retrieves the current value of an unsigned 32-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current uint32_t value of the console variable.
func GetConVarUInt32(conVarHandle uint64) uint32 {
	var __retVal uint32
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = uint32(C.GetConVarUInt32(__conVarHandle))
	return __retVal
}

// GetConVarInt64
//
//	@brief Retrieves the current value of a signed 64-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current int64_t value of the console variable.
func GetConVarInt64(conVarHandle uint64) int64 {
	var __retVal int64
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = int64(C.GetConVarInt64(__conVarHandle))
	return __retVal
}

// GetConVarUInt64
//
//	@brief Retrieves the current value of an unsigned 64-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current uint64_t value of the console variable.
func GetConVarUInt64(conVarHandle uint64) uint64 {
	var __retVal uint64
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = uint64(C.GetConVarUInt64(__conVarHandle))
	return __retVal
}

// GetConVarFloat
//
//	@brief Retrieves the current value of a float console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current float value of the console variable.
func GetConVarFloat(conVarHandle uint64) float32 {
	var __retVal float32
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = float32(C.GetConVarFloat(__conVarHandle))
	return __retVal
}

// GetConVarDouble
//
//	@brief Retrieves the current value of a double console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current double value of the console variable.
func GetConVarDouble(conVarHandle uint64) float64 {
	var __retVal float64
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = float64(C.GetConVarDouble(__conVarHandle))
	return __retVal
}

// GetConVarString
//
//	@brief Retrieves the current value of a string console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current string value of the console variable.
func GetConVarString(conVarHandle uint64) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__conVarHandle := C.uint64_t(conVarHandle)
	plugify.Block{
		Try: func() {
			__native := C.GetConVarString(__conVarHandle)
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

// GetConVarColor
//
//	@brief Retrieves the current value of a Color console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current Color value of the console variable.
func GetConVarColor(conVarHandle uint64) int32 {
	var __retVal int32
	__conVarHandle := C.uint64_t(conVarHandle)
	__retVal = int32(C.GetConVarColor(__conVarHandle))
	return __retVal
}

// GetConVarVector2
//
//	@brief Retrieves the current value of a Vector2D console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current Vector2D value of the console variable.
func GetConVarVector2(conVarHandle uint64) plugify.Vector2 {
	var __retVal plugify.Vector2
	__conVarHandle := C.uint64_t(conVarHandle)
	__native := C.GetConVarVector2(__conVarHandle)
	__retVal = *(*plugify.Vector2)(unsafe.Pointer(&__native))
	return __retVal
}

// GetConVarVector
//
//	@brief Retrieves the current value of a Vector console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current Vector value of the console variable.
func GetConVarVector(conVarHandle uint64) plugify.Vector3 {
	var __retVal plugify.Vector3
	__conVarHandle := C.uint64_t(conVarHandle)
	__native := C.GetConVarVector(__conVarHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetConVarVector4
//
//	@brief Retrieves the current value of a Vector4D console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current Vector4D value of the console variable.
func GetConVarVector4(conVarHandle uint64) plugify.Vector4 {
	var __retVal plugify.Vector4
	__conVarHandle := C.uint64_t(conVarHandle)
	__native := C.GetConVarVector4(__conVarHandle)
	__retVal = *(*plugify.Vector4)(unsafe.Pointer(&__native))
	return __retVal
}

// GetConVarQAngle
//
//	@brief Retrieves the current value of a QAngle console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//
//	@return The current QAngle value of the console variable.
func GetConVarQAngle(conVarHandle uint64) plugify.Vector3 {
	var __retVal plugify.Vector3
	__conVarHandle := C.uint64_t(conVarHandle)
	__native := C.GetConVarQAngle(__conVarHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetConVarValue
//
//	@brief Sets the value of a console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The string value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarValue(conVarHandle uint64, value string, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := plugify.ConstructString(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	plugify.Block{
		Try: func() {
			C.SetConVarValue(__conVarHandle, (*C.String)(unsafe.Pointer(&__value)), __replicate, __notify)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__value)
		},
	}.Do()
}

// SetConVar
//
//	@brief Sets the value of a console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVar(conVarHandle uint64, value interface{}, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := plugify.ConstructVariant(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	plugify.Block{
		Try: func() {
			C.SetConVar(__conVarHandle, (*C.Variant)(unsafe.Pointer(&__value)), __replicate, __notify)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVariant(&__value)
		},
	}.Do()
}

// SetConVarBool
//
//	@brief Sets the value of a boolean console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarBool(conVarHandle uint64, value bool, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.bool(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarBool(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarInt16
//
//	@brief Sets the value of a signed 16-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarInt16(conVarHandle uint64, value int16, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.int16_t(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarInt16(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarUInt16
//
//	@brief Sets the value of an unsigned 16-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarUInt16(conVarHandle uint64, value uint16, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.uint16_t(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarUInt16(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarInt32
//
//	@brief Sets the value of a signed 32-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarInt32(conVarHandle uint64, value int32, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.int32_t(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarInt32(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarUInt32
//
//	@brief Sets the value of an unsigned 32-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarUInt32(conVarHandle uint64, value uint32, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.uint32_t(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarUInt32(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarInt64
//
//	@brief Sets the value of a signed 64-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarInt64(conVarHandle uint64, value int64, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.int64_t(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarInt64(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarUInt64
//
//	@brief Sets the value of an unsigned 64-bit integer console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarUInt64(conVarHandle uint64, value uint64, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.uint64_t(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarUInt64(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarFloat
//
//	@brief Sets the value of a floating-point console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarFloat(conVarHandle uint64, value float32, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.float(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarFloat(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarDouble
//
//	@brief Sets the value of a double-precision floating-point console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarDouble(conVarHandle uint64, value float64, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.double(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarDouble(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarString
//
//	@brief Sets the value of a string console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarString(conVarHandle uint64, value string, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := plugify.ConstructString(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	plugify.Block{
		Try: func() {
			C.SetConVarString(__conVarHandle, (*C.String)(unsafe.Pointer(&__value)), __replicate, __notify)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__value)
		},
	}.Do()
}

// SetConVarColor
//
//	@brief Sets the value of a color console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarColor(conVarHandle uint64, value int32, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := C.int32_t(value)
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarColor(__conVarHandle, __value, __replicate, __notify)
}

// SetConVarVector2
//
//	@brief Sets the value of a 2D vector console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarVector2(conVarHandle uint64, value plugify.Vector2, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := *(*C.Vector2)(unsafe.Pointer(&value))
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarVector2(__conVarHandle, &__value, __replicate, __notify)
}

// SetConVarVector3
//
//	@brief Sets the value of a 3D vector console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarVector3(conVarHandle uint64, value plugify.Vector3, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarVector3(__conVarHandle, &__value, __replicate, __notify)
}

// SetConVarVector4
//
//	@brief Sets the value of a 4D vector console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarVector4(conVarHandle uint64, value plugify.Vector4, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := *(*C.Vector4)(unsafe.Pointer(&value))
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarVector4(__conVarHandle, &__value, __replicate, __notify)
}

// SetConVarQAngle
//
//	@brief Sets the value of a quaternion angle console variable.
//
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to set for the console variable.
//	@param replicate: If set to true, the new convar value will be set on all clients. This will only work if the convar has the FCVAR_REPLICATED flag and actually exists on clients.
//	@param notify: If set to true, clients will be notified that the convar has changed. This will only work if the convar has the FCVAR_NOTIFY flag.
func SetConVarQAngle(conVarHandle uint64, value plugify.Vector3, replicate bool, notify bool) {
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	__replicate := C.bool(replicate)
	__notify := C.bool(notify)
	C.SetConVarQAngle(__conVarHandle, &__value, __replicate, __notify)
}

// SendConVarValue
//
//	@brief Replicates a console variable value to a specific client. This does not change the actual console variable value.
//
//	@param playerSlot: The index of the client to replicate the value to.
//	@param conVarHandle: The handle to the console variable data.
//	@param value: The value to send to the client.
func SendConVarValue(playerSlot int32, conVarHandle uint64, value string) {
	__playerSlot := C.int32_t(playerSlot)
	__conVarHandle := C.uint64_t(conVarHandle)
	__value := plugify.ConstructString(value)
	plugify.Block{
		Try: func() {
			C.SendConVarValue(__playerSlot, __conVarHandle, (*C.String)(unsafe.Pointer(&__value)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__value)
		},
	}.Do()
}

// GetClientConVarValue
//
//	@brief Retrieves the value of a client's console variable and stores it in the output string.
//
//	@param playerSlot: The index of the client whose console variable value is being retrieved.
//	@param convarName: The name of the console variable to retrieve.
//
//	@return The output string to store the client's console variable value.
func GetClientConVarValue(playerSlot int32, convarName string) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__playerSlot := C.int32_t(playerSlot)
	__convarName := plugify.ConstructString(convarName)
	plugify.Block{
		Try: func() {
			__native := C.GetClientConVarValue(__playerSlot, (*C.String)(unsafe.Pointer(&__convarName)))
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
			plugify.DestroyString(&__convarName)
		},
	}.Do()
	return __retVal
}

// SetFakeClientConVarValue
//
//	@brief Replicates a console variable value to a specific fake client. This does not change the actual console variable value.
//
//	@param playerSlot: The index of the fake client to replicate the value to.
//	@param convarName: The name of the console variable.
//	@param convarValue: The value to set for the console variable.
func SetFakeClientConVarValue(playerSlot int32, convarName string, convarValue string) {
	__playerSlot := C.int32_t(playerSlot)
	__convarName := plugify.ConstructString(convarName)
	__convarValue := plugify.ConstructString(convarValue)
	plugify.Block{
		Try: func() {
			C.SetFakeClientConVarValue(__playerSlot, (*C.String)(unsafe.Pointer(&__convarName)), (*C.String)(unsafe.Pointer(&__convarValue)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__convarName)
			plugify.DestroyString(&__convarValue)
		},
	}.Do()
}

// QueryClientConVar
//
//	@brief Starts a query to retrieve the value of a client's console variable.
//
//	@param playerSlot: The index of the player's slot to query the value from.
//	@param convarName: The name of client convar to query.
//	@param callback: A function to use as a callback when the query has finished.
//	@param data: Optional values to pass to the callback function.
//
//	@return A cookie that uniquely identifies the query. Returns -1 on failure, such as when used on a bot.
func QueryClientConVar(playerSlot int32, convarName string, callback CvarValueCallback, data []interface{}) int32 {
	var __retVal int32
	__playerSlot := C.int32_t(playerSlot)
	__convarName := plugify.ConstructString(convarName)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__data := plugify.ConstructVectorVariant(data)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.QueryClientConVar(__playerSlot, (*C.String)(unsafe.Pointer(&__convarName)), __callback, (*C.Vector)(unsafe.Pointer(&__data))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__convarName)
			plugify.DestroyVectorVariant(&__data)
		},
	}.Do()
	return __retVal
}

// AutoExecConfig
//
//	@brief  Specifies that the given config file should be executed.
//
//	@param conVarHandles: List of handles to the console variable data.
//	@param autoCreate: If true, and the config file does not exist, such a config file will be automatically created and populated with information from the plugin's registered cvars.
//	@param name: Name of the config file, excluding the .cfg extension. Cannot be empty.
//	@param folder: Folder under cfg/ to use. By default this is "plugify." Can be empty.
//
//	@return True on success, false otherwise.
func AutoExecConfig(conVarHandles []uint64, autoCreate bool, name string, folder string) bool {
	var __retVal bool
	__conVarHandles := plugify.ConstructVectorUInt64(conVarHandles)
	__autoCreate := C.bool(autoCreate)
	__name := plugify.ConstructString(name)
	__folder := plugify.ConstructString(folder)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.AutoExecConfig((*C.Vector)(unsafe.Pointer(&__conVarHandles)), __autoCreate, (*C.String)(unsafe.Pointer(&__name)), (*C.String)(unsafe.Pointer(&__folder))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorUInt64(&__conVarHandles)
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__folder)
		},
	}.Do()
	return __retVal
}

// GetServerLanguage
//
//	@brief Returns the current server language.
//
//
//	@return The server language as a string.
func GetServerLanguage() string {
	var __retVal string
	var __retVal_native plugify.PlgString
	plugify.Block{
		Try: func() {
			__native := C.GetServerLanguage()
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
