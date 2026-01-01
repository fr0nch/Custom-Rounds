#pragma once

#include "shared.h"

extern uintptr_t (*__s2sdk_Kv3Create)(int32_t, int32_t);

static uintptr_t Kv3Create(int32_t type_, int32_t subtype) {
	return __s2sdk_Kv3Create(type_, subtype);
}

extern uintptr_t (*__s2sdk_Kv3CreateWithCluster)(int32_t, int32_t, int32_t);

static uintptr_t Kv3CreateWithCluster(int32_t cluster_elem, int32_t type_, int32_t subtype) {
	return __s2sdk_Kv3CreateWithCluster(cluster_elem, type_, subtype);
}

extern uintptr_t (*__s2sdk_Kv3CreateCopy)(uintptr_t);

static uintptr_t Kv3CreateCopy(uintptr_t other) {
	return __s2sdk_Kv3CreateCopy(other);
}

extern void (*__s2sdk_Kv3Destroy)(uintptr_t);

static void Kv3Destroy(uintptr_t kv) {
	__s2sdk_Kv3Destroy(kv);
}

extern void (*__s2sdk_Kv3CopyFrom)(uintptr_t, uintptr_t);

static void Kv3CopyFrom(uintptr_t kv, uintptr_t other) {
	__s2sdk_Kv3CopyFrom(kv, other);
}

extern void (*__s2sdk_Kv3OverlayKeysFrom)(uintptr_t, uintptr_t, bool);

static void Kv3OverlayKeysFrom(uintptr_t kv, uintptr_t other, bool depth) {
	__s2sdk_Kv3OverlayKeysFrom(kv, other, depth);
}

extern uintptr_t (*__s2sdk_Kv3GetContext)(uintptr_t);

static uintptr_t Kv3GetContext(uintptr_t kv) {
	return __s2sdk_Kv3GetContext(kv);
}

extern uintptr_t (*__s2sdk_Kv3GetMetaData)(uintptr_t, uintptr_t);

static uintptr_t Kv3GetMetaData(uintptr_t kv, uintptr_t ppCtx) {
	return __s2sdk_Kv3GetMetaData(kv, ppCtx);
}

extern bool (*__s2sdk_Kv3HasFlag)(uintptr_t, uint8_t);

static bool Kv3HasFlag(uintptr_t kv, uint8_t flag) {
	return __s2sdk_Kv3HasFlag(kv, flag);
}

extern bool (*__s2sdk_Kv3HasAnyFlags)(uintptr_t);

static bool Kv3HasAnyFlags(uintptr_t kv) {
	return __s2sdk_Kv3HasAnyFlags(kv);
}

extern uint8_t (*__s2sdk_Kv3GetAllFlags)(uintptr_t);

static uint8_t Kv3GetAllFlags(uintptr_t kv) {
	return __s2sdk_Kv3GetAllFlags(kv);
}

extern void (*__s2sdk_Kv3SetAllFlags)(uintptr_t, uint8_t);

static void Kv3SetAllFlags(uintptr_t kv, uint8_t flags) {
	__s2sdk_Kv3SetAllFlags(kv, flags);
}

extern void (*__s2sdk_Kv3SetFlag)(uintptr_t, uint8_t, bool);

static void Kv3SetFlag(uintptr_t kv, uint8_t flag, bool state) {
	__s2sdk_Kv3SetFlag(kv, flag, state);
}

extern uint8_t (*__s2sdk_Kv3GetType)(uintptr_t);

static uint8_t Kv3GetType(uintptr_t kv) {
	return __s2sdk_Kv3GetType(kv);
}

extern uint8_t (*__s2sdk_Kv3GetTypeEx)(uintptr_t);

static uint8_t Kv3GetTypeEx(uintptr_t kv) {
	return __s2sdk_Kv3GetTypeEx(kv);
}

extern uint8_t (*__s2sdk_Kv3GetSubType)(uintptr_t);

static uint8_t Kv3GetSubType(uintptr_t kv) {
	return __s2sdk_Kv3GetSubType(kv);
}

extern bool (*__s2sdk_Kv3HasInvalidMemberNames)(uintptr_t);

static bool Kv3HasInvalidMemberNames(uintptr_t kv) {
	return __s2sdk_Kv3HasInvalidMemberNames(kv);
}

extern void (*__s2sdk_Kv3SetHasInvalidMemberNames)(uintptr_t, bool);

static void Kv3SetHasInvalidMemberNames(uintptr_t kv, bool bValue) {
	__s2sdk_Kv3SetHasInvalidMemberNames(kv, bValue);
}

extern String (*__s2sdk_Kv3GetTypeAsString)(uintptr_t);

static String Kv3GetTypeAsString(uintptr_t kv) {
	return __s2sdk_Kv3GetTypeAsString(kv);
}

extern String (*__s2sdk_Kv3GetSubTypeAsString)(uintptr_t);

static String Kv3GetSubTypeAsString(uintptr_t kv) {
	return __s2sdk_Kv3GetSubTypeAsString(kv);
}

extern String (*__s2sdk_Kv3ToString)(uintptr_t, uint32_t);

static String Kv3ToString(uintptr_t kv, uint32_t flags) {
	return __s2sdk_Kv3ToString(kv, flags);
}

extern bool (*__s2sdk_Kv3IsNull)(uintptr_t);

static bool Kv3IsNull(uintptr_t kv) {
	return __s2sdk_Kv3IsNull(kv);
}

extern void (*__s2sdk_Kv3SetToNull)(uintptr_t);

static void Kv3SetToNull(uintptr_t kv) {
	__s2sdk_Kv3SetToNull(kv);
}

extern bool (*__s2sdk_Kv3IsArray)(uintptr_t);

static bool Kv3IsArray(uintptr_t kv) {
	return __s2sdk_Kv3IsArray(kv);
}

extern bool (*__s2sdk_Kv3IsKV3Array)(uintptr_t);

static bool Kv3IsKV3Array(uintptr_t kv) {
	return __s2sdk_Kv3IsKV3Array(kv);
}

