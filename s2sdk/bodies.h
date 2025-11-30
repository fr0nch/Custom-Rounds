#pragma once

#include "s2sdk.h"

static void AddBodyImpulseAtPosition(int32_t entityHandle, Vector3* position, Vector3* impulse) {
	typedef void (*AddBodyImpulseAtPositionFn)(int32_t, Vector3*, Vector3*);
	static AddBodyImpulseAtPositionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddBodyImpulseAtPosition", (void**)&__func);
	__func(entityHandle, position, impulse);
}

static void AddBodyVelocity(int32_t entityHandle, Vector3* linearVelocity, Vector3* angularVelocity) {
	typedef void (*AddBodyVelocityFn)(int32_t, Vector3*, Vector3*);
	static AddBodyVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddBodyVelocity", (void**)&__func);
	__func(entityHandle, linearVelocity, angularVelocity);
}

static void DetachBodyFromParent(int32_t entityHandle) {
	typedef void (*DetachBodyFromParentFn)(int32_t);
	static DetachBodyFromParentFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DetachBodyFromParent", (void**)&__func);
	__func(entityHandle);
}

static int32_t GetBodySequence(int32_t entityHandle) {
	typedef int32_t (*GetBodySequenceFn)(int32_t);
	static GetBodySequenceFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetBodySequence", (void**)&__func);
	return __func(entityHandle);
}

static bool IsBodyAttachedToParent(int32_t entityHandle) {
	typedef bool (*IsBodyAttachedToParentFn)(int32_t);
	static IsBodyAttachedToParentFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsBodyAttachedToParent", (void**)&__func);
	return __func(entityHandle);
}

static int32_t LookupBodySequence(int32_t entityHandle, String* name) {
	typedef int32_t (*LookupBodySequenceFn)(int32_t, String*);
	static LookupBodySequenceFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.LookupBodySequence", (void**)&__func);
	return __func(entityHandle, name);
}

static float SetBodySequenceDuration(int32_t entityHandle, String* sequenceName) {
	typedef float (*SetBodySequenceDurationFn)(int32_t, String*);
	static SetBodySequenceDurationFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetBodySequenceDuration", (void**)&__func);
	return __func(entityHandle, sequenceName);
}

static void SetBodyAngularVelocity(int32_t entityHandle, Vector3* angVelocity) {
	typedef void (*SetBodyAngularVelocityFn)(int32_t, Vector3*);
	static SetBodyAngularVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetBodyAngularVelocity", (void**)&__func);
	__func(entityHandle, angVelocity);
}

static void SetBodyMaterialGroup(int32_t entityHandle, String* materialGroup) {
	typedef void (*SetBodyMaterialGroupFn)(int32_t, String*);
	static SetBodyMaterialGroupFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetBodyMaterialGroup", (void**)&__func);
	__func(entityHandle, materialGroup);
}

static void SetBodyVelocity(int32_t entityHandle, Vector3* velocity) {
	typedef void (*SetBodyVelocityFn)(int32_t, Vector3*);
	static SetBodyVelocityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetBodyVelocity", (void**)&__func);
	__func(entityHandle, velocity);
}

