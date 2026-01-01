#pragma once

#include "shared.h"

extern uint64_t (*__s2sdk_CreateConVar)(String*, Variant*, String*, int64_t);

static uint64_t CreateConVar(String* name, Variant* defaultValue, String* description, int64_t flags) {
	return __s2sdk_CreateConVar(name, defaultValue, description, flags);
}

extern uint64_t (*__s2sdk_CreateConVarBool)(String*, bool, String*, int64_t, bool, bool, bool, bool);

static uint64_t CreateConVarBool(String* name, bool defaultValue, String* description, int64_t flags, bool hasMin, bool min, bool hasMax, bool max) {
	return __s2sdk_CreateConVarBool(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarInt16)(String*, int16_t, String*, int64_t, bool, int16_t, bool, int16_t);

static uint64_t CreateConVarInt16(String* name, int16_t defaultValue, String* description, int64_t flags, bool hasMin, int16_t min, bool hasMax, int16_t max) {
	return __s2sdk_CreateConVarInt16(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarUInt16)(String*, uint16_t, String*, int64_t, bool, uint16_t, bool, uint16_t);

static uint64_t CreateConVarUInt16(String* name, uint16_t defaultValue, String* description, int64_t flags, bool hasMin, uint16_t min, bool hasMax, uint16_t max) {
	return __s2sdk_CreateConVarUInt16(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarInt32)(String*, int32_t, String*, int64_t, bool, int32_t, bool, int32_t);

static uint64_t CreateConVarInt32(String* name, int32_t defaultValue, String* description, int64_t flags, bool hasMin, int32_t min, bool hasMax, int32_t max) {
	return __s2sdk_CreateConVarInt32(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarUInt32)(String*, uint32_t, String*, int64_t, bool, uint32_t, bool, uint32_t);

static uint64_t CreateConVarUInt32(String* name, uint32_t defaultValue, String* description, int64_t flags, bool hasMin, uint32_t min, bool hasMax, uint32_t max) {
	return __s2sdk_CreateConVarUInt32(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarInt64)(String*, int64_t, String*, int64_t, bool, int64_t, bool, int64_t);

static uint64_t CreateConVarInt64(String* name, int64_t defaultValue, String* description, int64_t flags, bool hasMin, int64_t min, bool hasMax, int64_t max) {
	return __s2sdk_CreateConVarInt64(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarUInt64)(String*, uint64_t, String*, int64_t, bool, uint64_t, bool, uint64_t);

static uint64_t CreateConVarUInt64(String* name, uint64_t defaultValue, String* description, int64_t flags, bool hasMin, uint64_t min, bool hasMax, uint64_t max) {
	return __s2sdk_CreateConVarUInt64(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarFloat)(String*, float, String*, int64_t, bool, float, bool, float);

static uint64_t CreateConVarFloat(String* name, float defaultValue, String* description, int64_t flags, bool hasMin, float min, bool hasMax, float max) {
	return __s2sdk_CreateConVarFloat(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarDouble)(String*, double, String*, int64_t, bool, double, bool, double);

static uint64_t CreateConVarDouble(String* name, double defaultValue, String* description, int64_t flags, bool hasMin, double min, bool hasMax, double max) {
	return __s2sdk_CreateConVarDouble(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarColor)(String*, Vector4*, String*, int64_t, bool, Vector4*, bool, Vector4*);

static uint64_t CreateConVarColor(String* name, Vector4* defaultValue, String* description, int64_t flags, bool hasMin, Vector4* min, bool hasMax, Vector4* max) {
	return __s2sdk_CreateConVarColor(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarVector2)(String*, Vector2*, String*, int64_t, bool, Vector2*, bool, Vector2*);

static uint64_t CreateConVarVector2(String* name, Vector2* defaultValue, String* description, int64_t flags, bool hasMin, Vector2* min, bool hasMax, Vector2* max) {
	return __s2sdk_CreateConVarVector2(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarVector3)(String*, Vector3*, String*, int64_t, bool, Vector3*, bool, Vector3*);

static uint64_t CreateConVarVector3(String* name, Vector3* defaultValue, String* description, int64_t flags, bool hasMin, Vector3* min, bool hasMax, Vector3* max) {
	return __s2sdk_CreateConVarVector3(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarVector4)(String*, Vector4*, String*, int64_t, bool, Vector4*, bool, Vector4*);

static uint64_t CreateConVarVector4(String* name, Vector4* defaultValue, String* description, int64_t flags, bool hasMin, Vector4* min, bool hasMax, Vector4* max) {
	return __s2sdk_CreateConVarVector4(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarQAngle)(String*, Vector3*, String*, int64_t, bool, Vector3*, bool, Vector3*);

static uint64_t CreateConVarQAngle(String* name, Vector3* defaultValue, String* description, int64_t flags, bool hasMin, Vector3* min, bool hasMax, Vector3* max) {
	return __s2sdk_CreateConVarQAngle(name, defaultValue, description, flags, hasMin, min, hasMax, max);
}

extern uint64_t (*__s2sdk_CreateConVarString)(String*, String*, String*, int64_t);

static uint64_t CreateConVarString(String* name, String* defaultValue, String* description, int64_t flags) {
	return __s2sdk_CreateConVarString(name, defaultValue, description, flags);
}

extern uint64_t (*__s2sdk_FindConVar)(String*);

static uint64_t FindConVar(String* name) {
	return __s2sdk_FindConVar(name);
}

extern uint64_t (*__s2sdk_FindConVar2)(String*, int16_t);

static uint64_t FindConVar2(String* name, int16_t type_) {
	return __s2sdk_FindConVar2(name, type_);
}

extern void (*__s2sdk_HookConVarChange)(uint64_t, void*);

static void HookConVarChange(uint64_t conVarHandle, void* callback) {
	__s2sdk_HookConVarChange(conVarHandle, callback);
}

extern void (*__s2sdk_UnhookConVarChange)(uint64_t, void*);

static void UnhookConVarChange(uint64_t conVarHandle, void* callback) {
	__s2sdk_UnhookConVarChange(conVarHandle, callback);
}

extern bool (*__s2sdk_IsConVarFlagSet)(uint64_t, int64_t);

static bool IsConVarFlagSet(uint64_t conVarHandle, int64_t flag) {
	return __s2sdk_IsConVarFlagSet(conVarHandle, flag);
}

extern void (*__s2sdk_AddConVarFlags)(uint64_t, int64_t);

static void AddConVarFlags(uint64_t conVarHandle, int64_t flags) {
	__s2sdk_AddConVarFlags(conVarHandle, flags);
}

extern void (*__s2sdk_RemoveConVarFlags)(uint64_t, int64_t);

static void RemoveConVarFlags(uint64_t conVarHandle, int64_t flags) {
	__s2sdk_RemoveConVarFlags(conVarHandle, flags);
}

extern int64_t (*__s2sdk_GetConVarFlags)(uint64_t);

static int64_t GetConVarFlags(uint64_t conVarHandle) {
	return __s2sdk_GetConVarFlags(conVarHandle);
}

extern String (*__s2sdk_GetConVarBounds)(uint64_t, bool);

static String GetConVarBounds(uint64_t conVarHandle, bool max) {
	return __s2sdk_GetConVarBounds(conVarHandle, max);
}

extern void (*__s2sdk_SetConVarBounds)(uint64_t, bool, String*);

static void SetConVarBounds(uint64_t conVarHandle, bool max, String* value) {
	__s2sdk_SetConVarBounds(conVarHandle, max, value);
}

extern String (*__s2sdk_GetConVarDefault)(uint64_t);

static String GetConVarDefault(uint64_t conVarHandle) {
	return __s2sdk_GetConVarDefault(conVarHandle);
}

extern String (*__s2sdk_GetConVarValue)(uint64_t);

static String GetConVarValue(uint64_t conVarHandle) {
	return __s2sdk_GetConVarValue(conVarHandle);
}

extern Variant (*__s2sdk_GetConVar)(uint64_t);

static Variant GetConVar(uint64_t conVarHandle) {
	return __s2sdk_GetConVar(conVarHandle);
}

extern bool (*__s2sdk_GetConVarBool)(uint64_t);

static bool GetConVarBool(uint64_t conVarHandle) {
	return __s2sdk_GetConVarBool(conVarHandle);
}

extern int16_t (*__s2sdk_GetConVarInt16)(uint64_t);

static int16_t GetConVarInt16(uint64_t conVarHandle) {
	return __s2sdk_GetConVarInt16(conVarHandle);
}

extern uint16_t (*__s2sdk_GetConVarUInt16)(uint64_t);

static uint16_t GetConVarUInt16(uint64_t conVarHandle) {
	return __s2sdk_GetConVarUInt16(conVarHandle);
}

extern int32_t (*__s2sdk_GetConVarInt32)(uint64_t);

static int32_t GetConVarInt32(uint64_t conVarHandle) {
	return __s2sdk_GetConVarInt32(conVarHandle);
}

extern uint32_t (*__s2sdk_GetConVarUInt32)(uint64_t);

static uint32_t GetConVarUInt32(uint64_t conVarHandle) {
	return __s2sdk_GetConVarUInt32(conVarHandle);
}

extern int64_t (*__s2sdk_GetConVarInt64)(uint64_t);

static int64_t GetConVarInt64(uint64_t conVarHandle) {
	return __s2sdk_GetConVarInt64(conVarHandle);
}

extern uint64_t (*__s2sdk_GetConVarUInt64)(uint64_t);

static uint64_t GetConVarUInt64(uint64_t conVarHandle) {
	return __s2sdk_GetConVarUInt64(conVarHandle);
}

extern float (*__s2sdk_GetConVarFloat)(uint64_t);

static float GetConVarFloat(uint64_t conVarHandle) {
	return __s2sdk_GetConVarFloat(conVarHandle);
}

extern double (*__s2sdk_GetConVarDouble)(uint64_t);

static double GetConVarDouble(uint64_t conVarHandle) {
	return __s2sdk_GetConVarDouble(conVarHandle);
}

extern String (*__s2sdk_GetConVarString)(uint64_t);

static String GetConVarString(uint64_t conVarHandle) {
	return __s2sdk_GetConVarString(conVarHandle);
}

extern Vector4 (*__s2sdk_GetConVarColor)(uint64_t);

static Vector4 GetConVarColor(uint64_t conVarHandle) {
	return __s2sdk_GetConVarColor(conVarHandle);
}

extern Vector2 (*__s2sdk_GetConVarVector2)(uint64_t);

static Vector2 GetConVarVector2(uint64_t conVarHandle) {
	return __s2sdk_GetConVarVector2(conVarHandle);
}

extern Vector3 (*__s2sdk_GetConVarVector)(uint64_t);

static Vector3 GetConVarVector(uint64_t conVarHandle) {
	return __s2sdk_GetConVarVector(conVarHandle);
}

extern Vector4 (*__s2sdk_GetConVarVector4)(uint64_t);

static Vector4 GetConVarVector4(uint64_t conVarHandle) {
	return __s2sdk_GetConVarVector4(conVarHandle);
}

extern Vector3 (*__s2sdk_GetConVarQAngle)(uint64_t);

static Vector3 GetConVarQAngle(uint64_t conVarHandle) {
	return __s2sdk_GetConVarQAngle(conVarHandle);
}

extern void (*__s2sdk_SetConVarValue)(uint64_t, String*, bool, bool);

static void SetConVarValue(uint64_t conVarHandle, String* value, bool replicate, bool notify) {
	__s2sdk_SetConVarValue(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVar)(uint64_t, Variant*, bool, bool);

static void SetConVar(uint64_t conVarHandle, Variant* value, bool replicate, bool notify) {
	__s2sdk_SetConVar(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarBool)(uint64_t, bool, bool, bool);

static void SetConVarBool(uint64_t conVarHandle, bool value, bool replicate, bool notify) {
	__s2sdk_SetConVarBool(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarInt16)(uint64_t, int16_t, bool, bool);

static void SetConVarInt16(uint64_t conVarHandle, int16_t value, bool replicate, bool notify) {
	__s2sdk_SetConVarInt16(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarUInt16)(uint64_t, uint16_t, bool, bool);

static void SetConVarUInt16(uint64_t conVarHandle, uint16_t value, bool replicate, bool notify) {
	__s2sdk_SetConVarUInt16(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarInt32)(uint64_t, int32_t, bool, bool);

static void SetConVarInt32(uint64_t conVarHandle, int32_t value, bool replicate, bool notify) {
	__s2sdk_SetConVarInt32(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarUInt32)(uint64_t, uint32_t, bool, bool);

static void SetConVarUInt32(uint64_t conVarHandle, uint32_t value, bool replicate, bool notify) {
	__s2sdk_SetConVarUInt32(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarInt64)(uint64_t, int64_t, bool, bool);

static void SetConVarInt64(uint64_t conVarHandle, int64_t value, bool replicate, bool notify) {
	__s2sdk_SetConVarInt64(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarUInt64)(uint64_t, uint64_t, bool, bool);

static void SetConVarUInt64(uint64_t conVarHandle, uint64_t value, bool replicate, bool notify) {
	__s2sdk_SetConVarUInt64(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarFloat)(uint64_t, float, bool, bool);

static void SetConVarFloat(uint64_t conVarHandle, float value, bool replicate, bool notify) {
	__s2sdk_SetConVarFloat(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarDouble)(uint64_t, double, bool, bool);

static void SetConVarDouble(uint64_t conVarHandle, double value, bool replicate, bool notify) {
	__s2sdk_SetConVarDouble(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarString)(uint64_t, String*, bool, bool);

static void SetConVarString(uint64_t conVarHandle, String* value, bool replicate, bool notify) {
	__s2sdk_SetConVarString(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarColor)(uint64_t, Vector4*, bool, bool);

static void SetConVarColor(uint64_t conVarHandle, Vector4* value, bool replicate, bool notify) {
	__s2sdk_SetConVarColor(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarVector2)(uint64_t, Vector2*, bool, bool);

static void SetConVarVector2(uint64_t conVarHandle, Vector2* value, bool replicate, bool notify) {
	__s2sdk_SetConVarVector2(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarVector3)(uint64_t, Vector3*, bool, bool);

static void SetConVarVector3(uint64_t conVarHandle, Vector3* value, bool replicate, bool notify) {
	__s2sdk_SetConVarVector3(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarVector4)(uint64_t, Vector4*, bool, bool);

static void SetConVarVector4(uint64_t conVarHandle, Vector4* value, bool replicate, bool notify) {
	__s2sdk_SetConVarVector4(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SetConVarQAngle)(uint64_t, Vector3*, bool, bool);

static void SetConVarQAngle(uint64_t conVarHandle, Vector3* value, bool replicate, bool notify) {
	__s2sdk_SetConVarQAngle(conVarHandle, value, replicate, notify);
}

extern void (*__s2sdk_SendConVarValue)(int32_t, uint64_t, String*);

static void SendConVarValue(int32_t playerSlot, uint64_t conVarHandle, String* value) {
	__s2sdk_SendConVarValue(playerSlot, conVarHandle, value);
}

extern void (*__s2sdk_SendConVarValue2)(uint64_t, int32_t, String*);

static void SendConVarValue2(uint64_t conVarHandle, int32_t playerSlot, String* value) {
	__s2sdk_SendConVarValue2(conVarHandle, playerSlot, value);
}

extern String (*__s2sdk_GetClientConVarValue)(int32_t, String*);

static String GetClientConVarValue(int32_t playerSlot, String* convarName) {
	return __s2sdk_GetClientConVarValue(playerSlot, convarName);
}

extern void (*__s2sdk_SetFakeClientConVarValue)(int32_t, String*, String*);

static void SetFakeClientConVarValue(int32_t playerSlot, String* convarName, String* convarValue) {
	__s2sdk_SetFakeClientConVarValue(playerSlot, convarName, convarValue);
}

extern int32_t (*__s2sdk_QueryClientConVar)(int32_t, String*, void*, Vector*);

static int32_t QueryClientConVar(int32_t playerSlot, String* convarName, void* callback, Vector* data) {
	return __s2sdk_QueryClientConVar(playerSlot, convarName, callback, data);
}

extern bool (*__s2sdk_AutoExecConfig)(Vector*, bool, String*, String*);

static bool AutoExecConfig(Vector* conVarHandles, bool autoCreate, String* name, String* folder) {
	return __s2sdk_AutoExecConfig(conVarHandles, autoCreate, name, folder);
}

extern String (*__s2sdk_GetServerLanguage)();

static String GetServerLanguage() {
	return __s2sdk_GetServerLanguage();
}

extern Vector (*__s2sdk_GetAllConVars)();

static Vector GetAllConVars() {
	return __s2sdk_GetAllConVars();
}