extern bool (*__s2sdk_Kv3IsTable)(uintptr_t);

static bool Kv3IsTable(uintptr_t kv) {
	return __s2sdk_Kv3IsTable(kv);
}

extern bool (*__s2sdk_Kv3IsString)(uintptr_t);

static bool Kv3IsString(uintptr_t kv) {
	return __s2sdk_Kv3IsString(kv);
}

extern bool (*__s2sdk_Kv3GetBool)(uintptr_t, bool);

static bool Kv3GetBool(uintptr_t kv, bool defaultValue) {
	return __s2sdk_Kv3GetBool(kv, defaultValue);
}

extern int8_t (*__s2sdk_Kv3GetChar)(uintptr_t, int8_t);

static int8_t Kv3GetChar(uintptr_t kv, int8_t defaultValue) {
	return __s2sdk_Kv3GetChar(kv, defaultValue);
}

extern uint32_t (*__s2sdk_Kv3GetUChar32)(uintptr_t, uint32_t);

static uint32_t Kv3GetUChar32(uintptr_t kv, uint32_t defaultValue) {
	return __s2sdk_Kv3GetUChar32(kv, defaultValue);
}

extern int8_t (*__s2sdk_Kv3GetInt8)(uintptr_t, int8_t);

static int8_t Kv3GetInt8(uintptr_t kv, int8_t defaultValue) {
	return __s2sdk_Kv3GetInt8(kv, defaultValue);
}

extern uint8_t (*__s2sdk_Kv3GetUInt8)(uintptr_t, uint8_t);

static uint8_t Kv3GetUInt8(uintptr_t kv, uint8_t defaultValue) {
	return __s2sdk_Kv3GetUInt8(kv, defaultValue);
}

extern int16_t (*__s2sdk_Kv3GetShort)(uintptr_t, int16_t);

static int16_t Kv3GetShort(uintptr_t kv, int16_t defaultValue) {
	return __s2sdk_Kv3GetShort(kv, defaultValue);
}

extern uint16_t (*__s2sdk_Kv3GetUShort)(uintptr_t, uint16_t);

static uint16_t Kv3GetUShort(uintptr_t kv, uint16_t defaultValue) {
	return __s2sdk_Kv3GetUShort(kv, defaultValue);
}

extern int32_t (*__s2sdk_Kv3GetInt)(uintptr_t, int32_t);

static int32_t Kv3GetInt(uintptr_t kv, int32_t defaultValue) {
	return __s2sdk_Kv3GetInt(kv, defaultValue);
}

extern uint32_t (*__s2sdk_Kv3GetUInt)(uintptr_t, uint32_t);

static uint32_t Kv3GetUInt(uintptr_t kv, uint32_t defaultValue) {
	return __s2sdk_Kv3GetUInt(kv, defaultValue);
}

extern int64_t (*__s2sdk_Kv3GetInt64)(uintptr_t, int64_t);

static int64_t Kv3GetInt64(uintptr_t kv, int64_t defaultValue) {
	return __s2sdk_Kv3GetInt64(kv, defaultValue);
}

extern uint64_t (*__s2sdk_Kv3GetUInt64)(uintptr_t, uint64_t);

static uint64_t Kv3GetUInt64(uintptr_t kv, uint64_t defaultValue) {
	return __s2sdk_Kv3GetUInt64(kv, defaultValue);
}

extern float (*__s2sdk_Kv3GetFloat)(uintptr_t, float);

static float Kv3GetFloat(uintptr_t kv, float defaultValue) {
	return __s2sdk_Kv3GetFloat(kv, defaultValue);
}

extern double (*__s2sdk_Kv3GetDouble)(uintptr_t, double);

static double Kv3GetDouble(uintptr_t kv, double defaultValue) {
	return __s2sdk_Kv3GetDouble(kv, defaultValue);
}

extern void (*__s2sdk_Kv3SetBool)(uintptr_t, bool);

static void Kv3SetBool(uintptr_t kv, bool value) {
	__s2sdk_Kv3SetBool(kv, value);
}

extern void (*__s2sdk_Kv3SetChar)(uintptr_t, int8_t);

static void Kv3SetChar(uintptr_t kv, int8_t value) {
	__s2sdk_Kv3SetChar(kv, value);
}

extern void (*__s2sdk_Kv3SetUChar32)(uintptr_t, uint32_t);

static void Kv3SetUChar32(uintptr_t kv, uint32_t value) {
	__s2sdk_Kv3SetUChar32(kv, value);
}

extern void (*__s2sdk_Kv3SetInt8)(uintptr_t, int8_t);

static void Kv3SetInt8(uintptr_t kv, int8_t value) {
	__s2sdk_Kv3SetInt8(kv, value);
}

extern void (*__s2sdk_Kv3SetUInt8)(uintptr_t, uint8_t);

static void Kv3SetUInt8(uintptr_t kv, uint8_t value) {
	__s2sdk_Kv3SetUInt8(kv, value);
}

extern void (*__s2sdk_Kv3SetShort)(uintptr_t, int16_t);

static void Kv3SetShort(uintptr_t kv, int16_t value) {
	__s2sdk_Kv3SetShort(kv, value);
}

extern void (*__s2sdk_Kv3SetUShort)(uintptr_t, uint16_t);

static void Kv3SetUShort(uintptr_t kv, uint16_t value) {
	__s2sdk_Kv3SetUShort(kv, value);
}

extern void (*__s2sdk_Kv3SetInt)(uintptr_t, int32_t);

static void Kv3SetInt(uintptr_t kv, int32_t value) {
	__s2sdk_Kv3SetInt(kv, value);
}

extern void (*__s2sdk_Kv3SetUInt)(uintptr_t, uint32_t);

static void Kv3SetUInt(uintptr_t kv, uint32_t value) {
	__s2sdk_Kv3SetUInt(kv, value);
}

extern void (*__s2sdk_Kv3SetInt64)(uintptr_t, int64_t);

static void Kv3SetInt64(uintptr_t kv, int64_t value) {
	__s2sdk_Kv3SetInt64(kv, value);
}

