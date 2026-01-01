package s2sdk

/*
#include "weapons.h"
#cgo noescape GetWeaponVDataFromKey
#cgo noescape GetWeaponVData
#cgo noescape GetWeaponType
#cgo noescape GetWeaponCategory
#cgo noescape GetWeaponGearSlot
#cgo noescape GetWeaponItemDefinition
#cgo noescape GetWeaponItemDefinitionByName
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

// Generated from s2sdk (group: weapons)

// GetWeaponVDataFromKey
//
//	@brief Retrieves the weapon VData for a given weapon name.
//
//	@param name: The name of the weapon.
//
//	@return A pointer to the `CCSWeaponBaseVData` if the entity handle is valid and represents a player weapon; otherwise, nullptr.
func GetWeaponVDataFromKey(name string) uintptr {
	var __retVal uintptr
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.GetWeaponVDataFromKey((*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetWeaponVData
//
//	@brief Retrieves the weapon VData for a given weapon.
//
//	@param entityHandle: The handle of the entity from which to retrieve the weapon VData.
//
//	@return A pointer to the `CCSWeaponBaseVData` if the entity handle is valid and represents a player weapon; otherwise, nullptr.
func GetWeaponVData(entityHandle int32) uintptr {
	var __retVal uintptr
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uintptr(C.GetWeaponVData(__entityHandle))
	return __retVal
}

// GetWeaponType
//
//	@brief Retrieves the weapon type of a given entity.
//
//	@param entityHandle: The handle of the entity (weapon).
//
//	@return The type of the weapon, or WEAPONTYPE_UNKNOWN if the entity is invalid.
func GetWeaponType(entityHandle int32) CSWeaponType {
	var __retVal CSWeaponType
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uint32(C.GetWeaponType(__entityHandle))
	return __retVal
}

// GetWeaponCategory
//
//	@brief Retrieves the weapon category of a given entity.
//
//	@param entityHandle: The handle of the entity (weapon).
//
//	@return The category of the weapon, or WEAPONCATEGORY_OTHER if the entity is invalid.
func GetWeaponCategory(entityHandle int32) CSWeaponCategory {
	var __retVal CSWeaponCategory
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uint32(C.GetWeaponCategory(__entityHandle))
	return __retVal
}

// GetWeaponGearSlot
//
//	@brief Retrieves the gear slot of a given weapon entity.
//
//	@param entityHandle: The handle of the entity (weapon).
//
//	@return The gear slot of the weapon, or GEAR_SLOT_INVALID if the entity is invalid.
func GetWeaponGearSlot(entityHandle int32) GearSlot {
	var __retVal GearSlot
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uint32(C.GetWeaponGearSlot(__entityHandle))
	return __retVal
}

// GetWeaponItemDefinition
//
//	@brief Retrieves the weapon definition index for a given entity handle.
//
//	@param entityHandle: The handle of the entity from which to retrieve the weapon def index.
//
//	@return The weapon definition index as a `uint16_t`, or 0 if the entity handle is invalid.
func GetWeaponItemDefinition(entityHandle int32) WeaponDefIndex {
	var __retVal WeaponDefIndex
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uint16(C.GetWeaponItemDefinition(__entityHandle))
	return __retVal
}

// GetWeaponItemDefinitionByName
//
//	@brief Retrieves the item definition index associated with a given item name.
//
//	@param itemName: The name of the item.
//
//	@return The weapon definition index as a `uint16_t`, or 0 if the entity handle is invalid.
func GetWeaponItemDefinitionByName(itemName string) WeaponDefIndex {
	var __retVal WeaponDefIndex
	__itemName := plugify.ConstructString(itemName)
	plugify.Block{
		Try: func() {
			__retVal = uint16(C.GetWeaponItemDefinitionByName((*C.String)(unsafe.Pointer(&__itemName))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__itemName)
		},
	}.Do()
	return __retVal
}
