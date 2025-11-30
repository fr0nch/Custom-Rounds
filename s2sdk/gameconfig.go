package s2sdk

/*
#include "gameconfig.h"
#cgo noescape CloseGameConfigFile
#cgo noescape LoadGameConfigFile
#cgo noescape GetGameConfigPatch
#cgo noescape GetGameConfigOffset
#cgo noescape GetGameConfigAddress
#cgo noescape GetGameConfigVTable
#cgo noescape GetGameConfigSignature
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

// Generated with https://github.com/untrustedmodders/plugify-module-golang/blob/main/generator/generator.py from s2sdk (group: gameconfig)

// CloseGameConfigFile
//
//	@brief Closes a game configuration file.
//
//	@param id: An id to the game configuration to be closed.
func CloseGameConfigFile(id uint32) {
	__id := C.uint32_t(id)
	C.CloseGameConfigFile(__id)
}

// LoadGameConfigFile
//
//	@brief Loads a game configuration file.
//
//	@param paths: The paths to the game configuration file to be loaded.
//
//	@return A id to the loaded game configuration object, or -1 if loading fails.
func LoadGameConfigFile(paths []string) uint32 {
	var __retVal uint32
	__paths := plugify.ConstructVectorString(paths)
	plugify.Block{
		Try: func() {
			__retVal = uint32(C.LoadGameConfigFile((*C.Vector)(unsafe.Pointer(&__paths))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorString(&__paths)
		},
	}.Do()
	return __retVal
}

// GetGameConfigPatch
//
//	@brief Retrieves a patch associated with the game configuration.
//
//	@param id: An id to the game configuration from which to retrieve the patch.
//	@param name: The name of the patch to be retrieved.
//
//	@return A string where the patch will be stored.
func GetGameConfigPatch(id uint32, name string) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__id := C.uint32_t(id)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__native := C.GetGameConfigPatch(__id, (*C.String)(unsafe.Pointer(&__name)))
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameConfigOffset
//
//	@brief Retrieves the offset associated with a name from the game configuration.
//
//	@param id: An id to the game configuration from which to retrieve the offset.
//	@param name: The name whose offset is to be retrieved.
//
//	@return The offset associated with the specified name.
func GetGameConfigOffset(id uint32, name string) int32 {
	var __retVal int32
	__id := C.uint32_t(id)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.GetGameConfigOffset(__id, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameConfigAddress
//
//	@brief Retrieves the address associated with a name from the game configuration.
//
//	@param id: An id to the game configuration from which to retrieve the address.
//	@param name: The name whose address is to be retrieved.
//
//	@return A pointer to the address associated with the specified name.
func GetGameConfigAddress(id uint32, name string) uintptr {
	var __retVal uintptr
	__id := C.uint32_t(id)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetGameConfigAddress(__id, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameConfigVTable
//
//	@brief Retrieves a vtable associated with the game configuration.
//
//	@param id: An id to the game configuration from which to retrieve the vtable.
//	@param name: The name of the vtable to be retrieved.
//
//	@return A pointer to the vtable associated with the specified name
func GetGameConfigVTable(id uint32, name string) uintptr {
	var __retVal uintptr
	__id := C.uint32_t(id)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetGameConfigVTable(__id, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameConfigSignature
//
//	@brief Retrieves the signature associated with a name from the game configuration.
//
//	@param id: An id to the game configuration from which to retrieve the signature.
//	@param name: The name whose signature is to be resolved and retrieved.
//
//	@return A pointer to the signature associated with the specified name.
func GetGameConfigSignature(id uint32, name string) uintptr {
	var __retVal uintptr
	__id := C.uint32_t(id)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetGameConfigSignature(__id, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}