extern void (*__s2sdk_Kv3SetUInt64)(uintptr_t, uint64_t);

static void Kv3SetUInt64(uintptr_t kv, uint64_t value) {
	__s2sdk_Kv3SetUInt64(kv, value);
}

extern void (*__s2sdk_Kv3SetFloat)(uintptr_t, float);

static void Kv3SetFloat(uintptr_t kv, float value) {
	__s2sdk_Kv3SetFloat(kv, value);
}

extern void (*__s2sdk_Kv3SetDouble)(uintptr_t, double);

static void Kv3SetDouble(uintptr_t kv, double value) {
	__s2sdk_Kv3SetDouble(kv, value);
}

extern uintptr_t (*__s2sdk_Kv3GetPointer)(uintptr_t, uintptr_t);

static uintptr_t Kv3GetPointer(uintptr_t kv, uintptr_t defaultValue) {
	return __s2sdk_Kv3GetPointer(kv, defaultValue);
}

extern void (*__s2sdk_Kv3SetPointer)(uintptr_t, uintptr_t);

static void Kv3SetPointer(uintptr_t kv, uintptr_t ptr) {
	__s2sdk_Kv3SetPointer(kv, ptr);
}

extern uint32_t (*__s2sdk_Kv3GetStringToken)(uintptr_t, uint32_t);

static uint32_t Kv3GetStringToken(uintptr_t kv, uint32_t defaultValue) {
	return __s2sdk_Kv3GetStringToken(kv, defaultValue);
}

extern void (*__s2sdk_Kv3SetStringToken)(uintptr_t, uint32_t);

static void Kv3SetStringToken(uintptr_t kv, uint32_t token) {
	__s2sdk_Kv3SetStringToken(kv, token);
}

extern int32_t (*__s2sdk_Kv3GetEHandle)(uintptr_t, int32_t);

static int32_t Kv3GetEHandle(uintptr_t kv, int32_t defaultValue) {
	return __s2sdk_Kv3GetEHandle(kv, defaultValue);
}

extern void (*__s2sdk_Kv3SetEHandle)(uintptr_t, int32_t);

static void Kv3SetEHandle(uintptr_t kv, int32_t ehandle) {
	__s2sdk_Kv3SetEHandle(kv, ehandle);
}

extern String (*__s2sdk_Kv3GetString)(uintptr_t, String*);

static String Kv3GetString(uintptr_t kv, String* defaultValue) {
	return __s2sdk_Kv3GetString(kv, defaultValue);
}

extern void (*__s2sdk_Kv3SetString)(uintptr_t, String*, uint8_t);

static void Kv3SetString(uintptr_t kv, String* str, uint8_t subtype) {
	__s2sdk_Kv3SetString(kv, str, subtype);
}

extern void (*__s2sdk_Kv3SetStringExternal)(uintptr_t, String*, uint8_t);

static void Kv3SetStringExternal(uintptr_t kv, String* str, uint8_t subtype) {
	__s2sdk_Kv3SetStringExternal(kv, str, subtype);
}

extern Vector (*__s2sdk_Kv3GetBinaryBlob)(uintptr_t);

static Vector Kv3GetBinaryBlob(uintptr_t kv) {
	return __s2sdk_Kv3GetBinaryBlob(kv);
}

extern int32_t (*__s2sdk_Kv3GetBinaryBlobSize)(uintptr_t);

static int32_t Kv3GetBinaryBlobSize(uintptr_t kv) {
	return __s2sdk_Kv3GetBinaryBlobSize(kv);
}

extern void (*__s2sdk_Kv3SetToBinaryBlob)(uintptr_t, Vector*);

static void Kv3SetToBinaryBlob(uintptr_t kv, Vector* blob) {
	__s2sdk_Kv3SetToBinaryBlob(kv, blob);
}

extern void (*__s2sdk_Kv3SetToBinaryBlobExternal)(uintptr_t, Vector*, bool);

static void Kv3SetToBinaryBlobExternal(uintptr_t kv, Vector* blob, bool free_mem) {
	__s2sdk_Kv3SetToBinaryBlobExternal(kv, blob, free_mem);
}

extern Vector4 (*__s2sdk_Kv3GetColor)(uintptr_t, Vector4*);

static Vector4 Kv3GetColor(uintptr_t kv, Vector4* defaultValue) {
	return __s2sdk_Kv3GetColor(kv, defaultValue);
}

extern void (*__s2sdk_Kv3SetColor)(uintptr_t, Vector4*);

static void Kv3SetColor(uintptr_t kv, Vector4* color) {
	__s2sdk_Kv3SetColor(kv, color);
}

extern Vector3 (*__s2sdk_Kv3GetVector)(uintptr_t, Vector3*);

static Vector3 Kv3GetVector(uintptr_t kv, Vector3* defaultValue) {
	return __s2sdk_Kv3GetVector(kv, defaultValue);
}

extern Vector2 (*__s2sdk_Kv3GetVector2D)(uintptr_t, Vector2*);

static Vector2 Kv3GetVector2D(uintptr_t kv, Vector2* defaultValue) {
	return __s2sdk_Kv3GetVector2D(kv, defaultValue);
}

extern Vector4 (*__s2sdk_Kv3GetVector4D)(uintptr_t, Vector4*);

static Vector4 Kv3GetVector4D(uintptr_t kv, Vector4* defaultValue) {
	return __s2sdk_Kv3GetVector4D(kv, defaultValue);
}

extern Vector4 (*__s2sdk_Kv3GetQuaternion)(uintptr_t, Vector4*);

static Vector4 Kv3GetQuaternion(uintptr_t kv, Vector4* defaultValue) {
	return __s2sdk_Kv3GetQuaternion(kv, defaultValue);
}

extern Vector3 (*__s2sdk_Kv3GetQAngle)(uintptr_t, Vector3*);

static Vector3 Kv3GetQAngle(uintptr_t kv, Vector3* defaultValue) {
	return __s2sdk_Kv3GetQAngle(kv, defaultValue);
}

