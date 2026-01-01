package s2sdk

/*
#include "transmit.h"
#cgo noescape SetTransmitInfoEntity
#cgo noescape ClearTransmitInfoEntity
#cgo noescape IsTransmitInfoEntitySet
#cgo noescape SetTransmitInfoEntityAll
#cgo noescape ClearTransmitInfoEntityAll
#cgo noescape SetTransmitInfoNonPlayer
#cgo noescape ClearTransmitInfoNonPlayer
#cgo noescape IsTransmitInfoNonPlayerSet
#cgo noescape SetTransmitInfoNonPlayerAll
#cgo noescape ClearTransmitInfoNonPlayerAll
#cgo noescape SetTransmitInfoAlways
#cgo noescape ClearTransmitInfoAlways
#cgo noescape IsTransmitInfoAlwaysSet
#cgo noescape SetTransmitInfoAlwaysAll
#cgo noescape ClearTransmitInfoAlwaysAll
#cgo noescape GetTransmitInfoTargetSlotsCount
#cgo noescape GetTransmitInfoTargetSlot
#cgo noescape AddTransmitInfoTargetSlot
#cgo noescape RemoveTransmitInfoTargetSlot
#cgo noescape GetTransmitInfoTargetSlotsAll
#cgo noescape RemoveTransmitInfoTargetSlotsAll
#cgo noescape GetTransmitInfoPlayerSlot
#cgo noescape SetTransmitInfoPlayerSlot
#cgo noescape GetTransmitInfoFullUpdate
#cgo noescape SetTransmitInfoFullUpdate
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

// Generated from s2sdk (group: transmit)

// SetTransmitInfoEntity
//
//	@brief Sets a bit in the TransmitEntity bitvec, marking an entity as transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The handle of the entity to mark as transmittable.
func SetTransmitInfoEntity(info uintptr, entityHandle int32) {
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	C.SetTransmitInfoEntity(__info, __entityHandle)
}

// ClearTransmitInfoEntity
//
//	@brief Clears a bit in the TransmitEntity bitvec, marking an entity as not transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The handle of the entity to mark as not transmittable.
func ClearTransmitInfoEntity(info uintptr, entityHandle int32) {
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	C.ClearTransmitInfoEntity(__info, __entityHandle)
}

// IsTransmitInfoEntitySet
//
//	@brief Checks if a bit is set in the TransmitEntity bitvec.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The handle of the entity to check.
//
//	@return True if the entity is marked as transmittable, false otherwise.
func IsTransmitInfoEntitySet(info uintptr, entityHandle int32) bool {
	var __retVal bool
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	__retVal = bool(C.IsTransmitInfoEntitySet(__info, __entityHandle))
	return __retVal
}

// SetTransmitInfoEntityAll
//
//	@brief Sets all bits in the TransmitEntity bitvec, marking all entities as transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
func SetTransmitInfoEntityAll(info uintptr) {
	__info := C.uintptr_t(info)
	C.SetTransmitInfoEntityAll(__info)
}

// ClearTransmitInfoEntityAll
//
//	@brief Clears all bits in the TransmitEntity bitvec, marking all entities as not transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
func ClearTransmitInfoEntityAll(info uintptr) {
	__info := C.uintptr_t(info)
	C.ClearTransmitInfoEntityAll(__info)
}

// SetTransmitInfoNonPlayer
//
//	@brief Sets a bit in the TransmitNonPlayers bitvec, marking a non-player entity as transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The index of the non-player entity to mark as transmittable.
func SetTransmitInfoNonPlayer(info uintptr, entityHandle int32) {
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	C.SetTransmitInfoNonPlayer(__info, __entityHandle)
}

// ClearTransmitInfoNonPlayer
//
//	@brief Clears a bit in the TransmitNonPlayers bitvec, marking a non-player entity as not transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The index of the non-player entity to mark as not transmittable.
func ClearTransmitInfoNonPlayer(info uintptr, entityHandle int32) {
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	C.ClearTransmitInfoNonPlayer(__info, __entityHandle)
}

// IsTransmitInfoNonPlayerSet
//
//	@brief Checks if a bit is set in the TransmitNonPlayers bitvec.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The index of the non-player entity to check.
//
//	@return True if the entity is marked as transmittable, false otherwise.
func IsTransmitInfoNonPlayerSet(info uintptr, entityHandle int32) bool {
	var __retVal bool
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	__retVal = bool(C.IsTransmitInfoNonPlayerSet(__info, __entityHandle))
	return __retVal
}

// SetTransmitInfoNonPlayerAll
//
//	@brief Sets all bits in the TransmitNonPlayers bitvec, marking all non-player entities as transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
func SetTransmitInfoNonPlayerAll(info uintptr) {
	__info := C.uintptr_t(info)
	C.SetTransmitInfoNonPlayerAll(__info)
}

// ClearTransmitInfoNonPlayerAll
//
//	@brief Clears all bits in the TransmitNonPlayers bitvec, marking all non-player entities as not transmittable.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
func ClearTransmitInfoNonPlayerAll(info uintptr) {
	__info := C.uintptr_t(info)
	C.ClearTransmitInfoNonPlayerAll(__info)
}

// SetTransmitInfoAlways
//
//	@brief Sets a bit in the TransmitAlways bitvec, marking an entity to always transmit.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The handle of the entity to mark as always transmittable.
func SetTransmitInfoAlways(info uintptr, entityHandle int32) {
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	C.SetTransmitInfoAlways(__info, __entityHandle)
}

// ClearTransmitInfoAlways
//
//	@brief Clears a bit in the TransmitAlways bitvec, unmarking an entity from always transmit.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The handle of the entity to unmark from always transmit.
func ClearTransmitInfoAlways(info uintptr, entityHandle int32) {
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	C.ClearTransmitInfoAlways(__info, __entityHandle)
}

// IsTransmitInfoAlwaysSet
//
//	@brief Checks if a bit is set in the TransmitAlways bitvec.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param entityHandle: The handle of the entity to check.
//
//	@return True if the entity is marked to always transmit, false otherwise.
func IsTransmitInfoAlwaysSet(info uintptr, entityHandle int32) bool {
	var __retVal bool
	__info := C.uintptr_t(info)
	__entityHandle := C.int32_t(entityHandle)
	__retVal = bool(C.IsTransmitInfoAlwaysSet(__info, __entityHandle))
	return __retVal
}

// SetTransmitInfoAlwaysAll
//
//	@brief Sets all bits in the TransmitAlways bitvec, marking all entities to always transmit.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
func SetTransmitInfoAlwaysAll(info uintptr) {
	__info := C.uintptr_t(info)
	C.SetTransmitInfoAlwaysAll(__info)
}

// ClearTransmitInfoAlwaysAll
//
//	@brief Clears all bits in the TransmitAlways bitvec, unmarking all entities from always transmit.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
func ClearTransmitInfoAlwaysAll(info uintptr) {
	__info := C.uintptr_t(info)
	C.ClearTransmitInfoAlwaysAll(__info)
}

// GetTransmitInfoTargetSlotsCount
//
//	@brief Gets the count of target player slots.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//
//	@return The number of target player slots, or 0 if the info pointer is null.
func GetTransmitInfoTargetSlotsCount(info uintptr) int32 {
	var __retVal int32
	__info := C.uintptr_t(info)
	__retVal = int32(C.GetTransmitInfoTargetSlotsCount(__info))
	return __retVal
}

// GetTransmitInfoTargetSlot
//
//	@brief Gets a player slot value at a specific index in the target slots vector.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param index: The index in the target slots vector.
//
//	@return The player slot value, or -1 if the index is invalid or info is null.
func GetTransmitInfoTargetSlot(info uintptr, index int32) int32 {
	var __retVal int32
	__info := C.uintptr_t(info)
	__index := C.int32_t(index)
	__retVal = int32(C.GetTransmitInfoTargetSlot(__info, __index))
	return __retVal
}

// AddTransmitInfoTargetSlot
//
//	@brief Adds a player slot to the target slots vector.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param playerSlot: The player slot value to add.
func AddTransmitInfoTargetSlot(info uintptr, playerSlot int32) {
	__info := C.uintptr_t(info)
	__playerSlot := C.int32_t(playerSlot)
	C.AddTransmitInfoTargetSlot(__info, __playerSlot)
}

// RemoveTransmitInfoTargetSlot
//
//	@brief Removes a player slot from the target slots vector.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param index: Index within the target slots vector to remove.
func RemoveTransmitInfoTargetSlot(info uintptr, index int32) {
	__info := C.uintptr_t(info)
	__index := C.int32_t(index)
	C.RemoveTransmitInfoTargetSlot(__info, __index)
}

// GetTransmitInfoTargetSlotsAll
//
//	@brief Gets the target slots vector.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//
//	@return The player slots array.
func GetTransmitInfoTargetSlotsAll(info uintptr) []int32 {
	var __retVal []int32
	var __retVal_native plugify.PlgVector
	__info := C.uintptr_t(info)
	plugify.Block{
		Try: func() {
			__native := C.GetTransmitInfoTargetSlotsAll(__info)
			__retVal_native = *(*plugify.PlgVector)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetVectorDataInt32(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorInt32(&__retVal_native)
		},
	}.Do()
	return __retVal
}

// RemoveTransmitInfoTargetSlotsAll
//
//	@brief Clears all target player slots from the vector.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
func RemoveTransmitInfoTargetSlotsAll(info uintptr) {
	__info := C.uintptr_t(info)
	C.RemoveTransmitInfoTargetSlotsAll(__info)
}

// GetTransmitInfoPlayerSlot
//
//	@brief Gets the player slot value from the CCheckTransmitInfo.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//
//	@return The player slot value, or -1 if info is null.
func GetTransmitInfoPlayerSlot(info uintptr) int32 {
	var __retVal int32
	__info := C.uintptr_t(info)
	__retVal = int32(C.GetTransmitInfoPlayerSlot(__info))
	return __retVal
}

// SetTransmitInfoPlayerSlot
//
//	@brief Sets the player slot value in the CCheckTransmitInfo.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param playerSlot: The player slot value to set.
func SetTransmitInfoPlayerSlot(info uintptr, playerSlot int32) {
	__info := C.uintptr_t(info)
	__playerSlot := C.int32_t(playerSlot)
	C.SetTransmitInfoPlayerSlot(__info, __playerSlot)
}

// GetTransmitInfoFullUpdate
//
//	@brief Gets the full update flag from the CCheckTransmitInfo.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//
//	@return True if full update is enabled, false otherwise.
func GetTransmitInfoFullUpdate(info uintptr) bool {
	var __retVal bool
	__info := C.uintptr_t(info)
	__retVal = bool(C.GetTransmitInfoFullUpdate(__info))
	return __retVal
}

// SetTransmitInfoFullUpdate
//
//	@brief Sets the full update flag in the CCheckTransmitInfo.
//
//	@param info: Pointer to the CCheckTransmitInfo structure.
//	@param fullUpdate: The full update flag value to set.
func SetTransmitInfoFullUpdate(info uintptr, fullUpdate bool) {
	__info := C.uintptr_t(info)
	__fullUpdate := C.bool(fullUpdate)
	C.SetTransmitInfoFullUpdate(__info, __fullUpdate)
}

var (
	CheckTransmitInfoErrEmptyHandle = errors.New("CheckTransmitInfo: empty handle")
)

// CheckTransmitInfo - RAII wrapper for CheckTransmitInfo pointer.
type CheckTransmitInfo struct {
	handle uintptr
}

// NewCheckTransmitInfo creates a CheckTransmitInfo from a handle
func NewCheckTransmitInfo(handle uintptr) *CheckTransmitInfo {
	return &CheckTransmitInfo{
		handle: handle,
	}
}

// Get returns the underlying handle
func (w *CheckTransmitInfo) Get() uintptr {
	return w.handle
}

// Release releases ownership and returns the handle
func (w *CheckTransmitInfo) Release() uintptr {
	handle := w.handle
	w.handle = 0
	return handle
}

// Reset destroys and resets the handle
func (w *CheckTransmitInfo) Reset() {
	w.handle = 0
}

// IsValid returns true if handle is not nil
func (w *CheckTransmitInfo) IsValid() bool {
	return w.handle != 0
}

// SetEntity - Sets a bit in the TransmitEntity bitvec, marking an entity as transmittable.
//
//	@param entityHandle: The handle of the entity to mark as transmittable.
func (w *CheckTransmitInfo) SetEntity(entityHandle int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoEntity(w.handle, entityHandle)
	return nil
}

// ClearEntity - Clears a bit in the TransmitEntity bitvec, marking an entity as not transmittable.
//
//	@param entityHandle: The handle of the entity to mark as not transmittable.
func (w *CheckTransmitInfo) ClearEntity(entityHandle int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	ClearTransmitInfoEntity(w.handle, entityHandle)
	return nil
}

// IsEntitySet - Checks if a bit is set in the TransmitEntity bitvec.
//
//	@param entityHandle: The handle of the entity to check.
//	@return True if the entity is marked as transmittable, false otherwise.
func (w *CheckTransmitInfo) IsEntitySet(entityHandle int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return IsTransmitInfoEntitySet(w.handle, entityHandle), nil
}

// SetEntityAll - Sets all bits in the TransmitEntity bitvec, marking all entities as transmittable.
func (w *CheckTransmitInfo) SetEntityAll() error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoEntityAll(w.handle)
	return nil
}

// ClearEntityAll - Clears all bits in the TransmitEntity bitvec, marking all entities as not transmittable.
func (w *CheckTransmitInfo) ClearEntityAll() error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	ClearTransmitInfoEntityAll(w.handle)
	return nil
}

// SetNonPlayer - Sets a bit in the TransmitNonPlayers bitvec, marking a non-player entity as transmittable.
//
//	@param entityHandle: The index of the non-player entity to mark as transmittable.
func (w *CheckTransmitInfo) SetNonPlayer(entityHandle int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoNonPlayer(w.handle, entityHandle)
	return nil
}

// ClearNonPlayer - Clears a bit in the TransmitNonPlayers bitvec, marking a non-player entity as not transmittable.
//
//	@param entityHandle: The index of the non-player entity to mark as not transmittable.
func (w *CheckTransmitInfo) ClearNonPlayer(entityHandle int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	ClearTransmitInfoNonPlayer(w.handle, entityHandle)
	return nil
}

// IsNonPlayerSet - Checks if a bit is set in the TransmitNonPlayers bitvec.
//
//	@param entityHandle: The index of the non-player entity to check.
//	@return True if the entity is marked as transmittable, false otherwise.
func (w *CheckTransmitInfo) IsNonPlayerSet(entityHandle int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return IsTransmitInfoNonPlayerSet(w.handle, entityHandle), nil
}

// SetNonPlayerAll - Sets all bits in the TransmitNonPlayers bitvec, marking all non-player entities as transmittable.
func (w *CheckTransmitInfo) SetNonPlayerAll() error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoNonPlayerAll(w.handle)
	return nil
}

// ClearNonPlayerAll - Clears all bits in the TransmitNonPlayers bitvec, marking all non-player entities as not transmittable.
func (w *CheckTransmitInfo) ClearNonPlayerAll() error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	ClearTransmitInfoNonPlayerAll(w.handle)
	return nil
}

// SetAlways - Sets a bit in the TransmitAlways bitvec, marking an entity to always transmit.
//
//	@param entityHandle: The handle of the entity to mark as always transmittable.
func (w *CheckTransmitInfo) SetAlways(entityHandle int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoAlways(w.handle, entityHandle)
	return nil
}

// ClearAlways - Clears a bit in the TransmitAlways bitvec, unmarking an entity from always transmit.
//
//	@param entityHandle: The handle of the entity to unmark from always transmit.
func (w *CheckTransmitInfo) ClearAlways(entityHandle int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	ClearTransmitInfoAlways(w.handle, entityHandle)
	return nil
}

// IsAlwaysSet - Checks if a bit is set in the TransmitAlways bitvec.
//
//	@param entityHandle: The handle of the entity to check.
//	@return True if the entity is marked to always transmit, false otherwise.
func (w *CheckTransmitInfo) IsAlwaysSet(entityHandle int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return IsTransmitInfoAlwaysSet(w.handle, entityHandle), nil
}

// SetAlwaysAll - Sets all bits in the TransmitAlways bitvec, marking all entities to always transmit.
func (w *CheckTransmitInfo) SetAlwaysAll() error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoAlwaysAll(w.handle)
	return nil
}

// ClearAlwaysAll - Clears all bits in the TransmitAlways bitvec, unmarking all entities from always transmit.
func (w *CheckTransmitInfo) ClearAlwaysAll() error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	ClearTransmitInfoAlwaysAll(w.handle)
	return nil
}

// GetTargetSlotsCount - Gets the count of target player slots.
//
//	@return The number of target player slots, or 0 if the info pointer is null.
func (w *CheckTransmitInfo) GetTargetSlotsCount() (int32, error) {
	if w.handle == 0 {
		var zero int32
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return GetTransmitInfoTargetSlotsCount(w.handle), nil
}

// GetTargetSlot - Gets a player slot value at a specific index in the target slots vector.
//
//	@param index: The index in the target slots vector.
//	@return The player slot value, or -1 if the index is invalid or info is null.
func (w *CheckTransmitInfo) GetTargetSlot(index int32) (int32, error) {
	if w.handle == 0 {
		var zero int32
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return GetTransmitInfoTargetSlot(w.handle, index), nil
}

// AddTargetSlot - Adds a player slot to the target slots vector.
//
//	@param playerSlot: The player slot value to add.
func (w *CheckTransmitInfo) AddTargetSlot(playerSlot int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	AddTransmitInfoTargetSlot(w.handle, playerSlot)
	return nil
}

// RemoveTargetSlot - Removes a player slot from the target slots vector.
//
//	@param index: Index within the target slots vector to remove.
func (w *CheckTransmitInfo) RemoveTargetSlot(index int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	RemoveTransmitInfoTargetSlot(w.handle, index)
	return nil
}

// GetTargetSlotsAll - Gets the target slots vector.
//
//	@return The player slots array.
func (w *CheckTransmitInfo) GetTargetSlotsAll() ([]int32, error) {
	if w.handle == 0 {
		var zero []int32
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return GetTransmitInfoTargetSlotsAll(w.handle), nil
}

// RemoveTargetSlotsAll - Clears all target player slots from the vector.
func (w *CheckTransmitInfo) RemoveTargetSlotsAll() error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	RemoveTransmitInfoTargetSlotsAll(w.handle)
	return nil
}

// GetPlayerSlot - Gets the player slot value from the CCheckTransmitInfo.
//
//	@return The player slot value, or -1 if info is null.
func (w *CheckTransmitInfo) GetPlayerSlot() (int32, error) {
	if w.handle == 0 {
		var zero int32
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return GetTransmitInfoPlayerSlot(w.handle), nil
}

// SetPlayerSlot - Sets the player slot value in the CCheckTransmitInfo.
//
//	@param playerSlot: The player slot value to set.
func (w *CheckTransmitInfo) SetPlayerSlot(playerSlot int32) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoPlayerSlot(w.handle, playerSlot)
	return nil
}

// GetFullUpdate - Gets the full update flag from the CCheckTransmitInfo.
//
//	@return True if full update is enabled, false otherwise.
func (w *CheckTransmitInfo) GetFullUpdate() (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, CheckTransmitInfoErrEmptyHandle
	}
	return GetTransmitInfoFullUpdate(w.handle), nil
}

// SetFullUpdate - Sets the full update flag in the CCheckTransmitInfo.
//
//	@param fullUpdate: The full update flag value to set.
func (w *CheckTransmitInfo) SetFullUpdate(fullUpdate bool) error {
	if w.handle == 0 {
		return CheckTransmitInfoErrEmptyHandle
	}
	SetTransmitInfoFullUpdate(w.handle, fullUpdate)
	return nil
}
