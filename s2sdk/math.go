package s2sdk

/*
#include "math.h"
#cgo noescape AnglesDiff
#cgo noescape AnglesToVector
#cgo noescape AxisAngleToQuaternion
#cgo noescape CalcClosestPointOnEntityOBB
#cgo noescape CalcDistanceBetweenEntityOBB
#cgo noescape CalcDistanceToLineSegment2D
#cgo noescape CrossVectors
#cgo noescape ExponentDecay
#cgo noescape LerpVectors
#cgo noescape QSlerp
#cgo noescape RotateOrientation
#cgo noescape RotatePosition
#cgo noescape RotateQuaternionByAxisAngle
#cgo noescape RotationDelta
#cgo noescape RotationDeltaAsAngularVelocity
#cgo noescape SplineQuaternions
#cgo noescape SplineVectors
#cgo noescape VectorToAngles
#cgo noescape RandomFlt
#cgo noescape RandomInt
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

// Generated from s2sdk (group: math)

// AnglesDiff
//
//	@brief Returns angular difference in degrees
//
//	@param angle1: First angle in degrees
//	@param angle2: Second angle in degrees
//
//	@return Angular difference in degrees
func AnglesDiff(angle1 float32, angle2 float32) float32 {
	var __retVal float32
	__angle1 := C.float(angle1)
	__angle2 := C.float(angle2)
	__retVal = float32(C.AnglesDiff(__angle1, __angle2))
	return __retVal
}

// AnglesToVector
//
//	@brief Converts QAngle to directional Vector
//
//	@param angles: The QAngle to convert
//
//	@return Directional vector
func AnglesToVector(angles plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__angles := *(*C.Vector3)(unsafe.Pointer(&angles))
	__native := C.AnglesToVector(&__angles)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// AxisAngleToQuaternion
//
//	@brief Converts axis-angle representation to quaternion
//
//	@param axis: Rotation axis (should be normalized)
//	@param angle: Rotation angle in radians
//
//	@return Resulting quaternion
func AxisAngleToQuaternion(axis plugify.Vector3, angle float32) plugify.Vector4 {
	var __retVal plugify.Vector4
	__axis := *(*C.Vector3)(unsafe.Pointer(&axis))
	__angle := C.float(angle)
	__native := C.AxisAngleToQuaternion(&__axis, __angle)
	__retVal = *(*plugify.Vector4)(unsafe.Pointer(&__native))
	return __retVal
}

// CalcClosestPointOnEntityOBB
//
//	@brief Computes closest point on an entity's oriented bounding box (OBB)
//
//	@param entityHandle: Handle of the entity
//	@param position: Position to find closest point from
//
//	@return Closest point on the entity's OBB, or vec3_origin if entity is invalid
func CalcClosestPointOnEntityOBB(entityHandle int32, position plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__entityHandle := C.int32_t(entityHandle)
	__position := *(*C.Vector3)(unsafe.Pointer(&position))
	__native := C.CalcClosestPointOnEntityOBB(__entityHandle, &__position)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// CalcDistanceBetweenEntityOBB
//
//	@brief Computes distance between two entities' oriented bounding boxes (OBBs)
//
//	@param entityHandle1: Handle of the first entity
//	@param entityHandle2: Handle of the second entity
//
//	@return Distance between OBBs, or -1.0f if either entity is invalid
func CalcDistanceBetweenEntityOBB(entityHandle1 int32, entityHandle2 int32) float32 {
	var __retVal float32
	__entityHandle1 := C.int32_t(entityHandle1)
	__entityHandle2 := C.int32_t(entityHandle2)
	__retVal = float32(C.CalcDistanceBetweenEntityOBB(__entityHandle1, __entityHandle2))
	return __retVal
}

// CalcDistanceToLineSegment2D
//
//	@brief Computes shortest 2D distance from a point to a line segment
//
//	@param p: The point
//	@param vLineA: First endpoint of the line segment
//	@param vLineB: Second endpoint of the line segment
//
//	@return Shortest 2D distance
func CalcDistanceToLineSegment2D(p plugify.Vector3, vLineA plugify.Vector3, vLineB plugify.Vector3) float32 {
	var __retVal float32
	__p := *(*C.Vector3)(unsafe.Pointer(&p))
	__vLineA := *(*C.Vector3)(unsafe.Pointer(&vLineA))
	__vLineB := *(*C.Vector3)(unsafe.Pointer(&vLineB))
	__retVal = float32(C.CalcDistanceToLineSegment2D(&__p, &__vLineA, &__vLineB))
	return __retVal
}

// CrossVectors
//
//	@brief Computes cross product of two vectors
//
//	@param v1: First vector
//	@param v2: Second vector
//
//	@return Cross product vector (v1 × v2)
func CrossVectors(v1 plugify.Vector3, v2 plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__v1 := *(*C.Vector3)(unsafe.Pointer(&v1))
	__v2 := *(*C.Vector3)(unsafe.Pointer(&v2))
	__native := C.CrossVectors(&__v1, &__v2)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// ExponentDecay
//
//	@brief Smooth exponential decay function
//
//	@param decayTo: Target value to decay towards
//	@param decayTime: Time constant for decay
//	@param dt: Delta time
//
//	@return Decay factor
func ExponentDecay(decayTo float32, decayTime float32, dt float32) float32 {
	var __retVal float32
	__decayTo := C.float(decayTo)
	__decayTime := C.float(decayTime)
	__dt := C.float(dt)
	__retVal = float32(C.ExponentDecay(__decayTo, __decayTime, __dt))
	return __retVal
}

// LerpVectors
//
//	@brief Linear interpolation between two vectors
//
//	@param start: Starting vector
//	@param end: Ending vector
//	@param factor: Interpolation factor (0.0 to 1.0)
//
//	@return Interpolated vector
func LerpVectors(start plugify.Vector3, end plugify.Vector3, factor float32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__start := *(*C.Vector3)(unsafe.Pointer(&start))
	__end := *(*C.Vector3)(unsafe.Pointer(&end))
	__factor := C.float(factor)
	__native := C.LerpVectors(&__start, &__end, __factor)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// QSlerp
//
//	@brief Quaternion spherical linear interpolation for angles
//
//	@param fromAngle: Starting angle
//	@param toAngle: Ending angle
//	@param time: Interpolation time (0.0 to 1.0)
//
//	@return Interpolated angle
func QSlerp(fromAngle plugify.Vector3, toAngle plugify.Vector3, time float32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__fromAngle := *(*C.Vector3)(unsafe.Pointer(&fromAngle))
	__toAngle := *(*C.Vector3)(unsafe.Pointer(&toAngle))
	__time := C.float(time)
	__native := C.QSlerp(&__fromAngle, &__toAngle, __time)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// RotateOrientation
//
//	@brief Rotate one QAngle by another
//
//	@param a1: Base orientation
//	@param a2: Rotation to apply
//
//	@return Rotated orientation
func RotateOrientation(a1 plugify.Vector3, a2 plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__a1 := *(*C.Vector3)(unsafe.Pointer(&a1))
	__a2 := *(*C.Vector3)(unsafe.Pointer(&a2))
	__native := C.RotateOrientation(&__a1, &__a2)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// RotatePosition
//
//	@brief Rotate a vector around a point by specified angle
//
//	@param rotationOrigin: Origin point of rotation
//	@param rotationAngle: Angle to rotate by
//	@param vectorToRotate: Vector to be rotated
//
//	@return Rotated vector
func RotatePosition(rotationOrigin plugify.Vector3, rotationAngle plugify.Vector3, vectorToRotate plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__rotationOrigin := *(*C.Vector3)(unsafe.Pointer(&rotationOrigin))
	__rotationAngle := *(*C.Vector3)(unsafe.Pointer(&rotationAngle))
	__vectorToRotate := *(*C.Vector3)(unsafe.Pointer(&vectorToRotate))
	__native := C.RotatePosition(&__rotationOrigin, &__rotationAngle, &__vectorToRotate)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// RotateQuaternionByAxisAngle
//
//	@brief Rotates quaternion by axis-angle representation
//
//	@param q: Quaternion to rotate
//	@param axis: Rotation axis
//	@param angle: Rotation angle in radians
//
//	@return Rotated quaternion
func RotateQuaternionByAxisAngle(q plugify.Vector4, axis plugify.Vector3, angle float32) plugify.Vector4 {
	var __retVal plugify.Vector4
	__q := *(*C.Vector4)(unsafe.Pointer(&q))
	__axis := *(*C.Vector3)(unsafe.Pointer(&axis))
	__angle := C.float(angle)
	__native := C.RotateQuaternionByAxisAngle(&__q, &__axis, __angle)
	__retVal = *(*plugify.Vector4)(unsafe.Pointer(&__native))
	return __retVal
}

// RotationDelta
//
//	@brief Finds angular delta between two QAngles
//
//	@param src: Source angle
//	@param dest: Destination angle
//
//	@return Delta angle from src to dest
func RotationDelta(src plugify.Vector3, dest plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__src := *(*C.Vector3)(unsafe.Pointer(&src))
	__dest := *(*C.Vector3)(unsafe.Pointer(&dest))
	__native := C.RotationDelta(&__src, &__dest)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// RotationDeltaAsAngularVelocity
//
//	@brief Converts delta QAngle to angular velocity vector
//
//	@param a1: First angle
//	@param a2: Second angle
//
//	@return Angular velocity vector
func RotationDeltaAsAngularVelocity(a1 plugify.Vector3, a2 plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__a1 := *(*C.Vector3)(unsafe.Pointer(&a1))
	__a2 := *(*C.Vector3)(unsafe.Pointer(&a2))
	__native := C.RotationDeltaAsAngularVelocity(&__a1, &__a2)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// SplineQuaternions
//
//	@brief Interpolates between two quaternions using spline
//
//	@param q0: Starting quaternion
//	@param q1: Ending quaternion
//	@param t: Interpolation parameter (0.0 to 1.0)
//
//	@return Interpolated quaternion
func SplineQuaternions(q0 plugify.Vector4, q1 plugify.Vector4, t float32) plugify.Vector4 {
	var __retVal plugify.Vector4
	__q0 := *(*C.Vector4)(unsafe.Pointer(&q0))
	__q1 := *(*C.Vector4)(unsafe.Pointer(&q1))
	__t := C.float(t)
	__native := C.SplineQuaternions(&__q0, &__q1, __t)
	__retVal = *(*plugify.Vector4)(unsafe.Pointer(&__native))
	return __retVal
}

// SplineVectors
//
//	@brief Interpolates between two vectors using spline
//
//	@param v0: Starting vector
//	@param v1: Ending vector
//	@param t: Interpolation parameter (0.0 to 1.0)
//
//	@return Interpolated vector
func SplineVectors(v0 plugify.Vector3, v1 plugify.Vector3, t float32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__v0 := *(*C.Vector3)(unsafe.Pointer(&v0))
	__v1 := *(*C.Vector3)(unsafe.Pointer(&v1))
	__t := C.float(t)
	__native := C.SplineVectors(&__v0, &__v1, __t)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// VectorToAngles
//
//	@brief Converts directional vector to QAngle (no roll)
//
//	@param input: Direction vector
//
//	@return Angle representation with pitch and yaw (roll is 0)
func VectorToAngles(input plugify.Vector3) plugify.Vector3 {
	var __retVal plugify.Vector3
	__input := *(*C.Vector3)(unsafe.Pointer(&input))
	__native := C.VectorToAngles(&__input)
	__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
	return __retVal
}

// RandomFlt
//
//	@brief Returns random float between min and max
//
//	@param min: Minimum value (inclusive)
//	@param max: Maximum value (inclusive)
//
//	@return Random float in range [min, max]
func RandomFlt(min float32, max float32) float32 {
	var __retVal float32
	__min := C.float(min)
	__max := C.float(max)
	__retVal = float32(C.RandomFlt(__min, __max))
	return __retVal
}

// RandomInt
//
//	@brief Returns random integer between min and max (inclusive)
//
//	@param min: Minimum value (inclusive)
//	@param max: Maximum value (inclusive)
//
//	@return Random integer in range [min, max]
func RandomInt(min int32, max int32) int32 {
	var __retVal int32
	__min := C.int32_t(min)
	__max := C.int32_t(max)
	__retVal = int32(C.RandomInt(__min, __max))
	return __retVal
}
