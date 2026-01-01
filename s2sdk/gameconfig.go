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
#cgo noescape GetGameConfigPatchAll
#cgo noescape GetGameConfigOffsetAll
#cgo noescape GetGameConfigAddressAll
#cgo noescape GetGameConfigVTableAll
#cgo noescape GetGameConfigSignatureAll
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

// Generated from s2sdk (group: gameconfig)

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

// GetGameConfigPatchAll
//
//	@brief Retrieves a patch by scanning all loaded game configurations.
//
//	@param name: The name of the patch to be retrieved.
//
//	@return A string containing the patch, or an empty string if not found.
func GetGameConfigPatchAll(name string) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__native := C.GetGameConfigPatchAll((*C.String)(unsafe.Pointer(&__name)))
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

// GetGameConfigOffsetAll
//
//	@brief Retrieves an offset by scanning all loaded game configurations.
//
//	@param name: The name whose offset is to be retrieved.
//
//	@return The offset associated with the specified name, or -1 if not found.
func GetGameConfigOffsetAll(name string) int32 {
	var __retVal int32
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.GetGameConfigOffsetAll((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameConfigAddressAll
//
//	@brief Retrieves an address by scanning all loaded game configurations.
//
//	@param name: The name whose address is to be retrieved.
//
//	@return A pointer to the address associated with the specified name, or nullptr if not found.
func GetGameConfigAddressAll(name string) uintptr {
	var __retVal uintptr
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetGameConfigAddressAll((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameConfigVTableAll
//
//	@brief Retrieves a vtable by scanning all loaded game configurations.
//
//	@param name: The name of the vtable to be retrieved.
//
//	@return A pointer to the vtable associated with the specified name, or nullptr if not found.
func GetGameConfigVTableAll(name string) uintptr {
	var __retVal uintptr
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetGameConfigVTableAll((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetGameConfigSignatureAll
//
//	@brief Retrieves a signature by scanning all loaded game configurations.
//
//	@param name: The name whose signature is to be resolved and retrieved.
//
//	@return A pointer to the signature associated with the specified name, or nullptr if not found.
func GetGameConfigSignatureAll(name string) uintptr {
	var __retVal uintptr
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetGameConfigSignatureAll((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

var (
	GameConfigErrEmptyHandle = errors.New("GameConfig: empty handle")
)

// GameConfig - RAII wrapper for GameConfig handle.
type GameConfig struct {
	handle    uint32
	cleanup   runtime.Cleanup
	ownership ownership
	noCopy    noCopy
}

// NewGameConfigLoadGameConfigFile - Loads a game configuration file.
//
//	@param paths: The paths to the game configuration file to be loaded.
func NewGameConfigLoadGameConfigFile(paths []string) *GameConfig {
	return NewGameConfigOwned(LoadGameConfigFile(paths))
}

// NewGameConfigBorrowed creates a GameConfig from a borrowed handle
func NewGameConfigBorrowed(handle uint32) *GameConfig {
	if handle == 0 {
		return &GameConfig{}
	}
	return &GameConfig{
		handle:    handle,
		ownership: Borrowed,
	}
}

// NewGameConfigOwned creates a GameConfig from an owned handle
func NewGameConfigOwned(handle uint32) *GameConfig {
	if handle == 0 {
		return &GameConfig{}
	}
	w := &GameConfig{
		handle:    handle,
		ownership: Owned,
	}
	w.cleanup = runtime.AddCleanup(w, w.finalize, struct{}{})
	return w
}

// finalize is the finalizer function (like C++ destructor)
func (w *GameConfig) finalize(_ struct{}) {
	if plugify.Plugin.Loaded {
		w.destroy()
	}
}

// destroy cleans up owned handles
func (w *GameConfig) destroy() {
	if w.handle != 0 && w.ownership == Owned {
		CloseGameConfigFile(w.handle)
	}
}

// nullify resets the handle
func (w *GameConfig) nullify() {
	w.handle = 0
	w.ownership = Borrowed
}

// Close explicitly destroys the handle (like C++ destructor, but manual)
func (w *GameConfig) Close() {
	w.Reset()
}

// Get returns the underlying handle
func (w *GameConfig) Get() uint32 {
	return w.handle
}

// Release releases ownership and returns the handle
func (w *GameConfig) Release() uint32 {
	if w.ownership == Owned {
		w.cleanup.Stop()
	}
	handle := w.handle
	w.nullify()
	return handle
}

// Reset destroys and resets the handle
func (w *GameConfig) Reset() {
	if w.ownership == Owned {
		w.cleanup.Stop()
	}
	w.destroy()
	w.nullify()
}

// IsValid returns true if handle is not nil
func (w *GameConfig) IsValid() bool {
	return w.handle != 0
}

// GetPatch - Retrieves a patch associated with the game configuration.
//
//	@param name: The name of the patch to be retrieved.
//	@return A string where the patch will be stored.
func (w *GameConfig) GetPatch(name string) (string, error) {
	if w.handle == 0 {
		var zero string
		return zero, GameConfigErrEmptyHandle
	}
	return GetGameConfigPatch(w.handle, name), nil
}

// GetOffset - Retrieves the offset associated with a name from the game configuration.
//
//	@param name: The name whose offset is to be retrieved.
//	@return The offset associated with the specified name.
func (w *GameConfig) GetOffset(name string) (int32, error) {
	if w.handle == 0 {
		var zero int32
		return zero, GameConfigErrEmptyHandle
	}
	return GetGameConfigOffset(w.handle, name), nil
}

// GetAddress - Retrieves the address associated with a name from the game configuration.
//
//	@param name: The name whose address is to be retrieved.
//	@return A pointer to the address associated with the specified name.
func (w *GameConfig) GetAddress(name string) (uintptr, error) {
	if w.handle == 0 {
		var zero uintptr
		return zero, GameConfigErrEmptyHandle
	}
	return GetGameConfigAddress(w.handle, name), nil
}

// GetVTable - Retrieves a vtable associated with the game configuration.
//
//	@param name: The name of the vtable to be retrieved.
//	@return A pointer to the vtable associated with the specified name
func (w *GameConfig) GetVTable(name string) (uintptr, error) {
	if w.handle == 0 {
		var zero uintptr
		return zero, GameConfigErrEmptyHandle
	}
	return GetGameConfigVTable(w.handle, name), nil
}

// GetSignature - Retrieves the signature associated with a name from the game configuration.
//
//	@param name: The name whose signature is to be resolved and retrieved.
//	@return A pointer to the signature associated with the specified name.
func (w *GameConfig) GetSignature(name string) (uintptr, error) {
	if w.handle == 0 {
		var zero uintptr
		return zero, GameConfigErrEmptyHandle
	}
	return GetGameConfigSignature(w.handle, name), nil
}