extern Matrix4x4 (*__s2sdk_Kv3GetMatrix3x4)(uintptr_t, Matrix4x4*);

static Matrix4x4 Kv3GetMatrix3x4(uintptr_t kv, Matrix4x4* defaultValue) {
	return __s2sdk_Kv3GetMatrix3x4(kv, defaultValue);
}

extern void (*__s2sdk_Kv3SetVector)(uintptr_t, Vector3*);

static void Kv3SetVector(uintptr_t kv, Vector3* vec) {
	__s2sdk_Kv3SetVector(kv, vec);
}

extern void (*__s2sdk_Kv3SetVector2D)(uintptr_t, Vector2*);

static void Kv3SetVector2D(uintptr_t kv, Vector2* vec2d) {
	__s2sdk_Kv3SetVector2D(kv, vec2d);
}

extern void (*__s2sdk_Kv3SetVector4D)(uintptr_t, Vector4*);

static void Kv3SetVector4D(uintptr_t kv, Vector4* vec4d) {
	__s2sdk_Kv3SetVector4D(kv, vec4d);
}

extern void (*__s2sdk_Kv3SetQuaternion)(uintptr_t, Vector4*);

static void Kv3SetQuaternion(uintptr_t kv, Vector4* quat) {
	__s2sdk_Kv3SetQuaternion(kv, quat);
}

extern void (*__s2sdk_Kv3SetQAngle)(uintptr_t, Vector3*);

static void Kv3SetQAngle(uintptr_t kv, Vector3* ang) {
	__s2sdk_Kv3SetQAngle(kv, ang);
}

extern void (*__s2sdk_Kv3SetMatrix3x4)(uintptr_t, Matrix4x4*);

static void Kv3SetMatrix3x4(uintptr_t kv, Matrix4x4* matrix) {
	__s2sdk_Kv3SetMatrix3x4(kv, matrix);
}

extern int32_t (*__s2sdk_Kv3GetArrayElementCount)(uintptr_t);

static int32_t Kv3GetArrayElementCount(uintptr_t kv) {
	return __s2sdk_Kv3GetArrayElementCount(kv);
}

extern void (*__s2sdk_Kv3SetArrayElementCount)(uintptr_t, int32_t, uint8_t, uint8_t);

static void Kv3SetArrayElementCount(uintptr_t kv, int32_t count, uint8_t type_, uint8_t subtype) {
	__s2sdk_Kv3SetArrayElementCount(kv, count, type_, subtype);
}

extern void (*__s2sdk_Kv3SetToEmptyKV3Array)(uintptr_t);

static void Kv3SetToEmptyKV3Array(uintptr_t kv) {
	__s2sdk_Kv3SetToEmptyKV3Array(kv);
}

extern uintptr_t (*__s2sdk_Kv3GetArrayElement)(uintptr_t, int32_t);

static uintptr_t Kv3GetArrayElement(uintptr_t kv, int32_t elem) {
	return __s2sdk_Kv3GetArrayElement(kv, elem);
}

extern uintptr_t (*__s2sdk_Kv3ArrayInsertElementBefore)(uintptr_t, int32_t);

static uintptr_t Kv3ArrayInsertElementBefore(uintptr_t kv, int32_t elem) {
	return __s2sdk_Kv3ArrayInsertElementBefore(kv, elem);
}

extern uintptr_t (*__s2sdk_Kv3ArrayInsertElementAfter)(uintptr_t, int32_t);

static uintptr_t Kv3ArrayInsertElementAfter(uintptr_t kv, int32_t elem) {
	return __s2sdk_Kv3ArrayInsertElementAfter(kv, elem);
}

extern uintptr_t (*__s2sdk_Kv3ArrayAddElementToTail)(uintptr_t);

static uintptr_t Kv3ArrayAddElementToTail(uintptr_t kv) {
	return __s2sdk_Kv3ArrayAddElementToTail(kv);
}

extern void (*__s2sdk_Kv3ArraySwapItems)(uintptr_t, int32_t, int32_t);

static void Kv3ArraySwapItems(uintptr_t kv, int32_t idx1, int32_t idx2) {
	__s2sdk_Kv3ArraySwapItems(kv, idx1, idx2);
}

extern void (*__s2sdk_Kv3ArrayRemoveElement)(uintptr_t, int32_t);

static void Kv3ArrayRemoveElement(uintptr_t kv, int32_t elem) {
	__s2sdk_Kv3ArrayRemoveElement(kv, elem);
}

extern void (*__s2sdk_Kv3SetToEmptyTable)(uintptr_t);

static void Kv3SetToEmptyTable(uintptr_t kv) {
	__s2sdk_Kv3SetToEmptyTable(kv);
}

extern int32_t (*__s2sdk_Kv3GetMemberCount)(uintptr_t);

static int32_t Kv3GetMemberCount(uintptr_t kv) {
	return __s2sdk_Kv3GetMemberCount(kv);
}

extern bool (*__s2sdk_Kv3HasMember)(uintptr_t, String*);

static bool Kv3HasMember(uintptr_t kv, String* name) {
	return __s2sdk_Kv3HasMember(kv, name);
}

extern uintptr_t (*__s2sdk_Kv3FindMember)(uintptr_t, String*);

static uintptr_t Kv3FindMember(uintptr_t kv, String* name) {
	return __s2sdk_Kv3FindMember(kv, name);
}

extern uintptr_t (*__s2sdk_Kv3FindOrCreateMember)(uintptr_t, String*);

static uintptr_t Kv3FindOrCreateMember(uintptr_t kv, String* name) {
	return __s2sdk_Kv3FindOrCreateMember(kv, name);
}

extern bool (*__s2sdk_Kv3RemoveMember)(uintptr_t, String*);

static bool Kv3RemoveMember(uintptr_t kv, String* name) {
	return __s2sdk_Kv3RemoveMember(kv, name);
}

extern String (*__s2sdk_Kv3GetMemberName)(uintptr_t, int32_t);

static String Kv3GetMemberName(uintptr_t kv, int32_t index) {
	return __s2sdk_Kv3GetMemberName(kv, index);
}

