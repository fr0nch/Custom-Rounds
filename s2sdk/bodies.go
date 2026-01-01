package s2sdk

/*
#include "bodies.h"
#cgo noescape AddBodyImpulseAtPosition
#cgo noescape AddBodyVelocity
#cgo noescape DetachBodyFromParent
#cgo noescape GetBodySequence
#cgo noescape IsBodyAttachedToParent
#cgo noescape LookupBodySequence
#cgo noescape SetBodySequenceDuration
#cgo noescape SetBodyAngularVelocity
#cgo noescape SetBodyMaterialGroup
#cgo noescape SetBodyVelocity
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

// Generated from s2sdk (group: bodies)

// AddBodyImpulseAtPosition
//
//	@brief Applies an impulse to an entity at a specific world position.
//
//	@param entityHandle: The handle of the entity.
//	@param position: The world position where the impulse will be applied.
//	@param impulse: The impulse vector to apply.
func AddBodyImpulseAtPosition(entityHandle int32, position plugify.Vector3, impulse plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__position := *(*C.Vector3)(unsafe.Pointer(&position))
	__impulse := *(*C.Vector3)(unsafe.Pointer(&impulse))
	C.AddBodyImpulseAtPosition(__entityHandle, &__position, &__impulse)
}

// AddBodyVelocity
//
//	@brief Adds linear and angular velocity to the entity's physics object.
//
//	@param entityHandle: The handle of the entity.
//	@param linearVelocity: The linear velocity vector to add.
//	@param angularVelocity: The angular velocity vector to add.
func AddBodyVelocity(entityHandle int32, linearVelocity plugify.Vector3, angularVelocity plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__linearVelocity := *(*C.Vector3)(unsafe.Pointer(&linearVelocity))
	__angularVelocity := *(*C.Vector3)(unsafe.Pointer(&angularVelocity))
	C.AddBodyVelocity(__entityHandle, &__linearVelocity, &__angularVelocity)
}

// DetachBodyFromParent
//
//	@brief Detaches the entity from its parent.
//
//	@param entityHandle: The handle of the entity.
func DetachBodyFromParent(entityHandle int32) {
	__entityHandle := C.int32_t(entityHandle)
	C.DetachBodyFromParent(__entityHandle)
}

// GetBodySequence
//
//	@brief Retrieves the currently active sequence of the entity.
//
//	@param entityHandle: The handle of the entity.
//
//	@return The sequence ID of the active sequence, or -1 if invalid.
func GetBodySequence(entityHandle int32) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__retVal = int32(C.GetBodySequence(__entityHandle))
	return __retVal
}

// IsBodyAttachedToParent
//
//	@brief Checks whether the entity is attached to a parent.
//
//	@param entityHandle: The handle of the entity.
//
//	@return True if attached to a parent, false otherwise.
func IsBodyAttachedToParent(entityHandle int32) bool {
	var __retVal bool
	__entityHandle := C.int32_t(entityHandle)
	__retVal = bool(C.IsBodyAttachedToParent(__entityHandle))
	return __retVal
}

// LookupBodySequence
//
//	@brief Looks up a sequence ID by its name.
//
//	@param entityHandle: The handle of the entity.
//	@param name: The name of the sequence.
//
//	@return The sequence ID, or -1 if not found.
func LookupBodySequence(entityHandle int32, name string) int32 {
	var __retVal int32
	__entityHandle := C.int32_t(entityHandle)
	__name := plugify.ConstructString(name)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.LookupBodySequence(__entityHandle, (*C.String)(unsafe.Pointer(&__name))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// SetBodySequenceDuration
//
//	@brief Retrieves the duration of a specified sequence.
//
//	@param entityHandle: The handle of the entity.
//	@param sequenceName: The name of the sequence.
//
//	@return The duration of the sequence in seconds, or 0 if invalid.
func SetBodySequenceDuration(entityHandle int32, sequenceName string) float32 {
	var __retVal float32
	__entityHandle := C.int32_t(entityHandle)
	__sequenceName := plugify.ConstructString(sequenceName)
	plugify.Block{
		Try: func() {
			__retVal = float32(C.SetBodySequenceDuration(__entityHandle, (*C.String)(unsafe.Pointer(&__sequenceName))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__sequenceName)
		},
	}.Do()
	return __retVal
}

// SetBodyAngularVelocity
//
//	@brief Sets the angular velocity of the entity.
//
//	@param entityHandle: The handle of the entity.
//	@param angVelocity: The new angular velocity vector.
func SetBodyAngularVelocity(entityHandle int32, angVelocity plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__angVelocity := *(*C.Vector3)(unsafe.Pointer(&angVelocity))
	C.SetBodyAngularVelocity(__entityHandle, &__angVelocity)
}

// SetBodyMaterialGroup
//
//	@brief Sets the material group of the entity.
//
//	@param entityHandle: The handle of the entity.
//	@param materialGroup: The material group token to assign.
func SetBodyMaterialGroup(entityHandle int32, materialGroup string) {
	__entityHandle := C.int32_t(entityHandle)
	__materialGroup := plugify.ConstructString(materialGroup)
	plugify.Block{
		Try: func() {
			C.SetBodyMaterialGroup(__entityHandle, (*C.String)(unsafe.Pointer(&__materialGroup)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__materialGroup)
		},
	}.Do()
}

// SetBodyVelocity
//
//	@brief Sets the linear velocity of the entity.
//
//	@param entityHandle: The handle of the entity.
//	@param velocity: The new velocity vector.
func SetBodyVelocity(entityHandle int32, velocity plugify.Vector3) {
	__entityHandle := C.int32_t(entityHandle)
	__velocity := *(*C.Vector3)(unsafe.Pointer(&velocity))
	C.SetBodyVelocity(__entityHandle, &__velocity)
}
