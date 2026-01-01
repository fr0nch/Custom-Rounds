package s2sdk

/*
#include "entities.h"
#cgo noescape EntIndexToEntPointer
#cgo noescape EntPointerToEntIndex
#cgo noescape EntPointerToEntHandle
#cgo noescape EntHandleToEntPointer
#cgo noescape EntIndexToEntHandle
#cgo noescape EntHandleToEntIndex
#cgo noescape IsValidEntHandle
#cgo noescape IsValidEntPointer
#cgo noescape GetFirstActiveEntity
#cgo noescape GetPrevActiveEntity
#cgo noescape GetNextActiveEntity
#cgo noescape HookEntityOutput
#cgo noescape UnhookEntityOutput
#cgo noescape FindEntityByClassname
#cgo noescape FindEntityByClassnameNearest
#cgo noescape FindEntityByClassnameWithin
#cgo noescape FindEntityByName
#cgo noescape FindEntityByNameNearest
#cgo noescape FindEntityByNameWithin
#cgo noescape FindEntityByTarget
#cgo noescape FindEntityInSphere
#cgo noescape SpawnEntityByName
#cgo noescape CreateEntityByName
#cgo noescape DispatchSpawn
#cgo noescape DispatchSpawn2
#cgo noescape RemoveEntity
#cgo noescape IsEntityPlayerController
#cgo noescape IsEntityPlayerPawn
#cgo noescape GetEntityClassname
#cgo noescape GetEntityName
#cgo noescape SetEntityName
#cgo noescape GetEntityMoveType
#cgo noescape SetEntityMoveType
#cgo noescape GetEntityGravity
#cgo noescape SetEntityGravity
#cgo noescape GetEntityFlags
#cgo noescape SetEntityFlags
#cgo noescape GetEntityRenderColor
#cgo noescape SetEntityRenderColor
#cgo noescape GetEntityRenderMode
#cgo noescape SetEntityRenderMode
#cgo noescape GetEntityMass
#cgo noescape SetEntityMass
#cgo noescape GetEntityFriction
#cgo noescape SetEntityFriction
#cgo noescape GetEntityHealth
#cgo noescape SetEntityHealth
#cgo noescape GetEntityMaxHealth
#cgo noescape SetEntityMaxHealth
#cgo noescape GetEntityTeam
#cgo noescape SetEntityTeam
#cgo noescape GetEntityOwner
#cgo noescape SetEntityOwner
#cgo noescape GetEntityParent
#cgo noescape SetEntityParent
#cgo noescape SetEntityParentAttachment
#cgo noescape GetEntityAbsOrigin
#cgo noescape SetEntityAbsOrigin
#cgo noescape GetEntityAbsScale
#cgo noescape SetEntityAbsScale
#cgo noescape GetEntityAbsAngles
#cgo noescape SetEntityAbsAngles
#cgo noescape GetEntityLocalOrigin
#cgo noescape SetEntityLocalOrigin
#cgo noescape GetEntityLocalScale
#cgo noescape SetEntityLocalScale
#cgo noescape GetEntityLocalAngles
#cgo noescape SetEntityLocalAngles
#cgo noescape GetEntityAbsVelocity
#cgo noescape SetEntityAbsVelocity
#cgo noescape GetEntityBaseVelocity
#cgo noescape GetEntityLocalAngVelocity
#cgo noescape GetEntityAngVelocity
#cgo noescape SetEntityAngVelocity
#cgo noescape GetEntityLocalVelocity
#cgo noescape GetEntityAngRotation
#cgo noescape SetEntityAngRotation
#cgo noescape TransformPointEntityToWorld
#cgo noescape TransformPointWorldToEntity
#cgo noescape GetEntityEyePosition
#cgo noescape GetEntityEyeAngles
#cgo noescape SetEntityForwardVector
#cgo noescape GetEntityForwardVector
#cgo noescape GetEntityLeftVector
#cgo noescape GetEntityRightVector
#cgo noescape GetEntityUpVector
#cgo noescape GetEntityTransform
#cgo noescape GetEntityModel
#cgo noescape SetEntityModel
#cgo noescape GetEntityWaterLevel
#cgo noescape GetEntityGroundEntity
#cgo noescape GetEntityEffects
#cgo noescape AddEntityEffects
#cgo noescape RemoveEntityEffects
#cgo noescape GetEntityBoundingMaxs
#cgo noescape GetEntityBoundingMins
#cgo noescape GetEntityCenter
#cgo noescape TeleportEntity
#cgo noescape ApplyAbsVelocityImpulseToEntity
#cgo noescape ApplyLocalAngularVelocityImpulseToEntity
#cgo noescape AcceptEntityInput
#cgo noescape ConnectEntityOutput
#cgo noescape DisconnectEntityOutput
#cgo noescape DisconnectEntityRedirectedOutput
#cgo noescape FireEntityOutput
#cgo noescape RedirectEntityOutput
#cgo noescape FollowEntity
#cgo noescape FollowEntityMerge
#cgo noescape TakeEntityDamage
#cgo noescape GetEntityAttributeFloatValue
#cgo noescape GetEntityAttributeIntValue
#cgo noescape SetEntityAttributeFloatValue
#cgo noescape SetEntityAttributeIntValue
#cgo noescape DeleteEntityAttribute
#cgo noescape HasEntityAttribute
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

// Generated from s2sdk (group: entities)

// EntIndexToEntPointer
//
//	@brief Converts an entity index into an entity pointer.
//
//	@param entityIndex: The index of the entity to convert.
//
//	@return A pointer to the entity instance, or nullptr if the entity does not exist.
func EntIndexToEntPointer(entityIndex int32) uintptr {
	var __retVal uintptr
	__entityIndex := C.int32_t(entityIndex)
	__retVal = uintptr(C.EntIndexToEntPointer(__entityIndex))
	return __retVal
}

// EntPointerToEntIndex
//
//	@brief Retrieves the entity index from an entity pointer.
//
//	@param entity: A pointer to the entity whose index is to be retrieved.
//
//	@return The index of the entity, or -1 if the entity is nullptr.
func EntPointerToEntIndex(entity uintptr) int32 {
	var __retVal int32
	__entity := C.uintptr_t(entity)
	__retVal = int32(C.EntPointerToEntIndex(__entity))
	return __retVal
}

// EntPointerToEntHandle
//
//	@brief Converts an entity pointer into an entity handle.
//
//	@param entity: A pointer to the entity to convert.
//
//	@return The entity handle as an integer, or INVALID_EHANDLE_INDEX if the entity is nullptr.
func EntPointerToEntHandle(entity uintptr) int32 {
	var __retVal int32
	__entity := C.uintptr_t(entity)
	__retVal = int32(C.EntPointerToEntHandle(__entity))
	return __retVal
}

// EntHandleToEntPointer
//
//	@brief Retrieves the entity pointer from an entity handle.
//
//	@param entityHandle: The entity handle to convert.
//
//	@return A pointer to the entity instance, or nullptr if the handle is invalid.
func EntHandleToEntPointer(entityHandle int32) uintptr {
	var __retVal uintptr
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uintptr(C.EntHandleToEntPointer(__entityHandle))
	return __retVal
}

// EntIndexToEntHandle
//
//	@brief Converts an entity index into an entity handle.
//
//	@param entityIndex: The index of the entity to convert.
//
//	@return The entity handle as an integer, or -1 if the entity index is invalid.
func EntIndexToEntHandle(entityIndex int32) int32 {
	var __retVal int32
	__entityIndex := C.int32_t(entityIndex)
	__retVal = int32(C.EntIndexToEntHandle(__entityIndex))
	return __retVal
}

// EntHandleToEntIndex
//
//	@brief Retrieves the entity index from an entity handle.
//
//	@param entityHandle: The entity handle from which to retrieve the index.
//
//	@return The index of the entity, or -1 if the handle is invalid.
func EntHandleToEntIndex(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.EntHandleToEntIndex(__entityHandle))
	return __retVal
}

// IsValidEntHandle
//
//	@brief Checks if the provided entity handle is valid.
//
//	@param entityHandle: The entity handle to check.
//
//	@return True if the entity handle is valid, false otherwise.
func IsValidEntHandle(entityHandle int32) bool {
	var __retVal bool
	__entityHandle := C.int32_t(entityHandle)
	__retVal = bool(C.IsValidEntHandle(__entityHandle))
	return __retVal
}

// IsValidEntPointer
//
//	@brief Checks if the provided entity pointer is valid.
//
//	@param entity: The entity pointer to check.
//
//	@return True if the entity pointer is valid, false otherwise.
func IsValidEntPointer(entity uintptr) bool {
	var __retVal bool
	__entity := C.uintptr_t(entity)
	__retVal = bool(C.IsValidEntPointer(__entity))
	return __retVal
}

// GetFirstActiveEntity
//
//	@brief Retrieves the pointer to the first active entity.
//
//
//	@return A handle to the first active entity.
func GetFirstActiveEntity() int32 {
	__retVal := int32(C.GetFirstActiveEntity())
	return __retVal
}

// GetPrevActiveEntity
//
//	@brief Retrieves the previous active entity.
//
//
//	@return Handle to the previous entity.
func GetPrevActiveEntity(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetPrevActiveEntity(__entityHandle))
	return __retVal
}

// GetNextActiveEntity
//
//	@brief Retrieves the next active entity.
//
//
//	@return Handle to the next entity.
func GetNextActiveEntity(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetNextActiveEntity(__entityHandle))
	return __retVal
}

// HookEntityOutput
//
//	@brief Adds an entity output hook on a specified entity class name.
//
//	@param classname: The class name of the entity to hook the output for.
//	@param output: The output event name to hook.
//	@param callback: The callback function to invoke when the output is fired.
//	@param type_: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return True if the hook was successfully added, false otherwise.
func HookEntityOutput(classname string, output string, callback HookEntityOutputCallback, type_ HookMode) bool {
	var __retVal bool
	__classname := plugify.ConstructString(classname)
	__output := plugify.ConstructString(output)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.HookEntityOutput((*C.String)(unsafe.Pointer(&__classname)), (*C.String)(unsafe.Pointer(&__output)), __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__classname)
			plugify.DestroyString(&__output)
		},
	}.Do()
	return __retVal
}

// UnhookEntityOutput
//
//	@brief Removes an entity output hook.
//
//	@param classname: The class name of the entity from which to unhook the output.
//	@param output: The output event name to unhook.
//	@param callback: The callback function that was previously hooked.
//	@param type_: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return True if the hook was successfully removed, false otherwise.
func UnhookEntityOutput(classname string, output string, callback HookEntityOutputCallback, type_ HookMode) bool {
	var __retVal bool
	__classname := plugify.ConstructString(classname)
	__output := plugify.ConstructString(output)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.UnhookEntityOutput((*C.String)(unsafe.Pointer(&__classname)), (*C.String)(unsafe.Pointer(&__output)), __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__classname)
			plugify.DestroyString(&__output)
		},
	}.Do()
	return __retVal
}

// FindEntityByClassname
//
//	@brief Finds an entity by classname with iteration.
//
//	@param startFrom: The handle of the entity to start from, or INVALID_EHANDLE_INDEX to start fresh.
//	@param classname: The class name to search for.
//
//	@return The handle of the found entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityByClassname(startFrom int32, classname string) int32 {
	var __retVal int32
	__startFrom := C.int32_t(startFrom)
	__classname := plugify.ConstructString(classname)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.FindEntityByClassname(__startFrom, (*C.String)(unsafe.Pointer(&__classname))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__classname)
		},
	}.Do()
	return __retVal
}

// FindEntityByClassnameNearest
//
//	@brief Finds the nearest entity by classname to a point.
//
//	@param startFrom: The handle of the entity to start from, or INVALID_EHANDLE_INDEX to start fresh.
//	@param classname: The class name to search for.
//	@param origin: The center point to search around.
//	@param maxRadius: Maximum search radius.
//
//	@return The handle of the found entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityByClassnameNearest(startFrom int32, classname string, origin plugify.Vector3, maxRadius float32) int32 {
	var __retVal int32
	__startFrom := C.int32_t(startFrom)
	__classname := plugify.ConstructString(classname)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__maxRadius := C.float(maxRadius)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.FindEntityByClassnameNearest(__startFrom, (*C.String)(unsafe.Pointer(&__classname)), &__origin, __maxRadius))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__classname)
		},
	}.Do()
	return __retVal
}

// FindEntityByClassnameWithin
//
//	@brief Finds an entity by classname within a radius with iteration.
//
//	@param startFrom: The handle of the entity to start from, or INVALID_EHANDLE_INDEX to start fresh.
//	@param classname: The class name to search for.
//	@param origin: The center of the search sphere.
//	@param radius: The search radius.
//
//	@return The handle of the found entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityByClassnameWithin(startFrom int32, classname string, origin plugify.Vector3, radius float32) int32 {
	var __retVal int32
	__startFrom := C.int32_t(startFrom)
	__classname := plugify.ConstructString(classname)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__radius := C.float(radius)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.FindEntityByClassnameWithin(__startFrom, (*C.String)(unsafe.Pointer(&__classname)), &__origin, __radius))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__classname)
		},
	}.Do()
	return __retVal
}

// FindEntityByName
//
//	@brief Finds an entity by name with iteration.
//
//	@param startFrom: The handle of the entity to start from, or INVALID_EHANDLE_INDEX to start fresh.
//	@param name: The targetname to search for.
//
//	@return The handle of the found entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityByName(startFrom int32, name string) int32 {
	var __retVal int32
	__startFrom := C.int32_t(startFrom)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.FindEntityByName(__startFrom, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// FindEntityByNameNearest
//
//	@brief Finds the nearest entity by name to a point.
//
//	@param name: The targetname to search for.
//	@param origin: The point to search around.
//	@param maxRadius: Maximum search radius.
//
//	@return The handle of the nearest entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityByNameNearest(name string, origin plugify.Vector3, maxRadius float32) int32 {
	var __retVal int32
	__name := plugify.ConstructString(name)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__maxRadius := C.float(maxRadius)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.FindEntityByNameNearest((*C.String)(unsafe.Pointer(&__name)), &__origin, __maxRadius))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// FindEntityByNameWithin
//
//	@brief Finds an entity by name within a radius with iteration.
//
//	@param startFrom: The handle of the entity to start from, or INVALID_EHANDLE_INDEX to start fresh.
//	@param name: The targetname to search for.
//	@param origin: The center of the search sphere.
//	@param radius: The search radius.
//
//	@return The handle of the found entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityByNameWithin(startFrom int32, name string, origin plugify.Vector3, radius float32) int32 {
	var __retVal int32
	__startFrom := C.int32_t(startFrom)
	__name := plugify.ConstructString(name)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__radius := C.float(radius)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.FindEntityByNameWithin(__startFrom, (*C.String)(unsafe.Pointer(&__name)), &__origin, __radius))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// FindEntityByTarget
//
//	@brief Finds an entity by targetname with iteration.
//
//	@param startFrom: The handle of the entity to start from, or INVALID_EHANDLE_INDEX to start fresh.
//	@param name: The targetname to search for.
//
//	@return The handle of the found entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityByTarget(startFrom int32, name string) int32 {
	var __retVal int32
	__startFrom := C.int32_t(startFrom)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.FindEntityByTarget(__startFrom, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// FindEntityInSphere
//
//	@brief Finds an entity within a sphere with iteration.
//
//	@param startFrom: The handle of the entity to start from, or INVALID_EHANDLE_INDEX to start fresh.
//	@param origin: The center of the search sphere.
//	@param radius: The search radius.
//
//	@return The handle of the found entity, or INVALID_EHANDLE_INDEX if none found.
func FindEntityInSphere(startFrom int32, origin plugify.Vector3, radius float32) int32 {
	var __retVal int32
	__startFrom := C.int32_t(startFrom)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__radius := C.float(radius)
	__retVal = int32(C.FindEntityInSphere(__startFrom, &__origin, __radius))
	return __retVal
}

// SpawnEntityByName
//
//	@brief Creates an entity by classname.
//
//	@param className: The class name of the entity to create.
//
//	@return The handle of the created entity, or INVALID_EHANDLE_INDEX if creation failed.
func SpawnEntityByName(className string) int32 {
	var __retVal int32
	__className := plugify.ConstructString(className)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.SpawnEntityByName((*C.String)(unsafe.Pointer(&__className))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__className)
		},
	}.Do()
	return __retVal
}

// CreateEntityByName
//
//	@brief Creates an entity by string name but does not spawn it.
//
//	@param className: The class name of the entity to create.
//
//	@return The entity handle of the created entity, or INVALID_EHANDLE_INDEX if the entity could not be created.
func CreateEntityByName(className string) int32 {
	var __retVal int32
	__className := plugify.ConstructString(className)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.CreateEntityByName((*C.String)(unsafe.Pointer(&__className))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__className)
		},
	}.Do()
	return __retVal
}

// DispatchSpawn
//
//	@brief Spawns an entity into the game.
//
//	@param entityHandle: The handle of the entity to spawn.
func DispatchSpawn(entityHandle int32) {
	__entityHandle := C.int32_t(entityHandle)
	C.DispatchSpawn(__entityHandle)
}

// DispatchSpawn2
//
//	@brief Spawns an entity into the game with key-value properties.
//
//	@param entityHandle: The handle of the entity to spawn.
//	@param keys: A vector of keys representing the property names to set on the entity.
//	@param values: A vector of values corresponding to the keys, representing the property values to set on the entity.
func DispatchSpawn2(entityHandle int32, keys []string, values []any) {
	__entityHandle := C.int32_t(entityHandle)
	__keys := plugify.ConstructVectorString(keys)
	__values := plugify.ConstructVectorVariant(values)
	plugify.Block{
		Try: func() {
			C.DispatchSpawn2(__entityHandle, (*C.Vector)(unsafe.Pointer(&__keys)), (*C.Vector)(unsafe.Pointer(&__values)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorString(&__keys)
			plugify.DestroyVectorVariant(&__values)
		},
	}.Do()
}

// RemoveEntity
//
//	@brief Marks an entity for deletion.
//
//	@param entityHandle: The handle of the entity to be deleted.
func RemoveEntity(entityHandle int32) {
	__entityHandle := C.int32_t(entityHandle)
	C.RemoveEntity(__entityHandle)
}

// IsEntityPlayerController
//
//	@brief Checks if an entity is a player controller.
//
//	@param entityHandle: The handle of the entity.
//
//	@return True if the entity is a player controller, false otherwise.
func IsEntityPlayerController(entityHandle int32) bool {
	var __retVal bool
	__entityHandle := C.int32_t(entityHandle)
	__retVal = bool(C.IsEntityPlayerController(__entityHandle))
	return __retVal
}

// IsEntityPlayerPawn
//
//	@brief Checks if an entity is a player pawn.
//
//	@param entityHandle: The handle of the entity.
//
//	@return True if the entity is a player pawn, false otherwise.
func IsEntityPlayerPawn(entityHandle int32) bool {
	var __retVal bool
	__entityHandle := C.int32_t(entityHandle)
	__retVal = bool(C.IsEntityPlayerPawn(__entityHandle))
	return __retVal
}

// GetEntityClassname
//
//	@brief Retrieves the class name of an entity.
//
//	@param entityHandle: The handle of the entity whose class name is to be retrieved.
//
//	@return A string where the class name will be stored.
func GetEntityClassname(entityHandle int32) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__entityHandle := C.int32_t(entityHandle)
	plugify.Block{
		Try: func() {
			__native := C.GetEntityClassname(__entityHandle)
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

// GetEntityName
//
//	@brief Retrieves the name of an entity.
//
//	@param entityHandle: The handle of the entity whose name is to be retrieved.
func GetEntityName(entityHandle int32) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__entityHandle := C.int32_t(entityHandle)
	plugify.Block{
		Try: func() {
			__native := C.GetEntityName(__entityHandle)
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

// SetEntityName
//
//	@brief Sets the name of an entity.
//
//	@param entityHandle: The handle of the entity whose name is to be set.
//	@param name: The new name to set for the entity.
func SetEntityName(entityHandle int32, name string) {
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			C.SetEntityName(__entityHandle, (*C.String)(unsafe.Pointer(&__name)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
}

// GetEntityMoveType
//
//	@brief Retrieves the movement type of an entity.
//
//	@param entityHandle: The handle of the entity whose movement type is to be retrieved.
//
//	@return The movement type of the entity, or 0 if the entity is invalid.
func GetEntityMoveType(entityHandle int32) MoveType {
	var __retVal MoveType
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityMoveType(__entityHandle))
	return __retVal
}

// SetEntityMoveType
//
//	@brief Sets the movement type of an entity.
//
//	@param entityHandle: The handle of the entity whose movement type is to be set.
//	@param moveType: The new movement type to set for the entity.
func SetEntityMoveType(entityHandle int32, moveType MoveType) {
	__entityHandle := C.int32_t(entityHandle)
	__moveType := C.int32_t(moveType)
	C.SetEntityMoveType(__entityHandle, __moveType)
}

// GetEntityGravity
//
//	@brief Retrieves the gravity scale of an entity.
//
//	@param entityHandle: The handle of the entity whose gravity scale is to be retrieved.
//
//	@return The gravity scale of the entity, or 0.0f if the entity is invalid.
func GetEntityGravity(entityHandle int32) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = float32(C.GetEntityGravity(__entityHandle))
	return __retVal
}

// SetEntityGravity
//
//	@brief Sets the gravity scale of an entity.
//
//	@param entityHandle: The handle of the entity whose gravity scale is to be set.
//	@param gravity: The new gravity scale to set for the entity.
func SetEntityGravity(entityHandle int32, gravity float32) {
	__entityHandle := C.int32_t(entityHandle)
	__gravity := C.float(gravity)
	C.SetEntityGravity(__entityHandle, __gravity)
}

// GetEntityFlags
//
//	@brief Retrieves the flags of an entity.
//
//	@param entityHandle: The handle of the entity whose flags are to be retrieved.
//
//	@return The flags of the entity, or 0 if the entity is invalid.
func GetEntityFlags(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityFlags(__entityHandle))
	return __retVal
}

// SetEntityFlags
//
//	@brief Sets the flags of an entity.
//
//	@param entityHandle: The handle of the entity whose flags are to be set.
//	@param flags: The new flags to set for the entity.
func SetEntityFlags(entityHandle int32, flags int32) {
	__entityHandle := C.int32_t(entityHandle)
	__flags := C.int32_t(flags)
	C.SetEntityFlags(__entityHandle, __flags)
}

// GetEntityRenderColor
//
//	@brief Retrieves the render color of an entity.
//
//	@param entityHandle: The handle of the entity whose render color is to be retrieved.
//
//	@return The raw color value of the entity's render color, or 0 if the entity is invalid.
func GetEntityRenderColor(entityHandle int32) plugify.Vector4 {
	var __retVal plugify.Vector4
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityRenderColor(__entityHandle)
	__retVal = *(*plugify.Vector4)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityRenderColor
//
//	@brief Sets the render color of an entity.
//
//	@param entityHandle: The handle of the entity whose render color is to be set.
//	@param color: The new raw color value to set for the entity's render color.
func SetEntityRenderColor(entityHandle int32, color plugify.Vector4) {
	__entityHandle := C.int32_t(entityHandle)
	__color := *(*C.Vector4)(unsafe.Pointer(&color))
	C.SetEntityRenderColor(__entityHandle, &__color)
}

// GetEntityRenderMode
//
//	@brief Retrieves the render mode of an entity.
//
//	@param entityHandle: The handle of the entity whose render mode is to be retrieved.
//
//	@return The render mode of the entity, or 0 if the entity is invalid.
func GetEntityRenderMode(entityHandle int32) RenderMode {
	var __retVal RenderMode
	__entityHandle := C.int32_t(entityHandle)
	__retVal = uint8(C.GetEntityRenderMode(__entityHandle))
	return __retVal
}

// SetEntityRenderMode
//
//	@brief Sets the render mode of an entity.
//
//	@param entityHandle: The handle of the entity whose render mode is to be set.
//	@param renderMode: The new render mode to set for the entity.
func SetEntityRenderMode(entityHandle int32, renderMode RenderMode) {
	__entityHandle := C.int32_t(entityHandle)
	__renderMode := C.uint8_t(renderMode)
	C.SetEntityRenderMode(__entityHandle, __renderMode)
}

// GetEntityMass
//
//	@brief Retrieves the mass of an entity.
//
//	@param entityHandle: The handle of the entity whose mass is to be retrieved.
//
//	@return The mass of the entity, or 0 if the entity is invalid.
func GetEntityMass(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityMass(__entityHandle))
	return __retVal
}

// SetEntityMass
//
//	@brief Sets the mass of an entity.
//
//	@param entityHandle: The handle of the entity whose mass is to be set.
//	@param mass: The new mass value to set for the entity.
func SetEntityMass(entityHandle int32, mass int32) {
	__entityHandle := C.int32_t(entityHandle)
	__mass := C.int32_t(mass)
	C.SetEntityMass(__entityHandle, __mass)
}

// GetEntityFriction
//
//	@brief Retrieves the friction of an entity.
//
//	@param entityHandle: The handle of the entity whose friction is to be retrieved.
//
//	@return The friction of the entity, or 0 if the entity is invalid.
func GetEntityFriction(entityHandle int32) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = float32(C.GetEntityFriction(__entityHandle))
	return __retVal
}

// SetEntityFriction
//
//	@brief Sets the friction of an entity.
//
//	@param entityHandle: The handle of the entity whose friction is to be set.
//	@param friction: The new friction value to set for the entity.
func SetEntityFriction(entityHandle int32, friction float32) {
	__entityHandle := C.int32_t(entityHandle)
	__friction := C.float(friction)
	C.SetEntityFriction(__entityHandle, __friction)
}

// GetEntityHealth
//
//	@brief Retrieves the health of an entity.
//
//	@param entityHandle: The handle of the entity whose health is to be retrieved.
//
//	@return The health of the entity, or 0 if the entity is invalid.
func GetEntityHealth(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityHealth(__entityHandle))
	return __retVal
}

// SetEntityHealth
//
//	@brief Sets the health of an entity.
//
//	@param entityHandle: The handle of the entity whose health is to be set.
//	@param health: The new health value to set for the entity.
func SetEntityHealth(entityHandle int32, health int32) {
	__entityHandle := C.int32_t(entityHandle)
	__health := C.int32_t(health)
	C.SetEntityHealth(__entityHandle, __health)
}

// GetEntityMaxHealth
//
//	@brief Retrieves the max health of an entity.
//
//	@param entityHandle: The handle of the entity whose max health is to be retrieved.
//
//	@return The max health of the entity, or 0 if the entity is invalid.
func GetEntityMaxHealth(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityMaxHealth(__entityHandle))
	return __retVal
}

// SetEntityMaxHealth
//
//	@brief Sets the max health of an entity.
//
//	@param entityHandle: The handle of the entity whose max health is to be set.
//	@param maxHealth: The new max health value to set for the entity.
func SetEntityMaxHealth(entityHandle int32, maxHealth int32) {
	__entityHandle := C.int32_t(entityHandle)
	__maxHealth := C.int32_t(maxHealth)
	C.SetEntityMaxHealth(__entityHandle, __maxHealth)
}

// GetEntityTeam
//
//	@brief Retrieves the team number of an entity.
//
//	@param entityHandle: The handle of the entity whose team number is to be retrieved.
//
//	@return The team number of the entity, or 0 if the entity is invalid.
func GetEntityTeam(entityHandle int32) CSTeam {
	var __retVal CSTeam
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityTeam(__entityHandle))
	return __retVal
}

// SetEntityTeam
//
//	@brief Sets the team number of an entity.
//
//	@param entityHandle: The handle of the entity whose team number is to be set.
//	@param team: The new team number to set for the entity.
func SetEntityTeam(entityHandle int32, team CSTeam) {
	__entityHandle := C.int32_t(entityHandle)
	__team := C.int32_t(team)
	C.SetEntityTeam(__entityHandle, __team)
}

// GetEntityOwner
//
//	@brief Retrieves the owner of an entity.
//
//	@param entityHandle: The handle of the entity whose owner is to be retrieved.
//
//	@return The handle of the owner entity, or INVALID_EHANDLE_INDEX if the entity is invalid.
func GetEntityOwner(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityOwner(__entityHandle))
	return __retVal
}

// SetEntityOwner
//
//	@brief Sets the owner of an entity.
//
//	@param entityHandle: The handle of the entity whose owner is to be set.
//	@param ownerHandle: The handle of the new owner entity.
func SetEntityOwner(entityHandle int32, ownerHandle int32) {
	__entityHandle := C.int32_t(entityHandle)
	__ownerHandle := C.int32_t(ownerHandle)
	C.SetEntityOwner(__entityHandle, __ownerHandle)
}

// GetEntityParent
//
//	@brief Retrieves the parent of an entity.
//
//	@param entityHandle: The handle of the entity whose parent is to be retrieved.
//
//	@return The handle of the parent entity, or INVALID_EHANDLE_INDEX if the entity is invalid.
func GetEntityParent(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityParent(__entityHandle))
	return __retVal
}

// SetEntityParent
//
//	@brief Sets the parent of an entity.
//
//	@param entityHandle: The handle of the entity whose parent is to be set.
//	@param parentHandle: The handle of the new parent entity. (Can be invalid to clean parent)
func SetEntityParent(entityHandle int32, parentHandle int32) {
	__entityHandle := C.int32_t(entityHandle)
	__parentHandle := C.int32_t(parentHandle)
	C.SetEntityParent(__entityHandle, __parentHandle)
}

// SetEntityParentAttachment
//
//	@brief Sets the parent of an entity to attachment by name.
//
//	@param entityHandle: The handle of the entity whose parent is to be set.
//	@param parentHandle: The handle of the new parent entity.
//	@param attachmentName: The name of the entity's attachment.
func SetEntityParentAttachment(entityHandle int32, parentHandle int32, attachmentName string) {
	__entityHandle := C.int32_t(entityHandle)
	__parentHandle := C.int32_t(parentHandle)
	__attachmentName := plugify.ConstructString(attachmentName)
	plugify.Block{
		Try: func() {
			C.SetEntityParentAttachment(__entityHandle, __parentHandle, (*C.String)(unsafe.Pointer(&__attachmentName)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__attachmentName)
		},
	}.Do()
}

// GetEntityAbsOrigin
//
//	@brief Retrieves the absolute origin of an entity.
//
//	@param entityHandle: The handle of the entity whose absolute origin is to be retrieved.
//
//	@return A vector where the absolute origin will be stored.
func GetEntityAbsOrigin(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityAbsOrigin(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityAbsOrigin
//
//	@brief Sets the absolute origin of an entity.
//
//	@param entityHandle: The handle of the entity whose absolute origin is to be set.
//	@param origin: The new absolute origin to set for the entity.
func SetEntityAbsOrigin(entityHandle int32, origin plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	C.SetEntityAbsOrigin(__entityHandle, &__origin)
}

// GetEntityAbsScale
//
//	@brief Retrieves the absolute scale of an entity.
//
//	@param entityHandle: The handle of the entity whose absolute scale is to be retrieved.
//
//	@return A vector where the absolute scale will be stored.
func GetEntityAbsScale(entityHandle int32) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = float32(C.GetEntityAbsScale(__entityHandle))
	return __retVal
}

// SetEntityAbsScale
//
//	@brief Sets the absolute scale of an entity.
//
//	@param entityHandle: The handle of the entity whose absolute scale is to be set.
//	@param scale: The new absolute scale to set for the entity.
func SetEntityAbsScale(entityHandle int32, scale float32) {
	__entityHandle := C.int32_t(entityHandle)
	__scale := C.float(scale)
	C.SetEntityAbsScale(__entityHandle, __scale)
}

// GetEntityAbsAngles
//
//	@brief Retrieves the angular rotation of an entity.
//
//	@param entityHandle: The handle of the entity whose angular rotation is to be retrieved.
//
//	@return A QAngle where the angular rotation will be stored.
func GetEntityAbsAngles(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityAbsAngles(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityAbsAngles
//
//	@brief Sets the angular rotation of an entity.
//
//	@param entityHandle: The handle of the entity whose angular rotation is to be set.
//	@param angle: The new angular rotation to set for the entity.
func SetEntityAbsAngles(entityHandle int32, angle plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__angle := *(*C.Vector3)(unsafe.Pointer(&angle))
	C.SetEntityAbsAngles(__entityHandle, &__angle)
}

// GetEntityLocalOrigin
//
//	@brief Retrieves the local origin of an entity.
//
//	@param entityHandle: The handle of the entity whose local origin is to be retrieved.
//
//	@return A vector where the local origin will be stored.
func GetEntityLocalOrigin(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityLocalOrigin(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityLocalOrigin
//
//	@brief Sets the local origin of an entity.
//
//	@param entityHandle: The handle of the entity whose local origin is to be set.
//	@param origin: The new local origin to set for the entity.
func SetEntityLocalOrigin(entityHandle int32, origin plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	C.SetEntityLocalOrigin(__entityHandle, &__origin)
}

// GetEntityLocalScale
//
//	@brief Retrieves the local scale of an entity.
//
//	@param entityHandle: The handle of the entity whose local scale is to be retrieved.
//
//	@return A vector where the local scale will be stored.
func GetEntityLocalScale(entityHandle int32) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = float32(C.GetEntityLocalScale(__entityHandle))
	return __retVal
}

// SetEntityLocalScale
//
//	@brief Sets the local scale of an entity.
//
//	@param entityHandle: The handle of the entity whose local scale is to be set.
//	@param scale: The new local scale to set for the entity.
func SetEntityLocalScale(entityHandle int32, scale float32) {
	__entityHandle := C.int32_t(entityHandle)
	__scale := C.float(scale)
	C.SetEntityLocalScale(__entityHandle, __scale)
}

// GetEntityLocalAngles
//
//	@brief Retrieves the angular rotation of an entity.
//
//	@param entityHandle: The handle of the entity whose angular rotation is to be retrieved.
//
//	@return A QAngle where the angular rotation will be stored.
func GetEntityLocalAngles(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityLocalAngles(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityLocalAngles
//
//	@brief Sets the angular rotation of an entity.
//
//	@param entityHandle: The handle of the entity whose angular rotation is to be set.
//	@param angle: The new angular rotation to set for the entity.
func SetEntityLocalAngles(entityHandle int32, angle plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__angle := *(*C.Vector3)(unsafe.Pointer(&angle))
	C.SetEntityLocalAngles(__entityHandle, &__angle)
}

// GetEntityAbsVelocity
//
//	@brief Retrieves the absolute velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose absolute velocity is to be retrieved.
//
//	@return A vector where the absolute velocity will be stored.
func GetEntityAbsVelocity(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityAbsVelocity(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityAbsVelocity
//
//	@brief Sets the absolute velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose absolute velocity is to be set.
//	@param velocity: The new absolute velocity to set for the entity.
func SetEntityAbsVelocity(entityHandle int32, velocity plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__velocity := *(*C.Vector3)(unsafe.Pointer(&velocity))
	C.SetEntityAbsVelocity(__entityHandle, &__velocity)
}

// GetEntityBaseVelocity
//
//	@brief Retrieves the base velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose base velocity is to be retrieved.
//
//	@return A vector where the base velocity will be stored.
func GetEntityBaseVelocity(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityBaseVelocity(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityLocalAngVelocity
//
//	@brief Retrieves the local angular velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose local angular velocity is to be retrieved.
//
//	@return A vector where the local angular velocity will be stored.
func GetEntityLocalAngVelocity(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityLocalAngVelocity(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityAngVelocity
//
//	@brief Retrieves the angular velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose angular velocity is to be retrieved.
//
//	@return A vector where the angular velocity will be stored.
func GetEntityAngVelocity(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityAngVelocity(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityAngVelocity
//
//	@brief Sets the angular velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose angular velocity is to be set.
//	@param velocity: The new angular velocity to set for the entity.
func SetEntityAngVelocity(entityHandle int32, velocity plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__velocity := *(*C.Vector3)(unsafe.Pointer(&velocity))
	C.SetEntityAngVelocity(__entityHandle, &__velocity)
}

// GetEntityLocalVelocity
//
//	@brief Retrieves the local velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose local velocity is to be retrieved.
//
//	@return A vector where the local velocity will be stored.
func GetEntityLocalVelocity(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityLocalVelocity(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityAngRotation
//
//	@brief Retrieves the angular rotation of an entity.
//
//	@param entityHandle: The handle of the entity whose angular rotation is to be retrieved.
//
//	@return A vector where the angular rotation will be stored.
func GetEntityAngRotation(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityAngRotation(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityAngRotation
//
//	@brief Sets the angular rotation of an entity.
//
//	@param entityHandle: The handle of the entity whose angular rotation is to be set.
//	@param rotation: The new angular rotation to set for the entity.
func SetEntityAngRotation(entityHandle int32, rotation plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__rotation := *(*C.Vector3)(unsafe.Pointer(&rotation))
	C.SetEntityAngRotation(__entityHandle, &__rotation)
}

// TransformPointEntityToWorld
//
//	@brief Returns the input Vector transformed from entity to world space.
//
//	@param entityHandle: The handle of the entity
//	@param point: Point in entity local space to transform
//
//	@return The point transformed to world space coordinates
func TransformPointEntityToWorld(entityHandle int32, point plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__point := *(*C.Vector3)(unsafe.Pointer(&point))
	__native := C.TransformPointEntityToWorld(__entityHandle, &__point)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// TransformPointWorldToEntity
//
//	@brief Returns the input Vector transformed from world to entity space.
//
//	@param entityHandle: The handle of the entity
//	@param point: Point in world space to transform
//
//	@return The point transformed to entity local space coordinates
func TransformPointWorldToEntity(entityHandle int32, point plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__point := *(*C.Vector3)(unsafe.Pointer(&point))
	__native := C.TransformPointWorldToEntity(__entityHandle, &__point)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityEyePosition
//
//	@brief Get vector to eye position - absolute coords.
//
//	@param entityHandle: The handle of the entity
//
//	@return Eye position in absolute/world coordinates
func GetEntityEyePosition(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityEyePosition(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityEyeAngles
//
//	@brief Get the qangles that this entity is looking at.
//
//	@param entityHandle: The handle of the entity
//
//	@return Eye angles as a vector (pitch, yaw, roll)
func GetEntityEyeAngles(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityEyeAngles(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SetEntityForwardVector
//
//	@brief Sets the forward velocity of an entity.
//
//	@param entityHandle: The handle of the entity whose forward velocity is to be set.
func SetEntityForwardVector(entityHandle int32, forward plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__forward := *(*C.Vector3)(unsafe.Pointer(&forward))
	C.SetEntityForwardVector(__entityHandle, &__forward)
}

// GetEntityForwardVector
//
//	@brief Get the forward vector of the entity.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return Forward-facing direction vector of the entity
func GetEntityForwardVector(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityForwardVector(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityLeftVector
//
//	@brief Get the left vector of the entity.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return Left-facing direction vector of the entity (aligned with the y axis)
func GetEntityLeftVector(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityLeftVector(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityRightVector
//
//	@brief Get the right vector of the entity.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return Right-facing direction vector of the entity
func GetEntityRightVector(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityRightVector(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityUpVector
//
//	@brief Get the up vector of the entity.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return Up-facing direction vector of the entity
func GetEntityUpVector(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityUpVector(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityTransform
//
//	@brief Get the entity-to-world transformation matrix.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return 4x4 transformation matrix representing entity's position, rotation, and scale in world space
func GetEntityTransform(entityHandle int32) plugify.Matrix4x4 {
	var __retVal plugify.Matrix4x4
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityTransform(__entityHandle)
	__retVal = *(*plugify.Matrix4x4)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityModel
//
//	@brief Retrieves the model name of an entity.
//
//	@param entityHandle: The handle of the entity whose model name is to be retrieved.
//
//	@return A string where the model name will be stored.
func GetEntityModel(entityHandle int32) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__entityHandle := C.int32_t(entityHandle)
	plugify.Block{
		Try: func() {
			__native := C.GetEntityModel(__entityHandle)
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

// SetEntityModel
//
//	@brief Sets the model name of an entity.
//
//	@param entityHandle: The handle of the entity whose model name is to be set.
//	@param model: The new model name to set for the entity.
func SetEntityModel(entityHandle int32, model string) {
	__entityHandle := C.int32_t(entityHandle)
	__model := plugify.ConstructString(model)
	plugify.Block{
		Try: func() {
			C.SetEntityModel(__entityHandle, (*C.String)(unsafe.Pointer(&__model)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__model)
		},
	}.Do()
}

// GetEntityWaterLevel
//
//	@brief Retrieves the water level of an entity.
//
//	@param entityHandle: The handle of the entity whose water level is to be retrieved.
//
//	@return The water level of the entity, or 0.0f if the entity is invalid.
func GetEntityWaterLevel(entityHandle int32) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = float32(C.GetEntityWaterLevel(__entityHandle))
	return __retVal
}

// GetEntityGroundEntity
//
//	@brief Retrieves the ground entity of an entity.
//
//	@param entityHandle: The handle of the entity whose ground entity is to be retrieved.
//
//	@return The handle of the ground entity, or INVALID_EHANDLE_INDEX if the entity is invalid.
func GetEntityGroundEntity(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityGroundEntity(__entityHandle))
	return __retVal
}

// GetEntityEffects
//
//	@brief Retrieves the effects of an entity.
//
//	@param entityHandle: The handle of the entity whose effects are to be retrieved.
//
//	@return The effect flags of the entity, or 0 if the entity is invalid.
func GetEntityEffects(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetEntityEffects(__entityHandle))
	return __retVal
}

// AddEntityEffects
//
//	@brief Adds the render effect flag to an entity.
//
//	@param entityHandle: The handle of the entity to modify
//	@param effects: Render effect flags to add
func AddEntityEffects(entityHandle int32, effects int32) {
	__entityHandle := C.int32_t(entityHandle)
	__effects := C.int32_t(effects)
	C.AddEntityEffects(__entityHandle, __effects)
}

// RemoveEntityEffects
//
//	@brief Removes the render effect flag from an entity.
//
//	@param entityHandle: The handle of the entity to modify
//	@param effects: Render effect flags to remove
func RemoveEntityEffects(entityHandle int32, effects int32) {
	__entityHandle := C.int32_t(entityHandle)
	__effects := C.int32_t(effects)
	C.RemoveEntityEffects(__entityHandle, __effects)
}

// GetEntityBoundingMaxs
//
//	@brief Get a vector containing max bounds, centered on object.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return Vector containing the maximum bounds of the entity's bounding box
func GetEntityBoundingMaxs(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityBoundingMaxs(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityBoundingMins
//
//	@brief Get a vector containing min bounds, centered on object.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return Vector containing the minimum bounds of the entity's bounding box
func GetEntityBoundingMins(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityBoundingMins(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// GetEntityCenter
//
//	@brief Get vector to center of object - absolute coords.
//
//	@param entityHandle: The handle of the entity to query
//
//	@return Vector pointing to the center of the entity in absolute/world coordinates
func GetEntityCenter(entityHandle int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__native := C.GetEntityCenter(__entityHandle)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// TeleportEntity
//
//	@brief Teleports an entity to a specified location and orientation.
//
//	@param entityHandle: The handle of the entity to teleport.
//	@param origin: A pointer to a Vector representing the new absolute position. Use nan vector to not set.
//	@param angles: A pointer to a QAngle representing the new orientation. Use nan vector to not set.
//	@param velocity: A pointer to a Vector representing the new velocity. Use nan vector to not set.
func TeleportEntity(entityHandle int32, origin plugify.Vector3, angles plugify.Vector3, velocity plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__origin := *(*C.Vector3)(unsafe.Pointer(&origin))
	__angles := *(*C.Vector3)(unsafe.Pointer(&angles))
	__velocity := *(*C.Vector3)(unsafe.Pointer(&velocity))
	C.TeleportEntity(__entityHandle, &__origin, &__angles, &__velocity)
}

// ApplyAbsVelocityImpulseToEntity
//
//	@brief Apply an absolute velocity impulse to an entity.
//
//	@param entityHandle: The handle of the entity to apply impulse to
//	@param vecImpulse: Velocity impulse vector to apply
func ApplyAbsVelocityImpulseToEntity(entityHandle int32, vecImpulse plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__vecImpulse := *(*C.Vector3)(unsafe.Pointer(&vecImpulse))
	C.ApplyAbsVelocityImpulseToEntity(__entityHandle, &__vecImpulse)
}

// ApplyLocalAngularVelocityImpulseToEntity
//
//	@brief Apply a local angular velocity impulse to an entity.
//
//	@param entityHandle: The handle of the entity to apply impulse to
//	@param angImpulse: Angular velocity impulse vector to apply
func ApplyLocalAngularVelocityImpulseToEntity(entityHandle int32, angImpulse plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__angImpulse := *(*C.Vector3)(unsafe.Pointer(&angImpulse))
	C.ApplyLocalAngularVelocityImpulseToEntity(__entityHandle, &__angImpulse)
}

// AcceptEntityInput
//
//	@brief Invokes a named input method on a specified entity.
//
//	@param entityHandle: The handle of the target entity that will receive the input.
//	@param inputName: The name of the input action to invoke.
//	@param activatorHandle: The handle of the entity that initiated the sequence of actions.
//	@param callerHandle: The handle of the entity sending this event.
//	@param value: The value associated with the input action.
//	@param type_: The type or classification of the value.
//	@param outputId: An identifier for tracking the output of this operation.
func AcceptEntityInput(entityHandle int32, inputName string, activatorHandle int32, callerHandle int32, value any, type_ FieldType, outputId int32) {
	__entityHandle := C.int32_t(entityHandle)
	__inputName := plugify.ConstructString(inputName)
	__activatorHandle := C.int32_t(activatorHandle)
	__callerHandle := C.int32_t(callerHandle)
	__value := plugify.ConstructVariant(value)
	__type_ := C.int32_t(type_)
	__outputId := C.int32_t(outputId)
	plugify.Block{
		Try: func() {
			C.AcceptEntityInput(__entityHandle, (*C.String)(unsafe.Pointer(&__inputName)), __activatorHandle, __callerHandle, (*C.Variant)(unsafe.Pointer(&__value)), __type_, __outputId)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__inputName)
			plugify.DestroyVariant(&__value)
		},
	}.Do()
}

// ConnectEntityOutput
//
//	@brief Connects a script function to an entity output.
//
//	@param entityHandle: The handle of the entity.
//	@param output: The name of the output to connect to.
//	@param functionName: The name of the script function to call.
func ConnectEntityOutput(entityHandle int32, output string, functionName string) {
	__entityHandle := C.int32_t(entityHandle)
	__output := plugify.ConstructString(output)
	__functionName := plugify.ConstructString(functionName)
	plugify.Block{
		Try: func() {
			C.ConnectEntityOutput(__entityHandle, (*C.String)(unsafe.Pointer(&__output)), (*C.String)(unsafe.Pointer(&__functionName)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__output)
			plugify.DestroyString(&__functionName)
		},
	}.Do()
}

// DisconnectEntityOutput
//
//	@brief Disconnects a script function from an entity output.
//
//	@param entityHandle: The handle of the entity.
//	@param output: The name of the output.
//	@param functionName: The name of the script function to disconnect.
func DisconnectEntityOutput(entityHandle int32, output string, functionName string) {
	__entityHandle := C.int32_t(entityHandle)
	__output := plugify.ConstructString(output)
	__functionName := plugify.ConstructString(functionName)
	plugify.Block{
		Try: func() {
			C.DisconnectEntityOutput(__entityHandle, (*C.String)(unsafe.Pointer(&__output)), (*C.String)(unsafe.Pointer(&__functionName)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__output)
			plugify.DestroyString(&__functionName)
		},
	}.Do()
}

// DisconnectEntityRedirectedOutput
//
//	@brief Disconnects a script function from an I/O event on a different entity.
//
//	@param entityHandle: The handle of the calling entity.
//	@param output: The name of the output.
//	@param functionName: The function name to disconnect.
//	@param targetHandle: The handle of the entity whose output is being disconnected.
func DisconnectEntityRedirectedOutput(entityHandle int32, output string, functionName string, targetHandle int32) {
	__entityHandle := C.int32_t(entityHandle)
	__output := plugify.ConstructString(output)
	__functionName := plugify.ConstructString(functionName)
	__targetHandle := C.int32_t(targetHandle)
	plugify.Block{
		Try: func() {
			C.DisconnectEntityRedirectedOutput(__entityHandle, (*C.String)(unsafe.Pointer(&__output)), (*C.String)(unsafe.Pointer(&__functionName)), __targetHandle)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__output)
			plugify.DestroyString(&__functionName)
		},
	}.Do()
}

// FireEntityOutput
//
//	@brief Fires an entity output.
//
//	@param entityHandle: The handle of the entity firing the output.
//	@param outputName: The name of the output to fire.
//	@param activatorHandle: The entity activating the output.
//	@param callerHandle: The entity that called the output.
//	@param value: The value associated with the input action.
//	@param type_: The type or classification of the value.
//	@param delay: Delay in seconds before firing the output.
func FireEntityOutput(entityHandle int32, outputName string, activatorHandle int32, callerHandle int32, value any, type_ FieldType, delay float32) {
	__entityHandle := C.int32_t(entityHandle)
	__outputName := plugify.ConstructString(outputName)
	__activatorHandle := C.int32_t(activatorHandle)
	__callerHandle := C.int32_t(callerHandle)
	__value := plugify.ConstructVariant(value)
	__type_ := C.int32_t(type_)
	__delay := C.float(delay)
	plugify.Block{
		Try: func() {
			C.FireEntityOutput(__entityHandle, (*C.String)(unsafe.Pointer(&__outputName)), __activatorHandle, __callerHandle, (*C.Variant)(unsafe.Pointer(&__value)), __type_, __delay)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__outputName)
			plugify.DestroyVariant(&__value)
		},
	}.Do()
}

// RedirectEntityOutput
//
//	@brief Redirects an entity output to call a function on another entity.
//
//	@param entityHandle: The handle of the entity whose output is being redirected.
//	@param output: The name of the output to redirect.
//	@param functionName: The function name to call on the target entity.
//	@param targetHandle: The handle of the entity that will receive the output call.
func RedirectEntityOutput(entityHandle int32, output string, functionName string, targetHandle int32) {
	__entityHandle := C.int32_t(entityHandle)
	__output := plugify.ConstructString(output)
	__functionName := plugify.ConstructString(functionName)
	__targetHandle := C.int32_t(targetHandle)
	plugify.Block{
		Try: func() {
			C.RedirectEntityOutput(__entityHandle, (*C.String)(unsafe.Pointer(&__output)), (*C.String)(unsafe.Pointer(&__functionName)), __targetHandle)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__output)
			plugify.DestroyString(&__functionName)
		},
	}.Do()
}

// FollowEntity
//
//	@brief Makes an entity follow another entity with optional bone merging.
//
//	@param entityHandle: The handle of the entity that will follow
//	@param attachmentHandle: The handle of the entity to follow
//	@param boneMerge: If true, bones will be merged between entities
func FollowEntity(entityHandle int32, attachmentHandle int32, boneMerge bool) {
	__entityHandle := C.int32_t(entityHandle)
	__attachmentHandle := C.int32_t(attachmentHandle)
	__boneMerge := C.bool(boneMerge)
	C.FollowEntity(__entityHandle, __attachmentHandle, __boneMerge)
}

// FollowEntityMerge
//
//	@brief Makes an entity follow another entity and merge with a specific bone or attachment.
//
//	@param entityHandle: The handle of the entity that will follow
//	@param attachmentHandle: The handle of the entity to follow
//	@param boneOrAttachName: Name of the bone or attachment point to merge with
func FollowEntityMerge(entityHandle int32, attachmentHandle int32, boneOrAttachName string) {
	__entityHandle := C.int32_t(entityHandle)
	__attachmentHandle := C.int32_t(attachmentHandle)
	__boneOrAttachName := plugify.ConstructString(boneOrAttachName)
	plugify.Block{
		Try: func() {
			C.FollowEntityMerge(__entityHandle, __attachmentHandle, (*C.String)(unsafe.Pointer(&__boneOrAttachName)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__boneOrAttachName)
		},
	}.Do()
}

// TakeEntityDamage
//
//	@brief Apply damage to an entity.
//
//	@param entityHandle: The handle of the entity receiving damage
//	@param inflictorHandle: The handle of the entity inflicting damage (e.g., projectile)
//	@param attackerHandle: The handle of the attacking entity
//	@param force: Direction and magnitude of force to apply
//	@param hitPos: Position where the damage hit occurred
//	@param damage: Amount of damage to apply
//	@param damageTypes: Bitfield of damage type flags
//
//	@return Amount of damage actually applied to the entity
func TakeEntityDamage(entityHandle int32, inflictorHandle int32, attackerHandle int32, force plugify.Vector3, hitPos plugify.Vector3, damage float32, damageTypes DamageTypes) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__inflictorHandle := C.int32_t(inflictorHandle)
	__attackerHandle := C.int32_t(attackerHandle)
	__force := *(*C.Vector3)(unsafe.Pointer(&force))
	__hitPos := *(*C.Vector3)(unsafe.Pointer(&hitPos))
	__damage := C.float(damage)
	__damageTypes := C.int32_t(damageTypes)
	__retVal = int32(C.TakeEntityDamage(__entityHandle, __inflictorHandle, __attackerHandle, &__force, &__hitPos, __damage, __damageTypes))
	return __retVal
}

// GetEntityAttributeFloatValue
//
//	@brief Retrieves a float attribute value from an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The name of the attribute.
//	@param defaultValue: The default value to return if the attribute does not exist.
//
//	@return The float value of the attribute, or the default value if missing or invalid.
func GetEntityAttributeFloatValue(entityHandle int32, name string, defaultValue float32) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	__defaultValue := C.float(defaultValue)
	plugify.Block{
		Try: func() {
			__retVal = float32(C.GetEntityAttributeFloatValue(__entityHandle, (*C.String)(unsafe.Pointer(&__name)), __defaultValue))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// GetEntityAttributeIntValue
//
//	@brief Retrieves an integer attribute value from an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The name of the attribute.
//	@param defaultValue: The default value to return if the attribute does not exist.
//
//	@return The integer value of the attribute, or the default value if missing or invalid.
func GetEntityAttributeIntValue(entityHandle int32, name string, defaultValue int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	__defaultValue := C.int32_t(defaultValue)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.GetEntityAttributeIntValue(__entityHandle, (*C.String)(unsafe.Pointer(&__name)), __defaultValue))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// SetEntityAttributeFloatValue
//
//	@brief Sets a float attribute value on an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The name of the attribute.
//	@param value: The float value to assign to the attribute.
func SetEntityAttributeFloatValue(entityHandle int32, name string, value float32) {
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	__value := C.float(value)
	plugify.Block{
		Try: func() {
			C.SetEntityAttributeFloatValue(__entityHandle, (*C.String)(unsafe.Pointer(&__name)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
}

// SetEntityAttributeIntValue
//
//	@brief Sets an integer attribute value on an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The name of the attribute.
//	@param value: The integer value to assign to the attribute.
func SetEntityAttributeIntValue(entityHandle int32, name string, value int32) {
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			C.SetEntityAttributeIntValue(__entityHandle, (*C.String)(unsafe.Pointer(&__name)), __value)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
}

// DeleteEntityAttribute
//
//	@brief Deletes an attribute from an entity.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The name of the attribute to delete.
func DeleteEntityAttribute(entityHandle int32, name string) {
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			C.DeleteEntityAttribute(__entityHandle, (*C.String)(unsafe.Pointer(&__name)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
}

// HasEntityAttribute
//
//	@brief Checks if an entity has a specific attribute.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The name of the attribute to check.
//
//	@return True if the attribute exists, false otherwise.
func HasEntityAttribute(entityHandle int32, name string) bool {
	var __retVal bool
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.HasEntityAttribute(__entityHandle, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}