extern uintptr_t (*__s2sdk_Kv3GetMemberByIndex)(uintptr_t, int32_t);

static uintptr_t Kv3GetMemberByIndex(uintptr_t kv, int32_t index) {
	return __s2sdk_Kv3GetMemberByIndex(kv, index);
}

extern bool (*__s2sdk_Kv3GetMemberBool)(uintptr_t, String*, bool);

static bool Kv3GetMemberBool(uintptr_t kv, String* name, bool defaultValue) {
	return __s2sdk_Kv3GetMemberBool(kv, name, defaultValue);
}

extern int8_t (*__s2sdk_Kv3GetMemberChar)(uintptr_t, String*, int8_t);

static int8_t Kv3GetMemberChar(uintptr_t kv, String* name, int8_t defaultValue) {
	return __s2sdk_Kv3GetMemberChar(kv, name, defaultValue);
}

extern uint32_t (*__s2sdk_Kv3GetMemberUChar32)(uintptr_t, String*, uint32_t);

static uint32_t Kv3GetMemberUChar32(uintptr_t kv, String* name, uint32_t defaultValue) {
	return __s2sdk_Kv3GetMemberUChar32(kv, name, defaultValue);
}

extern int8_t (*__s2sdk_Kv3GetMemberInt8)(uintptr_t, String*, int8_t);

static int8_t Kv3GetMemberInt8(uintptr_t kv, String* name, int8_t defaultValue) {
	return __s2sdk_Kv3GetMemberInt8(kv, name, defaultValue);
}

extern uint8_t (*__s2sdk_Kv3GetMemberUInt8)(uintptr_t, String*, uint8_t);

static uint8_t Kv3GetMemberUInt8(uintptr_t kv, String* name, uint8_t defaultValue) {
	return __s2sdk_Kv3GetMemberUInt8(kv, name, defaultValue);
}

extern int16_t (*__s2sdk_Kv3GetMemberShort)(uintptr_t, String*, int16_t);

static int16_t Kv3GetMemberShort(uintptr_t kv, String* name, int16_t defaultValue) {
	return __s2sdk_Kv3GetMemberShort(kv, name, defaultValue);
}

extern uint16_t (*__s2sdk_Kv3GetMemberUShort)(uintptr_t, String*, uint16_t);

static uint16_t Kv3GetMemberUShort(uintptr_t kv, String* name, uint16_t defaultValue) {
	return __s2sdk_Kv3GetMemberUShort(kv, name, defaultValue);
}

extern int32_t (*__s2sdk_Kv3GetMemberInt)(uintptr_t, String*, int32_t);

static int32_t Kv3GetMemberInt(uintptr_t kv, String* name, int32_t defaultValue) {
	return __s2sdk_Kv3GetMemberInt(kv, name, defaultValue);
}

extern uint32_t (*__s2sdk_Kv3GetMemberUInt)(uintptr_t, String*, uint32_t);

static uint32_t Kv3GetMemberUInt(uintptr_t kv, String* name, uint32_t defaultValue) {
	return __s2sdk_Kv3GetMemberUInt(kv, name, defaultValue);
}

extern int64_t (*__s2sdk_Kv3GetMemberInt64)(uintptr_t, String*, int64_t);

static int64_t Kv3GetMemberInt64(uintptr_t kv, String* name, int64_t defaultValue) {
	return __s2sdk_Kv3GetMemberInt64(kv, name, defaultValue);
}

extern uint64_t (*__s2sdk_Kv3GetMemberUInt64)(uintptr_t, String*, uint64_t);

static uint64_t Kv3GetMemberUInt64(uintptr_t kv, String* name, uint64_t defaultValue) {
	return __s2sdk_Kv3GetMemberUInt64(kv, name, defaultValue);
}

extern float (*__s2sdk_Kv3GetMemberFloat)(uintptr_t, String*, float);

static float Kv3GetMemberFloat(uintptr_t kv, String* name, float defaultValue) {
	return __s2sdk_Kv3GetMemberFloat(kv, name, defaultValue);
}

extern double (*__s2sdk_Kv3GetMemberDouble)(uintptr_t, String*, double);

static double Kv3GetMemberDouble(uintptr_t kv, String* name, double defaultValue) {
	return __s2sdk_Kv3GetMemberDouble(kv, name, defaultValue);
}

extern uintptr_t (*__s2sdk_Kv3GetMemberPointer)(uintptr_t, String*, uintptr_t);

static uintptr_t Kv3GetMemberPointer(uintptr_t kv, String* name, uintptr_t defaultValue) {
	return __s2sdk_Kv3GetMemberPointer(kv, name, defaultValue);
}

extern uint32_t (*__s2sdk_Kv3GetMemberStringToken)(uintptr_t, String*, uint32_t);

static uint32_t Kv3GetMemberStringToken(uintptr_t kv, String* name, uint32_t defaultValue) {
	return __s2sdk_Kv3GetMemberStringToken(kv, name, defaultValue);
}

extern int32_t (*__s2sdk_Kv3GetMemberEHandle)(uintptr_t, String*, int32_t);

static int32_t Kv3GetMemberEHandle(uintptr_t kv, String* name, int32_t defaultValue) {
	return __s2sdk_Kv3GetMemberEHandle(kv, name, defaultValue);
}

extern String (*__s2sdk_Kv3GetMemberString)(uintptr_t, String*, String*);

static String Kv3GetMemberString(uintptr_t kv, String* name, String* defaultValue) {
	return __s2sdk_Kv3GetMemberString(kv, name, defaultValue);
}

extern Vector4 (*__s2sdk_Kv3GetMemberColor)(uintptr_t, String*, Vector4*);

static Vector4 Kv3GetMemberColor(uintptr_t kv, String* name, Vector4* defaultValue) {
	return __s2sdk_Kv3GetMemberColor(kv, name, defaultValue);
}

extern Vector3 (*__s2sdk_Kv3GetMemberVector)(uintptr_t, String*, Vector3*);

