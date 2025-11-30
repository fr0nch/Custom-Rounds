#pragma once

#include "s2sdk.h"

static uint64_t CreateConVar(String* name, Variant* defaultValue, String* description, int64_t flags) {
	typedef uint64_t (*CreateConVarFn)(String*, Variant*, String*, int64_t);
	static CreateConVarFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVar", (void**)&__func);
	return __func(name, defaultValue, description, flags);
}

static uint64_t CreateConVarBool(String* name, bool defaultValue, String* description, int64_t flags, bool hasMin, bool min, bool hasMax, bool max) {
	typedef uint64_t (*CreateConVarBoolFn)(String*, bool, String*, int64_t, bool, bool, bool, bool);
	static CreateConVarBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarBool", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarInt16(String* name, int16_t defaultValue, String* description, int64_t flags, bool hasMin, int16_t min, bool hasMax, int16_t max) {
	typedef uint64_t (*CreateConVarInt16Fn)(String*, int16_t, String*, int64_t, bool, int16_t, bool, int16_t);
	static CreateConVarInt16Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarInt16", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarUInt16(String* name, uint16_t defaultValue, String* description, int64_t flags, bool hasMin, uint16_t min, bool hasMax, uint16_t max) {
	typedef uint64_t (*CreateConVarUInt16Fn)(String*, uint16_t, String*, int64_t, bool, uint16_t, bool, uint16_t);
	static CreateConVarUInt16Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarUInt16", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarInt32(String* name, int32_t defaultValue, String* description, int64_t flags, bool hasMin, int32_t min, bool hasMax, int32_t max) {
	typedef uint64_t (*CreateConVarInt32Fn)(String*, int32_t, String*, int64_t, bool, int32_t, bool, int32_t);
	static CreateConVarInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarInt32", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarUInt32(String* name, uint32_t defaultValue, String* description, int64_t flags, bool hasMin, uint32_t min, bool hasMax, uint32_t max) {
	typedef uint64_t (*CreateConVarUInt32Fn)(String*, uint32_t, String*, int64_t, bool, uint32_t, bool, uint32_t);
	static CreateConVarUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarUInt32", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarInt64(String* name, int64_t defaultValue, String* description, int64_t flags, bool hasMin, int64_t min, bool hasMax, int64_t max) {
	typedef uint64_t (*CreateConVarInt64Fn)(String*, int64_t, String*, int64_t, bool, int64_t, bool, int64_t);
	static CreateConVarInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarInt64", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarUInt64(String* name, uint64_t defaultValue, String* description, int64_t flags, bool hasMin, uint64_t min, bool hasMax, uint64_t max) {
	typedef uint64_t (*CreateConVarUInt64Fn)(String*, uint64_t, String*, int64_t, bool, uint64_t, bool, uint64_t);
	static CreateConVarUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarUInt64", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarFloat(String* name, float defaultValue, String* description, int64_t flags, bool hasMin, float min, bool hasMax, float max) {
	typedef uint64_t (*CreateConVarFloatFn)(String*, float, String*, int64_t, bool, float, bool, float);
	static CreateConVarFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarFloat", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarDouble(String* name, double defaultValue, String* description, int64_t flags, bool hasMin, double min, bool hasMax, double max) {
	typedef uint64_t (*CreateConVarDoubleFn)(String*, double, String*, int64_t, bool, double, bool, double);
	static CreateConVarDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarDouble", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarColor(String* name, int32_t defaultValue, String* description, int64_t flags, bool hasMin, int32_t min, bool hasMax, int32_t max) {
	typedef uint64_t (*CreateConVarColorFn)(String*, int32_t, String*, int64_t, bool, int32_t, bool, int32_t);
	static CreateConVarColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarColor", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarVector2(String* name, Vector2* defaultValue, String* description, int64_t flags, bool hasMin, Vector2* min, bool hasMax, Vector2* max) {
	typedef uint64_t (*CreateConVarVector2Fn)(String*, Vector2*, String*, int64_t, bool, Vector2*, bool, Vector2*);
	static CreateConVarVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarVector2", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarVector3(String* name, Vector3* defaultValue, String* description, int64_t flags, bool hasMin, Vector3* min, bool hasMax, Vector3* max) {
	typedef uint64_t (*CreateConVarVector3Fn)(String*, Vector3*, String*, int64_t, bool, Vector3*, bool, Vector3*);
	static CreateConVarVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarVector3", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarVector4(String* name, Vector4* defaultValue, String* description, int64_t flags, bool hasMin, Vector4* min, bool hasMax, Vector4* max) {
	typedef uint64_t (*CreateConVarVector4Fn)(String*, Vector4*, String*, int64_t, bool, Vector4*, bool, Vector4*);
	static CreateConVarVector4Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarVector4", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarQAngle(String* name, Vector3* defaultValue, String* description, int64_t flags, bool hasMin, Vector3* min, bool hasMax, Vector3* max) {
	typedef uint64_t (*CreateConVarQAngleFn)(String*, Vector3*, String*, int64_t, bool, Vector3*, bool, Vector3*);
	static CreateConVarQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarQAngle", (void**)&__func);
	return __func(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

static uint64_t CreateConVarString(String* name, String* defaultValue, String* description, int64_t flags) {
	typedef uint64_t (*CreateConVarStringFn)(String*, String*, String*, int64_t);
	static CreateConVarStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateConVarString", (void**)&__func);
	return __func(name, defaultValue, description, flags);
}

static uint64_t FindConVar(String* name) {
	typedef uint64_t (*FindConVarFn)(String*);
	static FindConVarFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindConVar", (void**)&__func);
	return __func(name);
}

static uint64_t FindConVar2(String* name, int16_t type) {
	typedef uint64_t (*FindConVar2Fn)(String*, int16_t);
	static FindConVar2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindConVar2", (void**)&__func);
	return __func(name, type);
}

static void HookConVarChange(uint64_t conVarHandle, void* callback) {
	typedef void (*HookConVarChangeFn)(uint64_t, void*);
	static HookConVarChangeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.HookConVarChange", (void**)&__func);
	__func(conVarHandle, callback);
}

static void UnhookConVarChange(String* uint64, void* callback) {
	typedef void (*UnhookConVarChangeFn)(String*, void*);
	static UnhookConVarChangeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.UnhookConVarChange", (void**)&__func);
	__func(uint64, callback);
}

static bool IsConVarFlagSet(uint64_t conVarHandle, int64_t flag) {
	typedef bool (*IsConVarFlagSetFn)(uint64_t, int64_t);
	static IsConVarFlagSetFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsConVarFlagSet", (void**)&__func);
	return __func(conVarHandle, flag);
}

static void AddConVarFlags(uint64_t conVarHandle, int64_t flags) {
	typedef void (*AddConVarFlagsFn)(uint64_t, int64_t);
	static AddConVarFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddConVarFlags", (void**)&__func);
	__func(conVarHandle, flags);
}

static void RemoveConVarFlags(uint64_t conVarHandle, int64_t flags) {
	typedef void (*RemoveConVarFlagsFn)(uint64_t, int64_t);
	static RemoveConVarFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RemoveConVarFlags", (void**)&__func);
	__func(conVarHandle, flags);
}

static int64_t GetConVarFlags(uint64_t conVarHandle) {
	typedef int64_t (*GetConVarFlagsFn)(uint64_t);
	static GetConVarFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarFlags", (void**)&__func);
	return __func(conVarHandle);
}

static String GetConVarBounds(uint64_t conVarHandle, bool max) {
	typedef String (*GetConVarBoundsFn)(uint64_t, bool);
	static GetConVarBoundsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarBounds", (void**)&__func);
	return __func(conVarHandle, max);
}

static void SetConVarBounds(uint64_t conVarHandle, bool max, String* value) {
	typedef void (*SetConVarBoundsFn)(uint64_t, bool, String*);
	static SetConVarBoundsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarBounds", (void**)&__func);
	__func(conVarHandle, max, value);
}

static String GetConVarDefault(uint64_t conVarHandle) {
	typedef String (*GetConVarDefaultFn)(uint64_t);
	static GetConVarDefaultFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarDefault", (void**)&__func);
	return __func(conVarHandle);
}

static String GetConVarValue(uint64_t conVarHandle) {
	typedef String (*GetConVarValueFn)(uint64_t);
	static GetConVarValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarValue", (void**)&__func);
	return __func(conVarHandle);
}

static Variant GetConVar(uint64_t conVarHandle) {
	typedef Variant (*GetConVarFn)(uint64_t);
	static GetConVarFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVar", (void**)&__func);
	return __func(conVarHandle);
}

static bool GetConVarBool(uint64_t conVarHandle) {
	typedef bool (*GetConVarBoolFn)(uint64_t);
	static GetConVarBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarBool", (void**)&__func);
	return __func(conVarHandle);
}

static int16_t GetConVarInt16(uint64_t conVarHandle) {
	typedef int16_t (*GetConVarInt16Fn)(uint64_t);
	static GetConVarInt16Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarInt16", (void**)&__func);
	return __func(conVarHandle);
}

static uint16_t GetConVarUInt16(uint64_t conVarHandle) {
	typedef uint16_t (*GetConVarUInt16Fn)(uint64_t);
	static GetConVarUInt16Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarUInt16", (void**)&__func);
	return __func(conVarHandle);
}

static int32_t GetConVarInt32(uint64_t conVarHandle) {
	typedef int32_t (*GetConVarInt32Fn)(uint64_t);
	static GetConVarInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarInt32", (void**)&__func);
	return __func(conVarHandle);
}

static uint32_t GetConVarUInt32(uint64_t conVarHandle) {
	typedef uint32_t (*GetConVarUInt32Fn)(uint64_t);
	static GetConVarUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarUInt32", (void**)&__func);
	return __func(conVarHandle);
}

static int64_t GetConVarInt64(uint64_t conVarHandle) {
	typedef int64_t (*GetConVarInt64Fn)(uint64_t);
	static GetConVarInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarInt64", (void**)&__func);
	return __func(conVarHandle);
}

static uint64_t GetConVarUInt64(uint64_t conVarHandle) {
	typedef uint64_t (*GetConVarUInt64Fn)(uint64_t);
	static GetConVarUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarUInt64", (void**)&__func);
	return __func(conVarHandle);
}

static float GetConVarFloat(uint64_t conVarHandle) {
	typedef float (*GetConVarFloatFn)(uint64_t);
	static GetConVarFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarFloat", (void**)&__func);
	return __func(conVarHandle);
}

static double GetConVarDouble(uint64_t conVarHandle) {
	typedef double (*GetConVarDoubleFn)(uint64_t);
	static GetConVarDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarDouble", (void**)&__func);
	return __func(conVarHandle);
}

static String GetConVarString(uint64_t conVarHandle) {
	typedef String (*GetConVarStringFn)(uint64_t);
	static GetConVarStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarString", (void**)&__func);
	return __func(conVarHandle);
}

static int32_t GetConVarColor(uint64_t conVarHandle) {
	typedef int32_t (*GetConVarColorFn)(uint64_t);
	static GetConVarColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarColor", (void**)&__func);
	return __func(conVarHandle);
}

static Vector2 GetConVarVector2(uint64_t conVarHandle) {
	typedef Vector2 (*GetConVarVector2Fn)(uint64_t);
	static GetConVarVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarVector2", (void**)&__func);
	return __func(conVarHandle);
}

static Vector3 GetConVarVector(uint64_t conVarHandle) {
	typedef Vector3 (*GetConVarVectorFn)(uint64_t);
	static GetConVarVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarVector", (void**)&__func);
	return __func(conVarHandle);
}

static Vector4 GetConVarVector4(uint64_t conVarHandle) {
	typedef Vector4 (*GetConVarVector4Fn)(uint64_t);
	static GetConVarVector4Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarVector4", (void**)&__func);
	return __func(conVarHandle);
}

static Vector3 GetConVarQAngle(uint64_t conVarHandle) {
	typedef Vector3 (*GetConVarQAngleFn)(uint64_t);
	static GetConVarQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetConVarQAngle", (void**)&__func);
	return __func(conVarHandle);
}

static void SetConVarValue(uint64_t conVarHandle, String* value, bool replicate, bool notify) {
	typedef void (*SetConVarValueFn)(uint64_t, String*, bool, bool);
	static SetConVarValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarValue", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVar(uint64_t conVarHandle, Variant* value, bool replicate, bool notify) {
	typedef void (*SetConVarFn)(uint64_t, Variant*, bool, bool);
	static SetConVarFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVar", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarBool(uint64_t conVarHandle, bool value, bool replicate, bool notify) {
	typedef void (*SetConVarBoolFn)(uint64_t, bool, bool, bool);
	static SetConVarBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarBool", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarInt16(uint64_t conVarHandle, int16_t value, bool replicate, bool notify) {
	typedef void (*SetConVarInt16Fn)(uint64_t, int16_t, bool, bool);
	static SetConVarInt16Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarInt16", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarUInt16(uint64_t conVarHandle, uint16_t value, bool replicate, bool notify) {
	typedef void (*SetConVarUInt16Fn)(uint64_t, uint16_t, bool, bool);
	static SetConVarUInt16Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarUInt16", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarInt32(uint64_t conVarHandle, int32_t value, bool replicate, bool notify) {
	typedef void (*SetConVarInt32Fn)(uint64_t, int32_t, bool, bool);
	static SetConVarInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarInt32", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarUInt32(uint64_t conVarHandle, uint32_t value, bool replicate, bool notify) {
	typedef void (*SetConVarUInt32Fn)(uint64_t, uint32_t, bool, bool);
	static SetConVarUInt32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarUInt32", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarInt64(uint64_t conVarHandle, int64_t value, bool replicate, bool notify) {
	typedef void (*SetConVarInt64Fn)(uint64_t, int64_t, bool, bool);
	static SetConVarInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarInt64", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarUInt64(uint64_t conVarHandle, uint64_t value, bool replicate, bool notify) {
	typedef void (*SetConVarUInt64Fn)(uint64_t, uint64_t, bool, bool);
	static SetConVarUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarUInt64", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarFloat(uint64_t conVarHandle, float value, bool replicate, bool notify) {
	typedef void (*SetConVarFloatFn)(uint64_t, float, bool, bool);
	static SetConVarFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarFloat", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarDouble(uint64_t conVarHandle, double value, bool replicate, bool notify) {
	typedef void (*SetConVarDoubleFn)(uint64_t, double, bool, bool);
	static SetConVarDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarDouble", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarString(uint64_t conVarHandle, String* value, bool replicate, bool notify) {
	typedef void (*SetConVarStringFn)(uint64_t, String*, bool, bool);
	static SetConVarStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarString", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarColor(uint64_t conVarHandle, int32_t value, bool replicate, bool notify) {
	typedef void (*SetConVarColorFn)(uint64_t, int32_t, bool, bool);
	static SetConVarColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarColor", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarVector2(uint64_t conVarHandle, Vector2* value, bool replicate, bool notify) {
	typedef void (*SetConVarVector2Fn)(uint64_t, Vector2*, bool, bool);
	static SetConVarVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarVector2", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarVector3(uint64_t conVarHandle, Vector3* value, bool replicate, bool notify) {
	typedef void (*SetConVarVector3Fn)(uint64_t, Vector3*, bool, bool);
	static SetConVarVector3Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarVector3", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarVector4(uint64_t conVarHandle, Vector4* value, bool replicate, bool notify) {
	typedef void (*SetConVarVector4Fn)(uint64_t, Vector4*, bool, bool);
	static SetConVarVector4Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarVector4", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SetConVarQAngle(uint64_t conVarHandle, Vector3* value, bool replicate, bool notify) {
	typedef void (*SetConVarQAngleFn)(uint64_t, Vector3*, bool, bool);
	static SetConVarQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetConVarQAngle", (void**)&__func);
	__func(conVarHandle, value, replicate, notify);
}

static void SendConVarValue(int32_t playerSlot, uint64_t conVarHandle, String* value) {
	typedef void (*SendConVarValueFn)(int32_t, uint64_t, String*);
	static SendConVarValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SendConVarValue", (void**)&__func);
	__func(playerSlot, conVarHandle, value);
}

static String GetClientConVarValue(int32_t playerSlot, String* convarName) {
	typedef String (*GetClientConVarValueFn)(int32_t, String*);
	static GetClientConVarValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetClientConVarValue", (void**)&__func);
	return __func(playerSlot, convarName);
}

static void SetFakeClientConVarValue(int32_t playerSlot, String* convarName, String* convarValue) {
	typedef void (*SetFakeClientConVarValueFn)(int32_t, String*, String*);
	static SetFakeClientConVarValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetFakeClientConVarValue", (void**)&__func);
	__func(playerSlot, convarName, convarValue);
}

static int32_t QueryClientConVar(int32_t playerSlot, String* convarName, void* callback, Vector* data) {
	typedef int32_t (*QueryClientConVarFn)(int32_t, String*, void*, Vector*);
	static QueryClientConVarFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.QueryClientConVar", (void**)&__func);
	return __func(playerSlot, convarName, callback, data);
}

static bool AutoExecConfig(Vector* conVarHandles, bool autoCreate, String* name, String* folder) {
	typedef bool (*AutoExecConfigFn)(Vector*, bool, String*, String*);
	static AutoExecConfigFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AutoExecConfig", (void**)&__func);
	return __func(conVarHandles, autoCreate, name, folder);
}

static String GetServerLanguage() {
	typedef String (*GetServerLanguageFn)();
	static GetServerLanguageFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetServerLanguage", (void**)&__func);
	return __func();
}

