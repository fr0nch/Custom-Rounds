#pragma once

#include "s2sdk.h"

static float AnglesDiff(float angle1, float angle2) {
	typedef float (*AnglesDiffFn)(float, float);
	static AnglesDiffFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AnglesDiff", (void**)&__func);
	return __func(angle1, angle2);
}

static Vector3 AnglesToVector(Vector3* angles) {
	typedef Vector3 (*AnglesToVectorFn)(Vector3*);
	static AnglesToVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AnglesToVector", (void**)&__func);
	return __func(angles);
}

static Vector4 AxisAngleToQuaternion(Vector3* axis, float angle) {
	typedef Vector4 (*AxisAngleToQuaternionFn)(Vector3*, float);
	static AxisAngleToQuaternionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AxisAngleToQuaternion", (void**)&__func);
	return __func(axis, angle);
}

static Vector3 CalcClosestPointOnEntityOBB(int32_t entityHandle, Vector3* position) {
	typedef Vector3 (*CalcClosestPointOnEntityOBBFn)(int32_t, Vector3*);
	static CalcClosestPointOnEntityOBBFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CalcClosestPointOnEntityOBB", (void**)&__func);
	return __func(entityHandle, position);
}

static float CalcDistanceBetweenEntityOBB(int32_t entityHandle1, int32_t entityHandle2) {
	typedef float (*CalcDistanceBetweenEntityOBBFn)(int32_t, int32_t);
	static CalcDistanceBetweenEntityOBBFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CalcDistanceBetweenEntityOBB", (void**)&__func);
	return __func(entityHandle1, entityHandle2);
}

static float CalcDistanceToLineSegment2D(Vector3* p, Vector3* vLineA, Vector3* vLineB) {
	typedef float (*CalcDistanceToLineSegment2DFn)(Vector3*, Vector3*, Vector3*);
	static CalcDistanceToLineSegment2DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CalcDistanceToLineSegment2D", (void**)&__func);
	return __func(p, vLineA, vLineB);
}

static Vector3 CrossVectors(Vector3* v1, Vector3* v2) {
	typedef Vector3 (*CrossVectorsFn)(Vector3*, Vector3*);
	static CrossVectorsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CrossVectors", (void**)&__func);
	return __func(v1, v2);
}

static float ExponentDecay(float decayTo, float decayTime, float dt) {
	typedef float (*ExponentDecayFn)(float, float, float);
	static ExponentDecayFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ExponentDecay", (void**)&__func);
	return __func(decayTo, decayTime, dt);
}

static Vector3 LerpVectors(Vector3* start, Vector3* end, float factor) {
	typedef Vector3 (*LerpVectorsFn)(Vector3*, Vector3*, float);
	static LerpVectorsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.LerpVectors", (void**)&__func);
	return __func(start, end, factor);
}

static Vector3 QSlerp(Vector3* fromAngle, Vector3* toAngle, float time) {
	typedef Vector3 (*QSlerpFn)(Vector3*, Vector3*, float);
	static QSlerpFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.QSlerp", (void**)&__func);
	return __func(fromAngle, toAngle, time);
}

static Vector3 RotateOrientation(Vector3* a1, Vector3* a2) {
	typedef Vector3 (*RotateOrientationFn)(Vector3*, Vector3*);
	static RotateOrientationFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RotateOrientation", (void**)&__func);
	return __func(a1, a2);
}

static Vector3 RotatePosition(Vector3* rotationOrigin, Vector3* rotationAngle, Vector3* vectorToRotate) {
	typedef Vector3 (*RotatePositionFn)(Vector3*, Vector3*, Vector3*);
	static RotatePositionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RotatePosition", (void**)&__func);
	return __func(rotationOrigin, rotationAngle, vectorToRotate);
}

static Vector4 RotateQuaternionByAxisAngle(Vector4* q, Vector3* axis, float angle) {
	typedef Vector4 (*RotateQuaternionByAxisAngleFn)(Vector4*, Vector3*, float);
	static RotateQuaternionByAxisAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RotateQuaternionByAxisAngle", (void**)&__func);
	return __func(q, axis, angle);
}

static Vector3 RotationDelta(Vector3* src, Vector3* dest) {
	typedef Vector3 (*RotationDeltaFn)(Vector3*, Vector3*);
	static RotationDeltaFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RotationDelta", (void**)&__func);
	return __func(src, dest);
}

static Vector3 RotationDeltaAsAngularVelocity(Vector3* a1, Vector3* a2) {
	typedef Vector3 (*RotationDeltaAsAngularVelocityFn)(Vector3*, Vector3*);
	static RotationDeltaAsAngularVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RotationDeltaAsAngularVelocity", (void**)&__func);
	return __func(a1, a2);
}

static Vector4 SplineQuaternions(Vector4* q0, Vector4* q1, float t) {
	typedef Vector4 (*SplineQuaternionsFn)(Vector4*, Vector4*, float);
	static SplineQuaternionsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SplineQuaternions", (void**)&__func);
	return __func(q0, q1, t);
}

static Vector3 SplineVectors(Vector3* v0, Vector3* v1, float t) {
	typedef Vector3 (*SplineVectorsFn)(Vector3*, Vector3*, float);
	static SplineVectorsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SplineVectors", (void**)&__func);
	return __func(v0, v1, t);
}

static Vector3 VectorToAngles(Vector3* input) {
	typedef Vector3 (*VectorToAnglesFn)(Vector3*);
	static VectorToAnglesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.VectorToAngles", (void**)&__func);
	return __func(input);
}

static float RandomFlt(float min, float max) {
	typedef float (*RandomFltFn)(float, float);
	static RandomFltFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RandomFlt", (void**)&__func);
	return __func(min, max);
}

static int32_t RandomInt(int32_t min, int32_t max) {
	typedef int32_t (*RandomIntFn)(int32_t, int32_t);
	static RandomIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RandomInt", (void**)&__func);
	return __func(min, max);
}