static Vector3 Kv3GetMemberVector(uintptr_t kv, String* name, Vector3* defaultValue) {
	return __s2sdk_Kv3GetMemberVector(kv, name, defaultValue);
}

extern Vector2 (*__s2sdk_Kv3GetMemberVector2D)(uintptr_t, String*, Vector2*);

static Vector2 Kv3GetMemberVector2D(uintptr_t kv, String* name, Vector2* defaultValue) {
	return __s2sdk_Kv3GetMemberVector2D(kv, name, defaultValue);
}

extern Vector4 (*__s2sdk_Kv3GetMemberVector4D)(uintptr_t, String*, Vector4*);

static Vector4 Kv3GetMemberVector4D(uintptr_t kv, String* name, Vector4* defaultValue) {
	return __s2sdk_Kv3GetMemberVector4D(kv, name, defaultValue);
}

extern Vector4 (*__s2sdk_Kv3GetMemberQuaternion)(uintptr_t, String*, Vector4*);

static Vector4 Kv3GetMemberQuaternion(uintptr_t kv, String* name, Vector4* defaultValue) {
	return __s2sdk_Kv3GetMemberQuaternion(kv, name, defaultValue);
}

extern Vector3 (*__s2sdk_Kv3GetMemberQAngle)(uintptr_t, String*, Vector3*);

static Vector3 Kv3GetMemberQAngle(uintptr_t kv, String* name, Vector3* defaultValue) {
	return __s2sdk_Kv3GetMemberQAngle(kv, name, defaultValue);
}

extern Matrix4x4 (*__s2sdk_Kv3GetMemberMatrix3x4)(uintptr_t, String*, Matrix4x4*);

static Matrix4x4 Kv3GetMemberMatrix3x4(uintptr_t kv, String* name, Matrix4x4* defaultValue) {
	return __s2sdk_Kv3GetMemberMatrix3x4(kv, name, defaultValue);
}

extern void (*__s2sdk_Kv3SetMemberToNull)(uintptr_t, String*);

static void Kv3SetMemberToNull(uintptr_t kv, String* name) {
	__s2sdk_Kv3SetMemberToNull(kv, name);
}

extern void (*__s2sdk_Kv3SetMemberToEmptyArray)(uintptr_t, String*);

static void Kv3SetMemberToEmptyArray(uintptr_t kv, String* name) {
	__s2sdk_Kv3SetMemberToEmptyArray(kv, name);
}

extern void (*__s2sdk_Kv3SetMemberToEmptyTable)(uintptr_t, String*);

static void Kv3SetMemberToEmptyTable(uintptr_t kv, String* name) {
	__s2sdk_Kv3SetMemberToEmptyTable(kv, name);
}

extern void (*__s2sdk_Kv3SetMemberToBinaryBlob)(uintptr_t, String*, Vector*);

static void Kv3SetMemberToBinaryBlob(uintptr_t kv, String* name, Vector* blob) {
	__s2sdk_Kv3SetMemberToBinaryBlob(kv, name, blob);
}

extern void (*__s2sdk_Kv3SetMemberToBinaryBlobExternal)(uintptr_t, String*, Vector*, bool);

static void Kv3SetMemberToBinaryBlobExternal(uintptr_t kv, String* name, Vector* blob, bool free_mem) {
	__s2sdk_Kv3SetMemberToBinaryBlobExternal(kv, name, blob, free_mem);
}

extern void (*__s2sdk_Kv3SetMemberToCopyOfValue)(uintptr_t, String*, uintptr_t);

static void Kv3SetMemberToCopyOfValue(uintptr_t kv, String* name, uintptr_t other) {
	__s2sdk_Kv3SetMemberToCopyOfValue(kv, name, other);
}

extern void (*__s2sdk_Kv3SetMemberBool)(uintptr_t, String*, bool);

