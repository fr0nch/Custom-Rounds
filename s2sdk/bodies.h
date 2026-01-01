#pragma once

#include "shared.h"

extern void (*__s2sdk_AddBodyImpulseAtPosition)(int32_t, Vector3*, Vector3*);

static void AddBodyImpulseAtPosition(int32_t entityHandle, Vector3* position, Vector3* impulse) {
	__s2sdk_AddBodyImpulseAtPosition(entityHandle, position, impulse);
}

extern void (*__s2sdk_AddBodyVelocity)(int32_t, Vector3*, Vector3*);

static void AddBodyVelocity(int32_t entityHandle, Vector3* linearVelocity, Vector3* angularVelocity) {
	__s2sdk_AddBodyVelocity(entityHandle, linearVelocity, angularVelocity);
}

extern void (*__s2sdk_DetachBodyFromParent)(int32_t);

static void DetachBodyFromParent(int32_t entityHandle) {
	__s2sdk_DetachBodyFromParent(entityHandle);
}

extern int32_t (*__s2sdk_GetBodySequence)(int32_t);

static int32_t GetBodySequence(int32_t entityHandle) {
	return __s2sdk_GetBodySequence(entityHandle);
}

extern bool (*__s2sdk_IsBodyAttachedToParent)(int32_t);

static bool IsBodyAttachedToParent(int32_t entityHandle) {
	return __s2sdk_IsBodyAttachedToParent(entityHandle);
}

extern int32_t (*__s2sdk_LookupBodySequence)(int32_t, String*);

static int32_t LookupBodySequence(int32_t entityHandle, String* name) {
	return __s2sdk_LookupBodySequence(entityHandle, name);
}

extern float (*__s2sdk_SetBodySequenceDuration)(int32_t, String*);

static float SetBodySequenceDuration(int32_t entityHandle, String* sequenceName) {
	return __s2sdk_SetBodySequenceDuration(entityHandle, sequenceName);
}

extern void (*__s2sdk_SetBodyAngularVelocity)(int32_t, Vector3*);

static void SetBodyAngularVelocity(int32_t entityHandle, Vector3* angVelocity) {
	__s2sdk_SetBodyAngularVelocity(entityHandle, angVelocity);
}

extern void (*__s2sdk_SetBodyMaterialGroup)(int32_t, String*);

static void SetBodyMaterialGroup(int32_t entityHandle, String* materialGroup) {
	__s2sdk_SetBodyMaterialGroup(entityHandle, materialGroup);
}

extern void (*__s2sdk_SetBodyVelocity)(int32_t, Vector3*);

static void SetBodyVelocity(int32_t entityHandle, Vector3* velocity) {
	__s2sdk_SetBodyVelocity(entityHandle, velocity);
}

