#pragma once

#include "shared.h"

extern float (*__s2sdk_AnglesDiff)(float, float);

static float AnglesDiff(float angle1, float angle2) {
	return __s2sdk_AnglesDiff(angle1, angle2);
}

extern Vector3 (*__s2sdk_AnglesToVector)(Vector3*);

static Vector3 AnglesToVector(Vector3* angles) {
	return __s2sdk_AnglesToVector(angles);
}

extern Vector4 (*__s2sdk_AxisAngleToQuaternion)(Vector3*, float);

static Vector4 AxisAngleToQuaternion(Vector3* axis, float angle) {
	return __s2sdk_AxisAngleToQuaternion(axis, angle);
}

extern Vector3 (*__s2sdk_CalcClosestPointOnEntityOBB)(int32_t, Vector3*);

static Vector3 CalcClosestPointOnEntityOBB(int32_t entityHandle, Vector3* position) {
	return __s2sdk_CalcClosestPointOnEntityOBB(entityHandle, position);
}

extern float (*__s2sdk_CalcDistanceBetweenEntityOBB)(int32_t, int32_t);

static float CalcDistanceBetweenEntityOBB(int32_t entityHandle1, int32_t entityHandle2) {
	return __s2sdk_CalcDistanceBetweenEntityOBB(entityHandle1, entityHandle2);
}

extern float (*__s2sdk_CalcDistanceToLineSegment2D)(Vector3*, Vector3*, Vector3*);

static float CalcDistanceToLineSegment2D(Vector3* p, Vector3* vLineA, Vector3* vLineB) {
	return __s2sdk_CalcDistanceToLineSegment2D(p, vLineA, vLineB);
}

extern Vector3 (*__s2sdk_CrossVectors)(Vector3*, Vector3*);

static Vector3 CrossVectors(Vector3* v1, Vector3* v2) {
	return __s2sdk_CrossVectors(v1, v2);
}

extern float (*__s2sdk_ExponentDecay)(float, float, float);

static float ExponentDecay(float decayTo, float decayTime, float dt) {
	return __s2sdk_ExponentDecay(decayTo, decayTime, dt);
}

extern Vector3 (*__s2sdk_LerpVectors)(Vector3*, Vector3*, float);

static Vector3 LerpVectors(Vector3* start, Vector3* end, float factor) {
	return __s2sdk_LerpVectors(start, end, factor);
}

extern Vector3 (*__s2sdk_QSlerp)(Vector3*, Vector3*, float);

static Vector3 QSlerp(Vector3* fromAngle, Vector3* toAngle, float time) {
	return __s2sdk_QSlerp(fromAngle, toAngle, time);
}

extern Vector3 (*__s2sdk_RotateOrientation)(Vector3*, Vector3*);

static Vector3 RotateOrientation(Vector3* a1, Vector3* a2) {
	return __s2sdk_RotateOrientation(a1, a2);
}

extern Vector3 (*__s2sdk_RotatePosition)(Vector3*, Vector3*, Vector3*);

static Vector3 RotatePosition(Vector3* rotationOrigin, Vector3* rotationAngle, Vector3* vectorToRotate) {
	return __s2sdk_RotatePosition(rotationOrigin, rotationAngle, vectorToRotate);
}

extern Vector4 (*__s2sdk_RotateQuaternionByAxisAngle)(Vector4*, Vector3*, float);

static Vector4 RotateQuaternionByAxisAngle(Vector4* q, Vector3* axis, float angle) {
	return __s2sdk_RotateQuaternionByAxisAngle(q, axis, angle);
}

extern Vector3 (*__s2sdk_RotationDelta)(Vector3*, Vector3*);

static Vector3 RotationDelta(Vector3* src, Vector3* dest) {
	return __s2sdk_RotationDelta(src, dest);
}

extern Vector3 (*__s2sdk_RotationDeltaAsAngularVelocity)(Vector3*, Vector3*);

static Vector3 RotationDeltaAsAngularVelocity(Vector3* a1, Vector3* a2) {
	return __s2sdk_RotationDeltaAsAngularVelocity(a1, a2);
}

extern Vector4 (*__s2sdk_SplineQuaternions)(Vector4*, Vector4*, float);

static Vector4 SplineQuaternions(Vector4* q0, Vector4* q1, float t) {
	return __s2sdk_SplineQuaternions(q0, q1, t);
}

extern Vector3 (*__s2sdk_SplineVectors)(Vector3*, Vector3*, float);

static Vector3 SplineVectors(Vector3* v0, Vector3* v1, float t) {
	return __s2sdk_SplineVectors(v0, v1, t);
}

extern Vector3 (*__s2sdk_VectorToAngles)(Vector3*);

static Vector3 VectorToAngles(Vector3* input) {
	return __s2sdk_VectorToAngles(input);
}

extern float (*__s2sdk_RandomFlt)(float, float);

static float RandomFlt(float min, float max) {
	return __s2sdk_RandomFlt(min, max);
}

extern int32_t (*__s2sdk_RandomInt)(int32_t, int32_t);

static int32_t RandomInt(int32_t min, int32_t max) {
	return __s2sdk_RandomInt(min, max);
}