static void Kv3SetMemberBool(uintptr_t kv, String* name, bool value) {
	__s2sdk_Kv3SetMemberBool(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberChar)(uintptr_t, String*, int8_t);

static void Kv3SetMemberChar(uintptr_t kv, String* name, int8_t value) {
	__s2sdk_Kv3SetMemberChar(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberUChar32)(uintptr_t, String*, uint32_t);

static void Kv3SetMemberUChar32(uintptr_t kv, String* name, uint32_t value) {
	__s2sdk_Kv3SetMemberUChar32(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberInt8)(uintptr_t, String*, int8_t);

static void Kv3SetMemberInt8(uintptr_t kv, String* name, int8_t value) {
	__s2sdk_Kv3SetMemberInt8(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberUInt8)(uintptr_t, String*, uint8_t);

static void Kv3SetMemberUInt8(uintptr_t kv, String* name, uint8_t value) {
	__s2sdk_Kv3SetMemberUInt8(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberShort)(uintptr_t, String*, int16_t);

static void Kv3SetMemberShort(uintptr_t kv, String* name, int16_t value) {
	__s2sdk_Kv3SetMemberShort(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberUShort)(uintptr_t, String*, uint16_t);

static void Kv3SetMemberUShort(uintptr_t kv, String* name, uint16_t value) {
	__s2sdk_Kv3SetMemberUShort(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberInt)(uintptr_t, String*, int32_t);

static void Kv3SetMemberInt(uintptr_t kv, String* name, int32_t value) {
	__s2sdk_Kv3SetMemberInt(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberUInt)(uintptr_t, String*, uint32_t);

static void Kv3SetMemberUInt(uintptr_t kv, String* name, uint32_t value) {
	__s2sdk_Kv3SetMemberUInt(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberInt64)(uintptr_t, String*, int64_t);

static void Kv3SetMemberInt64(uintptr_t kv, String* name, int64_t value) {
	__s2sdk_Kv3SetMemberInt64(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberUInt64)(uintptr_t, String*, uint64_t);

static void Kv3SetMemberUInt64(uintptr_t kv, String* name, uint64_t value) {
	__s2sdk_Kv3SetMemberUInt64(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberFloat)(uintptr_t, String*, float);

static void Kv3SetMemberFloat(uintptr_t kv, String* name, float value) {
	__s2sdk_Kv3SetMemberFloat(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberDouble)(uintptr_t, String*, double);

static void Kv3SetMemberDouble(uintptr_t kv, String* name, double value) {
	__s2sdk_Kv3SetMemberDouble(kv, name, value);
}

extern void (*__s2sdk_Kv3SetMemberPointer)(uintptr_t, String*, uintptr_t);

static void Kv3SetMemberPointer(uintptr_t kv, String* name, uintptr_t ptr) {
	__s2sdk_Kv3SetMemberPointer(kv, name, ptr);
}

extern void (*__s2sdk_Kv3SetMemberStringToken)(uintptr_t, String*, uint32_t);

static void Kv3SetMemberStringToken(uintptr_t kv, String* name, uint32_t token) {
	__s2sdk_Kv3SetMemberStringToken(kv, name, token);
}

extern void (*__s2sdk_Kv3SetMemberEHandle)(uintptr_t, String*, int32_t);

static void Kv3SetMemberEHandle(uintptr_t kv, String* name, int32_t ehandle) {
	__s2sdk_Kv3SetMemberEHandle(kv, name, ehandle);
}

extern void (*__s2sdk_Kv3SetMemberString)(uintptr_t, String*, String*, uint8_t);

static void Kv3SetMemberString(uintptr_t kv, String* name, String* str, uint8_t subtype) {
	__s2sdk_Kv3SetMemberString(kv, name, str, subtype);
}

extern void (*__s2sdk_Kv3SetMemberStringExternal)(uintptr_t, String*, String*, uint8_t);

static void Kv3SetMemberStringExternal(uintptr_t kv, String* name, String* str, uint8_t subtype) {
	__s2sdk_Kv3SetMemberStringExternal(kv, name, str, subtype);
}

extern void (*__s2sdk_Kv3SetMemberColor)(uintptr_t, String*, Vector4*);

static void Kv3SetMemberColor(uintptr_t kv, String* name, Vector4* color) {
	__s2sdk_Kv3SetMemberColor(kv, name, color);
}

extern void (*__s2sdk_Kv3SetMemberVector)(uintptr_t, String*, Vector3*);

static void Kv3SetMemberVector(uintptr_t kv, String* name, Vector3* vec) {
	__s2sdk_Kv3SetMemberVector(kv, name, vec);
}

extern void (*__s2sdk_Kv3SetMemberVector2D)(uintptr_t, String*, Vector2*);

static void Kv3SetMemberVector2D(uintptr_t kv, String* name, Vector2* vec2d) {
	__s2sdk_Kv3SetMemberVector2D(kv, name, vec2d);
}

extern void (*__s2sdk_Kv3SetMemberVector4D)(uintptr_t, String*, Vector4*);

static void Kv3SetMemberVector4D(uintptr_t kv, String* name, Vector4* vec4d) {
	__s2sdk_Kv3SetMemberVector4D(kv, name, vec4d);
}

extern void (*__s2sdk_Kv3SetMemberQuaternion)(uintptr_t, String*, Vector4*);

static void Kv3SetMemberQuaternion(uintptr_t kv, String* name, Vector4* quat) {
	__s2sdk_Kv3SetMemberQuaternion(kv, name, quat);
}

extern void (*__s2sdk_Kv3SetMemberQAngle)(uintptr_t, String*, Vector3*);

static void Kv3SetMemberQAngle(uintptr_t kv, String* name, Vector3* ang) {
	__s2sdk_Kv3SetMemberQAngle(kv, name, ang);
}

extern void (*__s2sdk_Kv3SetMemberMatrix3x4)(uintptr_t, String*, Matrix4x4*);

static void Kv3SetMemberMatrix3x4(uintptr_t kv, String* name, Matrix4x4* matrix) {
	__s2sdk_Kv3SetMemberMatrix3x4(kv, name, matrix);
}

extern void (*__s2sdk_Kv3DebugPrint)(uintptr_t);

static void Kv3DebugPrint(uintptr_t kv) {
	__s2sdk_Kv3DebugPrint(kv);
}

extern bool (*__s2sdk_Kv3LoadFromBuffer)(uintptr_t, String*, Vector*, String*, uint32_t);

static bool Kv3LoadFromBuffer(uintptr_t context, String* error_, Vector* input, String* kv_name, uint32_t flags) {
	return __s2sdk_Kv3LoadFromBuffer(context, error_, input, kv_name, flags);
}

extern bool (*__s2sdk_Kv3Load)(uintptr_t, String*, Vector*, String*, uint32_t);

static bool Kv3Load(uintptr_t kv, String* error_, Vector* input, String* kv_name, uint32_t flags) {
	return __s2sdk_Kv3Load(kv, error_, input, kv_name, flags);
}

extern bool (*__s2sdk_Kv3LoadFromText)(uintptr_t, String*, String*, String*, uint32_t);

static bool Kv3LoadFromText(uintptr_t kv, String* error_, String* input, String* kv_name, uint32_t flags) {
	return __s2sdk_Kv3LoadFromText(kv, error_, input, kv_name, flags);
}

extern bool (*__s2sdk_Kv3LoadFromFileToContext)(uintptr_t, String*, String*, String*, uint32_t);

static bool Kv3LoadFromFileToContext(uintptr_t context, String* error_, String* filename, String* path, uint32_t flags) {
	return __s2sdk_Kv3LoadFromFileToContext(context, error_, filename, path, flags);
}

extern bool (*__s2sdk_Kv3LoadFromFile)(uintptr_t, String*, String*, String*, uint32_t);

static bool Kv3LoadFromFile(uintptr_t kv, String* error_, String* filename, String* path, uint32_t flags) {
	return __s2sdk_Kv3LoadFromFile(kv, error_, filename, path, flags);
}

extern bool (*__s2sdk_Kv3LoadFromJSON)(uintptr_t, String*, String*, String*, uint32_t);

static bool Kv3LoadFromJSON(uintptr_t kv, String* error_, String* input, String* kv_name, uint32_t flags) {
	return __s2sdk_Kv3LoadFromJSON(kv, error_, input, kv_name, flags);
}

extern bool (*__s2sdk_Kv3LoadFromJSONFile)(uintptr_t, String*, String*, String*, uint32_t);

static bool Kv3LoadFromJSONFile(uintptr_t kv, String* error_, String* path, String* filename, uint32_t flags) {
	return __s2sdk_Kv3LoadFromJSONFile(kv, error_, path, filename, flags);
}

extern bool (*__s2sdk_Kv3LoadFromKV1File)(uintptr_t, String*, String*, String*, uint8_t, uint32_t);

static bool Kv3LoadFromKV1File(uintptr_t kv, String* error_, String* path, String* filename, uint8_t esc_behavior, uint32_t flags) {
	return __s2sdk_Kv3LoadFromKV1File(kv, error_, path, filename, esc_behavior, flags);
}

extern bool (*__s2sdk_Kv3LoadFromKV1Text)(uintptr_t, String*, String*, uint8_t, String*, bool, uint32_t);

static bool Kv3LoadFromKV1Text(uintptr_t kv, String* error_, String* input, uint8_t esc_behavior, String* kv_name, bool unk, uint32_t flags) {
	return __s2sdk_Kv3LoadFromKV1Text(kv, error_, input, esc_behavior, kv_name, unk, flags);
}

extern bool (*__s2sdk_Kv3LoadFromKV1TextTranslated)(uintptr_t, String*, String*, uint8_t, uintptr_t, int32_t, String*, bool, uint32_t);

static bool Kv3LoadFromKV1TextTranslated(uintptr_t kv, String* error_, String* input, uint8_t esc_behavior, uintptr_t translation, int32_t unk1, String* kv_name, bool unk2, uint32_t flags) {
	return __s2sdk_Kv3LoadFromKV1TextTranslated(kv, error_, input, esc_behavior, translation, unk1, kv_name, unk2, flags);
}

extern bool (*__s2sdk_Kv3LoadFromKV3OrKV1)(uintptr_t, String*, Vector*, String*, uint32_t);

static bool Kv3LoadFromKV3OrKV1(uintptr_t kv, String* error_, Vector* input, String* kv_name, uint32_t flags) {
	return __s2sdk_Kv3LoadFromKV3OrKV1(kv, error_, input, kv_name, flags);
}

extern bool (*__s2sdk_Kv3LoadFromOldSchemaText)(uintptr_t, String*, Vector*, String*, uint32_t);

static bool Kv3LoadFromOldSchemaText(uintptr_t kv, String* error_, Vector* input, String* kv_name, uint32_t flags) {
	return __s2sdk_Kv3LoadFromOldSchemaText(kv, error_, input, kv_name, flags);
}

extern bool (*__s2sdk_Kv3LoadTextNoHeader)(uintptr_t, String*, String*, String*, uint32_t);

static bool Kv3LoadTextNoHeader(uintptr_t kv, String* error_, String* input, String* kv_name, uint32_t flags) {
	return __s2sdk_Kv3LoadTextNoHeader(kv, error_, input, kv_name, flags);
}

extern bool (*__s2sdk_Kv3Save)(uintptr_t, String*, Vector*, uint32_t);

static bool Kv3Save(uintptr_t kv, String* error_, Vector* output, uint32_t flags) {
	return __s2sdk_Kv3Save(kv, error_, output, flags);
}

extern bool (*__s2sdk_Kv3SaveAsJSON)(uintptr_t, String*, Vector*);

static bool Kv3SaveAsJSON(uintptr_t kv, String* error_, Vector* output) {
	return __s2sdk_Kv3SaveAsJSON(kv, error_, output);
}

extern bool (*__s2sdk_Kv3SaveAsJSONString)(uintptr_t, String*, String*);

static bool Kv3SaveAsJSONString(uintptr_t kv, String* error_, String* output) {
	return __s2sdk_Kv3SaveAsJSONString(kv, error_, output);
}

extern bool (*__s2sdk_Kv3SaveAsKV1Text)(uintptr_t, String*, Vector*, uint8_t);

static bool Kv3SaveAsKV1Text(uintptr_t kv, String* error_, Vector* output, uint8_t esc_behavior) {
	return __s2sdk_Kv3SaveAsKV1Text(kv, error_, output, esc_behavior);
}

extern bool (*__s2sdk_Kv3SaveAsKV1TextTranslated)(uintptr_t, String*, Vector*, uint8_t, uintptr_t, int32_t);

static bool Kv3SaveAsKV1TextTranslated(uintptr_t kv, String* error_, Vector* output, uint8_t esc_behavior, uintptr_t translation, int32_t unk) {
	return __s2sdk_Kv3SaveAsKV1TextTranslated(kv, error_, output, esc_behavior, translation, unk);
}

extern bool (*__s2sdk_Kv3SaveTextNoHeaderToBuffer)(uintptr_t, String*, Vector*, uint32_t);

static bool Kv3SaveTextNoHeaderToBuffer(uintptr_t kv, String* error_, Vector* output, uint32_t flags) {
	return __s2sdk_Kv3SaveTextNoHeaderToBuffer(kv, error_, output, flags);
}

extern bool (*__s2sdk_Kv3SaveTextNoHeader)(uintptr_t, String*, String*, uint32_t);

static bool Kv3SaveTextNoHeader(uintptr_t kv, String* error_, String* output, uint32_t flags) {
	return __s2sdk_Kv3SaveTextNoHeader(kv, error_, output, flags);
}

extern bool (*__s2sdk_Kv3SaveTextToString)(uintptr_t, String*, String*, uint32_t);

static bool Kv3SaveTextToString(uintptr_t kv, String* error_, String* output, uint32_t flags) {
	return __s2sdk_Kv3SaveTextToString(kv, error_, output, flags);
}

extern bool (*__s2sdk_Kv3SaveToFile)(uintptr_t, String*, String*, String*, uint32_t);

static bool Kv3SaveToFile(uintptr_t kv, String* error_, String* filename, String* path, uint32_t flags) {
	return __s2sdk_Kv3SaveToFile(kv, error_, filename, path, flags);
}

