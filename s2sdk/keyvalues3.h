#pragma once

#include "s2sdk.h"

static uintptr_t Kv3Create(int32_t type, int32_t subtype) {
	typedef uintptr_t (*Kv3CreateFn)(int32_t, int32_t);
	static Kv3CreateFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3Create", (void**)&__func);
	return __func(type, subtype);
}

static uintptr_t Kv3CreateWithCluster(int32_t cluster_elem, int32_t type, int32_t subtype) {
	typedef uintptr_t (*Kv3CreateWithClusterFn)(int32_t, int32_t, int32_t);
	static Kv3CreateWithClusterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3CreateWithCluster", (void**)&__func);
	return __func(cluster_elem, type, subtype);
}

static uintptr_t Kv3CreateCopy(uintptr_t other) {
	typedef uintptr_t (*Kv3CreateCopyFn)(uintptr_t);
	static Kv3CreateCopyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3CreateCopy", (void**)&__func);
	return __func(other);
}

static void Kv3Destroy(uintptr_t kv) {
	typedef void (*Kv3DestroyFn)(uintptr_t);
	static Kv3DestroyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3Destroy", (void**)&__func);
	__func(kv);
}

static void Kv3CopyFrom(uintptr_t kv, uintptr_t other) {
	typedef void (*Kv3CopyFromFn)(uintptr_t, uintptr_t);
	static Kv3CopyFromFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3CopyFrom", (void**)&__func);
	__func(kv, other);
}

static void Kv3OverlayKeysFrom(uintptr_t kv, uintptr_t other, bool depth) {
	typedef void (*Kv3OverlayKeysFromFn)(uintptr_t, uintptr_t, bool);
	static Kv3OverlayKeysFromFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3OverlayKeysFrom", (void**)&__func);
	__func(kv, other, depth);
}

static uintptr_t Kv3GetContext(uintptr_t kv) {
	typedef uintptr_t (*Kv3GetContextFn)(uintptr_t);
	static Kv3GetContextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetContext", (void**)&__func);
	return __func(kv);
}

static uintptr_t Kv3GetMetaData(uintptr_t kv, uintptr_t ppCtx) {
	typedef uintptr_t (*Kv3GetMetaDataFn)(uintptr_t, uintptr_t);
	static Kv3GetMetaDataFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMetaData", (void**)&__func);
	return __func(kv, ppCtx);
}

static bool Kv3HasFlag(uintptr_t kv, uint8_t flag) {
	typedef bool (*Kv3HasFlagFn)(uintptr_t, uint8_t);
	static Kv3HasFlagFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3HasFlag", (void**)&__func);
	return __func(kv, flag);
}

static bool Kv3HasAnyFlags(uintptr_t kv) {
	typedef bool (*Kv3HasAnyFlagsFn)(uintptr_t);
	static Kv3HasAnyFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3HasAnyFlags", (void**)&__func);
	return __func(kv);
}

static uint8_t Kv3GetAllFlags(uintptr_t kv) {
	typedef uint8_t (*Kv3GetAllFlagsFn)(uintptr_t);
	static Kv3GetAllFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetAllFlags", (void**)&__func);
	return __func(kv);
}

static void Kv3SetAllFlags(uintptr_t kv, uint8_t flags) {
	typedef void (*Kv3SetAllFlagsFn)(uintptr_t, uint8_t);
	static Kv3SetAllFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetAllFlags", (void**)&__func);
	__func(kv, flags);
}

static void Kv3SetFlag(uintptr_t kv, uint8_t flag, bool state) {
	typedef void (*Kv3SetFlagFn)(uintptr_t, uint8_t, bool);
	static Kv3SetFlagFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetFlag", (void**)&__func);
	__func(kv, flag, state);
}

static uint8_t Kv3GetType(uintptr_t kv) {
	typedef uint8_t (*Kv3GetTypeFn)(uintptr_t);
	static Kv3GetTypeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetType", (void**)&__func);
	return __func(kv);
}

static uint8_t Kv3GetTypeEx(uintptr_t kv) {
	typedef uint8_t (*Kv3GetTypeExFn)(uintptr_t);
	static Kv3GetTypeExFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetTypeEx", (void**)&__func);
	return __func(kv);
}

static uint8_t Kv3GetSubType(uintptr_t kv) {
	typedef uint8_t (*Kv3GetSubTypeFn)(uintptr_t);
	static Kv3GetSubTypeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetSubType", (void**)&__func);
	return __func(kv);
}

static bool Kv3HasInvalidMemberNames(uintptr_t kv) {
	typedef bool (*Kv3HasInvalidMemberNamesFn)(uintptr_t);
	static Kv3HasInvalidMemberNamesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3HasInvalidMemberNames", (void**)&__func);
	return __func(kv);
}

static void Kv3SetHasInvalidMemberNames(uintptr_t kv, bool bValue) {
	typedef void (*Kv3SetHasInvalidMemberNamesFn)(uintptr_t, bool);
	static Kv3SetHasInvalidMemberNamesFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetHasInvalidMemberNames", (void**)&__func);
	__func(kv, bValue);
}

static String Kv3GetTypeAsString(uintptr_t kv) {
	typedef String (*Kv3GetTypeAsStringFn)(uintptr_t);
	static Kv3GetTypeAsStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetTypeAsString", (void**)&__func);
	return __func(kv);
}

static String Kv3GetSubTypeAsString(uintptr_t kv) {
	typedef String (*Kv3GetSubTypeAsStringFn)(uintptr_t);
	static Kv3GetSubTypeAsStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetSubTypeAsString", (void**)&__func);
	return __func(kv);
}

static String Kv3ToString(uintptr_t kv, uint32_t flags) {
	typedef String (*Kv3ToStringFn)(uintptr_t, uint32_t);
	static Kv3ToStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3ToString", (void**)&__func);
	return __func(kv, flags);
}

static bool Kv3IsNull(uintptr_t kv) {
	typedef bool (*Kv3IsNullFn)(uintptr_t);
	static Kv3IsNullFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3IsNull", (void**)&__func);
	return __func(kv);
}

static void Kv3SetToNull(uintptr_t kv) {
	typedef void (*Kv3SetToNullFn)(uintptr_t);
	static Kv3SetToNullFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetToNull", (void**)&__func);
	__func(kv);
}

static bool Kv3IsArray(uintptr_t kv) {
	typedef bool (*Kv3IsArrayFn)(uintptr_t);
	static Kv3IsArrayFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3IsArray", (void**)&__func);
	return __func(kv);
}

static bool Kv3IsKV3Array(uintptr_t kv) {
	typedef bool (*Kv3IsKV3ArrayFn)(uintptr_t);
	static Kv3IsKV3ArrayFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3IsKV3Array", (void**)&__func);
	return __func(kv);
}

static bool Kv3IsTable(uintptr_t kv) {
	typedef bool (*Kv3IsTableFn)(uintptr_t);
	static Kv3IsTableFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3IsTable", (void**)&__func);
	return __func(kv);
}

static bool Kv3IsString(uintptr_t kv) {
	typedef bool (*Kv3IsStringFn)(uintptr_t);
	static Kv3IsStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3IsString", (void**)&__func);
	return __func(kv);
}

static bool Kv3GetBool(uintptr_t kv, bool defaultValue) {
	typedef bool (*Kv3GetBoolFn)(uintptr_t, bool);
	static Kv3GetBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetBool", (void**)&__func);
	return __func(kv, defaultValue);
}

static int8_t Kv3GetChar(uintptr_t kv, int8_t defaultValue) {
	typedef int8_t (*Kv3GetCharFn)(uintptr_t, int8_t);
	static Kv3GetCharFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetChar", (void**)&__func);
	return __func(kv, defaultValue);
}

static uint32_t Kv3GetUChar32(uintptr_t kv, uint32_t defaultValue) {
	typedef uint32_t (*Kv3GetUChar32Fn)(uintptr_t, uint32_t);
	static Kv3GetUChar32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetUChar32", (void**)&__func);
	return __func(kv, defaultValue);
}

static int8_t Kv3GetInt8(uintptr_t kv, int8_t defaultValue) {
	typedef int8_t (*Kv3GetInt8Fn)(uintptr_t, int8_t);
	static Kv3GetInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetInt8", (void**)&__func);
	return __func(kv, defaultValue);
}

static uint8_t Kv3GetUInt8(uintptr_t kv, uint8_t defaultValue) {
	typedef uint8_t (*Kv3GetUInt8Fn)(uintptr_t, uint8_t);
	static Kv3GetUInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetUInt8", (void**)&__func);
	return __func(kv, defaultValue);
}

static int16_t Kv3GetShort(uintptr_t kv, int16_t defaultValue) {
	typedef int16_t (*Kv3GetShortFn)(uintptr_t, int16_t);
	static Kv3GetShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetShort", (void**)&__func);
	return __func(kv, defaultValue);
}

static uint16_t Kv3GetUShort(uintptr_t kv, uint16_t defaultValue) {
	typedef uint16_t (*Kv3GetUShortFn)(uintptr_t, uint16_t);
	static Kv3GetUShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetUShort", (void**)&__func);
	return __func(kv, defaultValue);
}

static int32_t Kv3GetInt(uintptr_t kv, int32_t defaultValue) {
	typedef int32_t (*Kv3GetIntFn)(uintptr_t, int32_t);
	static Kv3GetIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetInt", (void**)&__func);
	return __func(kv, defaultValue);
}

static uint32_t Kv3GetUInt(uintptr_t kv, uint32_t defaultValue) {
	typedef uint32_t (*Kv3GetUIntFn)(uintptr_t, uint32_t);
	static Kv3GetUIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetUInt", (void**)&__func);
	return __func(kv, defaultValue);
}

static int64_t Kv3GetInt64(uintptr_t kv, int64_t defaultValue) {
	typedef int64_t (*Kv3GetInt64Fn)(uintptr_t, int64_t);
	static Kv3GetInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetInt64", (void**)&__func);
	return __func(kv, defaultValue);
}

static uint64_t Kv3GetUInt64(uintptr_t kv, uint64_t defaultValue) {
	typedef uint64_t (*Kv3GetUInt64Fn)(uintptr_t, uint64_t);
	static Kv3GetUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetUInt64", (void**)&__func);
	return __func(kv, defaultValue);
}

static float Kv3GetFloat(uintptr_t kv, float defaultValue) {
	typedef float (*Kv3GetFloatFn)(uintptr_t, float);
	static Kv3GetFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetFloat", (void**)&__func);
	return __func(kv, defaultValue);
}

static double Kv3GetDouble(uintptr_t kv, double defaultValue) {
	typedef double (*Kv3GetDoubleFn)(uintptr_t, double);
	static Kv3GetDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetDouble", (void**)&__func);
	return __func(kv, defaultValue);
}

static void Kv3SetBool(uintptr_t kv, bool value) {
	typedef void (*Kv3SetBoolFn)(uintptr_t, bool);
	static Kv3SetBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetBool", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetChar(uintptr_t kv, int8_t value) {
	typedef void (*Kv3SetCharFn)(uintptr_t, int8_t);
	static Kv3SetCharFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetChar", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetUChar32(uintptr_t kv, uint32_t value) {
	typedef void (*Kv3SetUChar32Fn)(uintptr_t, uint32_t);
	static Kv3SetUChar32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetUChar32", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetInt8(uintptr_t kv, int8_t value) {
	typedef void (*Kv3SetInt8Fn)(uintptr_t, int8_t);
	static Kv3SetInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetInt8", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetUInt8(uintptr_t kv, uint8_t value) {
	typedef void (*Kv3SetUInt8Fn)(uintptr_t, uint8_t);
	static Kv3SetUInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetUInt8", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetShort(uintptr_t kv, int16_t value) {
	typedef void (*Kv3SetShortFn)(uintptr_t, int16_t);
	static Kv3SetShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetShort", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetUShort(uintptr_t kv, uint16_t value) {
	typedef void (*Kv3SetUShortFn)(uintptr_t, uint16_t);
	static Kv3SetUShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetUShort", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetInt(uintptr_t kv, int32_t value) {
	typedef void (*Kv3SetIntFn)(uintptr_t, int32_t);
	static Kv3SetIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetInt", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetUInt(uintptr_t kv, uint32_t value) {
	typedef void (*Kv3SetUIntFn)(uintptr_t, uint32_t);
	static Kv3SetUIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetUInt", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetInt64(uintptr_t kv, int64_t value) {
	typedef void (*Kv3SetInt64Fn)(uintptr_t, int64_t);
	static Kv3SetInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetInt64", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetUInt64(uintptr_t kv, uint64_t value) {
	typedef void (*Kv3SetUInt64Fn)(uintptr_t, uint64_t);
	static Kv3SetUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetUInt64", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetFloat(uintptr_t kv, float value) {
	typedef void (*Kv3SetFloatFn)(uintptr_t, float);
	static Kv3SetFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetFloat", (void**)&__func);
	__func(kv, value);
}

static void Kv3SetDouble(uintptr_t kv, double value) {
	typedef void (*Kv3SetDoubleFn)(uintptr_t, double);
	static Kv3SetDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetDouble", (void**)&__func);
	__func(kv, value);
}

static uintptr_t Kv3GetPointer(uintptr_t kv, uintptr_t defaultValue) {
	typedef uintptr_t (*Kv3GetPointerFn)(uintptr_t, uintptr_t);
	static Kv3GetPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetPointer", (void**)&__func);
	return __func(kv, defaultValue);
}

static void Kv3SetPointer(uintptr_t kv, uintptr_t ptr) {
	typedef void (*Kv3SetPointerFn)(uintptr_t, uintptr_t);
	static Kv3SetPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetPointer", (void**)&__func);
	__func(kv, ptr);
}

static uint32_t Kv3GetStringToken(uintptr_t kv, uint32_t defaultValue) {
	typedef uint32_t (*Kv3GetStringTokenFn)(uintptr_t, uint32_t);
	static Kv3GetStringTokenFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetStringToken", (void**)&__func);
	return __func(kv, defaultValue);
}

static void Kv3SetStringToken(uintptr_t kv, uint32_t token) {
	typedef void (*Kv3SetStringTokenFn)(uintptr_t, uint32_t);
	static Kv3SetStringTokenFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetStringToken", (void**)&__func);
	__func(kv, token);
}

static int32_t Kv3GetEHandle(uintptr_t kv, int32_t defaultValue) {
	typedef int32_t (*Kv3GetEHandleFn)(uintptr_t, int32_t);
	static Kv3GetEHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetEHandle", (void**)&__func);
	return __func(kv, defaultValue);
}

static void Kv3SetEHandle(uintptr_t kv, int32_t ehandle) {
	typedef void (*Kv3SetEHandleFn)(uintptr_t, int32_t);
	static Kv3SetEHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetEHandle", (void**)&__func);
	__func(kv, ehandle);
}

static String Kv3GetString(uintptr_t kv, String* defaultValue) {
	typedef String (*Kv3GetStringFn)(uintptr_t, String*);
	static Kv3GetStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetString", (void**)&__func);
	return __func(kv, defaultValue);
}

static void Kv3SetString(uintptr_t kv, String* str, uint8_t subtype) {
	typedef void (*Kv3SetStringFn)(uintptr_t, String*, uint8_t);
	static Kv3SetStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetString", (void**)&__func);
	__func(kv, str, subtype);
}

static void Kv3SetStringExternal(uintptr_t kv, String* str, uint8_t subtype) {
	typedef void (*Kv3SetStringExternalFn)(uintptr_t, String*, uint8_t);
	static Kv3SetStringExternalFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetStringExternal", (void**)&__func);
	__func(kv, str, subtype);
}

static Vector Kv3GetBinaryBlob(uintptr_t kv) {
	typedef Vector (*Kv3GetBinaryBlobFn)(uintptr_t);
	static Kv3GetBinaryBlobFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetBinaryBlob", (void**)&__func);
	return __func(kv);
}

static int32_t Kv3GetBinaryBlobSize(uintptr_t kv) {
	typedef int32_t (*Kv3GetBinaryBlobSizeFn)(uintptr_t);
	static Kv3GetBinaryBlobSizeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetBinaryBlobSize", (void**)&__func);
	return __func(kv);
}

static void Kv3SetToBinaryBlob(uintptr_t kv, Vector* blob) {
	typedef void (*Kv3SetToBinaryBlobFn)(uintptr_t, Vector*);
	static Kv3SetToBinaryBlobFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetToBinaryBlob", (void**)&__func);
	__func(kv, blob);
}

static void Kv3SetToBinaryBlobExternal(uintptr_t kv, Vector* blob, bool free_mem) {
	typedef void (*Kv3SetToBinaryBlobExternalFn)(uintptr_t, Vector*, bool);
	static Kv3SetToBinaryBlobExternalFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetToBinaryBlobExternal", (void**)&__func);
	__func(kv, blob, free_mem);
}

static int32_t Kv3GetColor(uintptr_t kv, int32_t defaultValue) {
	typedef int32_t (*Kv3GetColorFn)(uintptr_t, int32_t);
	static Kv3GetColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetColor", (void**)&__func);
	return __func(kv, defaultValue);
}

static void Kv3SetColor(uintptr_t kv, int32_t color) {
	typedef void (*Kv3SetColorFn)(uintptr_t, int32_t);
	static Kv3SetColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetColor", (void**)&__func);
	__func(kv, color);
}

static Vector3 Kv3GetVector(uintptr_t kv, Vector3* defaultValue) {
	typedef Vector3 (*Kv3GetVectorFn)(uintptr_t, Vector3*);
	static Kv3GetVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetVector", (void**)&__func);
	return __func(kv, defaultValue);
}

static Vector2 Kv3GetVector2D(uintptr_t kv, Vector2* defaultValue) {
	typedef Vector2 (*Kv3GetVector2DFn)(uintptr_t, Vector2*);
	static Kv3GetVector2DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetVector2D", (void**)&__func);
	return __func(kv, defaultValue);
}

static Vector4 Kv3GetVector4D(uintptr_t kv, Vector4* defaultValue) {
	typedef Vector4 (*Kv3GetVector4DFn)(uintptr_t, Vector4*);
	static Kv3GetVector4DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetVector4D", (void**)&__func);
	return __func(kv, defaultValue);
}

static Vector4 Kv3GetQuaternion(uintptr_t kv, Vector4* defaultValue) {
	typedef Vector4 (*Kv3GetQuaternionFn)(uintptr_t, Vector4*);
	static Kv3GetQuaternionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetQuaternion", (void**)&__func);
	return __func(kv, defaultValue);
}

static Vector3 Kv3GetQAngle(uintptr_t kv, Vector3* defaultValue) {
	typedef Vector3 (*Kv3GetQAngleFn)(uintptr_t, Vector3*);
	static Kv3GetQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetQAngle", (void**)&__func);
	return __func(kv, defaultValue);
}

static Matrix4x4 Kv3GetMatrix3x4(uintptr_t kv, Matrix4x4* defaultValue) {
	typedef Matrix4x4 (*Kv3GetMatrix3x4Fn)(uintptr_t, Matrix4x4*);
	static Kv3GetMatrix3x4Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMatrix3x4", (void**)&__func);
	return __func(kv, defaultValue);
}

static void Kv3SetVector(uintptr_t kv, Vector3* vec) {
	typedef void (*Kv3SetVectorFn)(uintptr_t, Vector3*);
	static Kv3SetVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetVector", (void**)&__func);
	__func(kv, vec);
}

static void Kv3SetVector2D(uintptr_t kv, Vector2* vec2d) {
	typedef void (*Kv3SetVector2DFn)(uintptr_t, Vector2*);
	static Kv3SetVector2DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetVector2D", (void**)&__func);
	__func(kv, vec2d);
}

static void Kv3SetVector4D(uintptr_t kv, Vector4* vec4d) {
	typedef void (*Kv3SetVector4DFn)(uintptr_t, Vector4*);
	static Kv3SetVector4DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetVector4D", (void**)&__func);
	__func(kv, vec4d);
}

static void Kv3SetQuaternion(uintptr_t kv, Vector4* quat) {
	typedef void (*Kv3SetQuaternionFn)(uintptr_t, Vector4*);
	static Kv3SetQuaternionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetQuaternion", (void**)&__func);
	__func(kv, quat);
}

static void Kv3SetQAngle(uintptr_t kv, Vector3* ang) {
	typedef void (*Kv3SetQAngleFn)(uintptr_t, Vector3*);
	static Kv3SetQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetQAngle", (void**)&__func);
	__func(kv, ang);
}

static void Kv3SetMatrix3x4(uintptr_t kv, Matrix4x4* matrix) {
	typedef void (*Kv3SetMatrix3x4Fn)(uintptr_t, Matrix4x4*);
	static Kv3SetMatrix3x4Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMatrix3x4", (void**)&__func);
	__func(kv, matrix);
}

static int32_t Kv3GetArrayElementCount(uintptr_t kv) {
	typedef int32_t (*Kv3GetArrayElementCountFn)(uintptr_t);
	static Kv3GetArrayElementCountFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetArrayElementCount", (void**)&__func);
	return __func(kv);
}

static void Kv3SetArrayElementCount(uintptr_t kv, int32_t count, uint8_t type, uint8_t subtype) {
	typedef void (*Kv3SetArrayElementCountFn)(uintptr_t, int32_t, uint8_t, uint8_t);
	static Kv3SetArrayElementCountFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetArrayElementCount", (void**)&__func);
	__func(kv, count, type, subtype);
}

static void Kv3SetToEmptyKV3Array(uintptr_t kv) {
	typedef void (*Kv3SetToEmptyKV3ArrayFn)(uintptr_t);
	static Kv3SetToEmptyKV3ArrayFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetToEmptyKV3Array", (void**)&__func);
	__func(kv);
}

static uintptr_t Kv3GetArrayElement(uintptr_t kv, int32_t elem) {
	typedef uintptr_t (*Kv3GetArrayElementFn)(uintptr_t, int32_t);
	static Kv3GetArrayElementFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetArrayElement", (void**)&__func);
	return __func(kv, elem);
}

static uintptr_t Kv3ArrayInsertElementBefore(uintptr_t kv, int32_t elem) {
	typedef uintptr_t (*Kv3ArrayInsertElementBeforeFn)(uintptr_t, int32_t);
	static Kv3ArrayInsertElementBeforeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3ArrayInsertElementBefore", (void**)&__func);
	return __func(kv, elem);
}

static uintptr_t Kv3ArrayInsertElementAfter(uintptr_t kv, int32_t elem) {
	typedef uintptr_t (*Kv3ArrayInsertElementAfterFn)(uintptr_t, int32_t);
	static Kv3ArrayInsertElementAfterFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3ArrayInsertElementAfter", (void**)&__func);
	return __func(kv, elem);
}

static uintptr_t Kv3ArrayAddElementToTail(uintptr_t kv) {
	typedef uintptr_t (*Kv3ArrayAddElementToTailFn)(uintptr_t);
	static Kv3ArrayAddElementToTailFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3ArrayAddElementToTail", (void**)&__func);
	return __func(kv);
}

static void Kv3ArraySwapItems(uintptr_t kv, int32_t idx1, int32_t idx2) {
	typedef void (*Kv3ArraySwapItemsFn)(uintptr_t, int32_t, int32_t);
	static Kv3ArraySwapItemsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3ArraySwapItems", (void**)&__func);
	__func(kv, idx1, idx2);
}

static void Kv3ArrayRemoveElement(uintptr_t kv, int32_t elem) {
	typedef void (*Kv3ArrayRemoveElementFn)(uintptr_t, int32_t);
	static Kv3ArrayRemoveElementFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3ArrayRemoveElement", (void**)&__func);
	__func(kv, elem);
}

static void Kv3SetToEmptyTable(uintptr_t kv) {
	typedef void (*Kv3SetToEmptyTableFn)(uintptr_t);
	static Kv3SetToEmptyTableFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetToEmptyTable", (void**)&__func);
	__func(kv);
}

static int32_t Kv3GetMemberCount(uintptr_t kv) {
	typedef int32_t (*Kv3GetMemberCountFn)(uintptr_t);
	static Kv3GetMemberCountFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberCount", (void**)&__func);
	return __func(kv);
}

static bool Kv3HasMember(uintptr_t kv, String* name) {
	typedef bool (*Kv3HasMemberFn)(uintptr_t, String*);
	static Kv3HasMemberFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3HasMember", (void**)&__func);
	return __func(kv, name);
}

static uintptr_t Kv3FindMember(uintptr_t kv, String* name) {
	typedef uintptr_t (*Kv3FindMemberFn)(uintptr_t, String*);
	static Kv3FindMemberFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3FindMember", (void**)&__func);
	return __func(kv, name);
}

static uintptr_t Kv3FindOrCreateMember(uintptr_t kv, String* name) {
	typedef uintptr_t (*Kv3FindOrCreateMemberFn)(uintptr_t, String*);
	static Kv3FindOrCreateMemberFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3FindOrCreateMember", (void**)&__func);
	return __func(kv, name);
}

static bool Kv3RemoveMember(uintptr_t kv, String* name) {
	typedef bool (*Kv3RemoveMemberFn)(uintptr_t, String*);
	static Kv3RemoveMemberFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3RemoveMember", (void**)&__func);
	return __func(kv, name);
}

static String Kv3GetMemberName(uintptr_t kv, int32_t index) {
	typedef String (*Kv3GetMemberNameFn)(uintptr_t, int32_t);
	static Kv3GetMemberNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberName", (void**)&__func);
	return __func(kv, index);
}

static uintptr_t Kv3GetMemberByIndex(uintptr_t kv, int32_t index) {
	typedef uintptr_t (*Kv3GetMemberByIndexFn)(uintptr_t, int32_t);
	static Kv3GetMemberByIndexFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberByIndex", (void**)&__func);
	return __func(kv, index);
}

static bool Kv3GetMemberBool(uintptr_t kv, String* name, bool defaultValue) {
	typedef bool (*Kv3GetMemberBoolFn)(uintptr_t, String*, bool);
	static Kv3GetMemberBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberBool", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static int8_t Kv3GetMemberChar(uintptr_t kv, String* name, int8_t defaultValue) {
	typedef int8_t (*Kv3GetMemberCharFn)(uintptr_t, String*, int8_t);
	static Kv3GetMemberCharFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberChar", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static uint32_t Kv3GetMemberUChar32(uintptr_t kv, String* name, uint32_t defaultValue) {
	typedef uint32_t (*Kv3GetMemberUChar32Fn)(uintptr_t, String*, uint32_t);
	static Kv3GetMemberUChar32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberUChar32", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static int8_t Kv3GetMemberInt8(uintptr_t kv, String* name, int8_t defaultValue) {
	typedef int8_t (*Kv3GetMemberInt8Fn)(uintptr_t, String*, int8_t);
	static Kv3GetMemberInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberInt8", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static uint8_t Kv3GetMemberUInt8(uintptr_t kv, String* name, uint8_t defaultValue) {
	typedef uint8_t (*Kv3GetMemberUInt8Fn)(uintptr_t, String*, uint8_t);
	static Kv3GetMemberUInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberUInt8", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static int16_t Kv3GetMemberShort(uintptr_t kv, String* name, int16_t defaultValue) {
	typedef int16_t (*Kv3GetMemberShortFn)(uintptr_t, String*, int16_t);
	static Kv3GetMemberShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberShort", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static uint16_t Kv3GetMemberUShort(uintptr_t kv, String* name, uint16_t defaultValue) {
	typedef uint16_t (*Kv3GetMemberUShortFn)(uintptr_t, String*, uint16_t);
	static Kv3GetMemberUShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberUShort", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static int32_t Kv3GetMemberInt(uintptr_t kv, String* name, int32_t defaultValue) {
	typedef int32_t (*Kv3GetMemberIntFn)(uintptr_t, String*, int32_t);
	static Kv3GetMemberIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberInt", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static uint32_t Kv3GetMemberUInt(uintptr_t kv, String* name, uint32_t defaultValue) {
	typedef uint32_t (*Kv3GetMemberUIntFn)(uintptr_t, String*, uint32_t);
	static Kv3GetMemberUIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberUInt", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static int64_t Kv3GetMemberInt64(uintptr_t kv, String* name, int64_t defaultValue) {
	typedef int64_t (*Kv3GetMemberInt64Fn)(uintptr_t, String*, int64_t);
	static Kv3GetMemberInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberInt64", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static uint64_t Kv3GetMemberUInt64(uintptr_t kv, String* name, uint64_t defaultValue) {
	typedef uint64_t (*Kv3GetMemberUInt64Fn)(uintptr_t, String*, uint64_t);
	static Kv3GetMemberUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberUInt64", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static float Kv3GetMemberFloat(uintptr_t kv, String* name, float defaultValue) {
	typedef float (*Kv3GetMemberFloatFn)(uintptr_t, String*, float);
	static Kv3GetMemberFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberFloat", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static double Kv3GetMemberDouble(uintptr_t kv, String* name, double defaultValue) {
	typedef double (*Kv3GetMemberDoubleFn)(uintptr_t, String*, double);
	static Kv3GetMemberDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberDouble", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static uintptr_t Kv3GetMemberPointer(uintptr_t kv, String* name, uintptr_t defaultValue) {
	typedef uintptr_t (*Kv3GetMemberPointerFn)(uintptr_t, String*, uintptr_t);
	static Kv3GetMemberPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberPointer", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static uint32_t Kv3GetMemberStringToken(uintptr_t kv, String* name, uint32_t defaultValue) {
	typedef uint32_t (*Kv3GetMemberStringTokenFn)(uintptr_t, String*, uint32_t);
	static Kv3GetMemberStringTokenFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberStringToken", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static int32_t Kv3GetMemberEHandle(uintptr_t kv, String* name, int32_t defaultValue) {
	typedef int32_t (*Kv3GetMemberEHandleFn)(uintptr_t, String*, int32_t);
	static Kv3GetMemberEHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberEHandle", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static String Kv3GetMemberString(uintptr_t kv, String* name, String* defaultValue) {
	typedef String (*Kv3GetMemberStringFn)(uintptr_t, String*, String*);
	static Kv3GetMemberStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberString", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static int32_t Kv3GetMemberColor(uintptr_t kv, String* name, int32_t defaultValue) {
	typedef int32_t (*Kv3GetMemberColorFn)(uintptr_t, String*, int32_t);
	static Kv3GetMemberColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberColor", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static Vector3 Kv3GetMemberVector(uintptr_t kv, String* name, Vector3* defaultValue) {
	typedef Vector3 (*Kv3GetMemberVectorFn)(uintptr_t, String*, Vector3*);
	static Kv3GetMemberVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberVector", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static Vector2 Kv3GetMemberVector2D(uintptr_t kv, String* name, Vector2* defaultValue) {
	typedef Vector2 (*Kv3GetMemberVector2DFn)(uintptr_t, String*, Vector2*);
	static Kv3GetMemberVector2DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberVector2D", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static Vector4 Kv3GetMemberVector4D(uintptr_t kv, String* name, Vector4* defaultValue) {
	typedef Vector4 (*Kv3GetMemberVector4DFn)(uintptr_t, String*, Vector4*);
	static Kv3GetMemberVector4DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberVector4D", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static Vector4 Kv3GetMemberQuaternion(uintptr_t kv, String* name, Vector4* defaultValue) {
	typedef Vector4 (*Kv3GetMemberQuaternionFn)(uintptr_t, String*, Vector4*);
	static Kv3GetMemberQuaternionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberQuaternion", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static Vector3 Kv3GetMemberQAngle(uintptr_t kv, String* name, Vector3* defaultValue) {
	typedef Vector3 (*Kv3GetMemberQAngleFn)(uintptr_t, String*, Vector3*);
	static Kv3GetMemberQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberQAngle", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static Matrix4x4 Kv3GetMemberMatrix3x4(uintptr_t kv, String* name, Matrix4x4* defaultValue) {
	typedef Matrix4x4 (*Kv3GetMemberMatrix3x4Fn)(uintptr_t, String*, Matrix4x4*);
	static Kv3GetMemberMatrix3x4Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3GetMemberMatrix3x4", (void**)&__func);
	return __func(kv, name, defaultValue);
}

static void Kv3SetMemberToNull(uintptr_t kv, String* name) {
	typedef void (*Kv3SetMemberToNullFn)(uintptr_t, String*);
	static Kv3SetMemberToNullFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberToNull", (void**)&__func);
	__func(kv, name);
}

static void Kv3SetMemberToEmptyArray(uintptr_t kv, String* name) {
	typedef void (*Kv3SetMemberToEmptyArrayFn)(uintptr_t, String*);
	static Kv3SetMemberToEmptyArrayFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberToEmptyArray", (void**)&__func);
	__func(kv, name);
}

static void Kv3SetMemberToEmptyTable(uintptr_t kv, String* name) {
	typedef void (*Kv3SetMemberToEmptyTableFn)(uintptr_t, String*);
	static Kv3SetMemberToEmptyTableFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberToEmptyTable", (void**)&__func);
	__func(kv, name);
}

static void Kv3SetMemberToBinaryBlob(uintptr_t kv, String* name, Vector* blob) {
	typedef void (*Kv3SetMemberToBinaryBlobFn)(uintptr_t, String*, Vector*);
	static Kv3SetMemberToBinaryBlobFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberToBinaryBlob", (void**)&__func);
	__func(kv, name, blob);
}

static void Kv3SetMemberToBinaryBlobExternal(uintptr_t kv, String* name, Vector* blob, bool free_mem) {
	typedef void (*Kv3SetMemberToBinaryBlobExternalFn)(uintptr_t, String*, Vector*, bool);
	static Kv3SetMemberToBinaryBlobExternalFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberToBinaryBlobExternal", (void**)&__func);
	__func(kv, name, blob, free_mem);
}

static void Kv3SetMemberToCopyOfValue(uintptr_t kv, String* name, uintptr_t other) {
	typedef void (*Kv3SetMemberToCopyOfValueFn)(uintptr_t, String*, uintptr_t);
	static Kv3SetMemberToCopyOfValueFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberToCopyOfValue", (void**)&__func);
	__func(kv, name, other);
}

static void Kv3SetMemberBool(uintptr_t kv, String* name, bool value) {
	typedef void (*Kv3SetMemberBoolFn)(uintptr_t, String*, bool);
	static Kv3SetMemberBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberBool", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberChar(uintptr_t kv, String* name, int8_t value) {
	typedef void (*Kv3SetMemberCharFn)(uintptr_t, String*, int8_t);
	static Kv3SetMemberCharFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberChar", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberUChar32(uintptr_t kv, String* name, uint32_t value) {
	typedef void (*Kv3SetMemberUChar32Fn)(uintptr_t, String*, uint32_t);
	static Kv3SetMemberUChar32Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberUChar32", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberInt8(uintptr_t kv, String* name, int8_t value) {
	typedef void (*Kv3SetMemberInt8Fn)(uintptr_t, String*, int8_t);
	static Kv3SetMemberInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberInt8", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberUInt8(uintptr_t kv, String* name, uint8_t value) {
	typedef void (*Kv3SetMemberUInt8Fn)(uintptr_t, String*, uint8_t);
	static Kv3SetMemberUInt8Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberUInt8", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberShort(uintptr_t kv, String* name, int16_t value) {
	typedef void (*Kv3SetMemberShortFn)(uintptr_t, String*, int16_t);
	static Kv3SetMemberShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberShort", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberUShort(uintptr_t kv, String* name, uint16_t value) {
	typedef void (*Kv3SetMemberUShortFn)(uintptr_t, String*, uint16_t);
	static Kv3SetMemberUShortFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberUShort", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberInt(uintptr_t kv, String* name, int32_t value) {
	typedef void (*Kv3SetMemberIntFn)(uintptr_t, String*, int32_t);
	static Kv3SetMemberIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberInt", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberUInt(uintptr_t kv, String* name, uint32_t value) {
	typedef void (*Kv3SetMemberUIntFn)(uintptr_t, String*, uint32_t);
	static Kv3SetMemberUIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberUInt", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberInt64(uintptr_t kv, String* name, int64_t value) {
	typedef void (*Kv3SetMemberInt64Fn)(uintptr_t, String*, int64_t);
	static Kv3SetMemberInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberInt64", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberUInt64(uintptr_t kv, String* name, uint64_t value) {
	typedef void (*Kv3SetMemberUInt64Fn)(uintptr_t, String*, uint64_t);
	static Kv3SetMemberUInt64Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberUInt64", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberFloat(uintptr_t kv, String* name, float value) {
	typedef void (*Kv3SetMemberFloatFn)(uintptr_t, String*, float);
	static Kv3SetMemberFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberFloat", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberDouble(uintptr_t kv, String* name, double value) {
	typedef void (*Kv3SetMemberDoubleFn)(uintptr_t, String*, double);
	static Kv3SetMemberDoubleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberDouble", (void**)&__func);
	__func(kv, name, value);
}

static void Kv3SetMemberPointer(uintptr_t kv, String* name, uintptr_t ptr) {
	typedef void (*Kv3SetMemberPointerFn)(uintptr_t, String*, uintptr_t);
	static Kv3SetMemberPointerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberPointer", (void**)&__func);
	__func(kv, name, ptr);
}

static void Kv3SetMemberStringToken(uintptr_t kv, String* name, uint32_t token) {
	typedef void (*Kv3SetMemberStringTokenFn)(uintptr_t, String*, uint32_t);
	static Kv3SetMemberStringTokenFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberStringToken", (void**)&__func);
	__func(kv, name, token);
}

static void Kv3SetMemberEHandle(uintptr_t kv, String* name, int32_t ehandle) {
	typedef void (*Kv3SetMemberEHandleFn)(uintptr_t, String*, int32_t);
	static Kv3SetMemberEHandleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberEHandle", (void**)&__func);
	__func(kv, name, ehandle);
}

static void Kv3SetMemberString(uintptr_t kv, String* name, String* str, uint8_t subtype) {
	typedef void (*Kv3SetMemberStringFn)(uintptr_t, String*, String*, uint8_t);
	static Kv3SetMemberStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberString", (void**)&__func);
	__func(kv, name, str, subtype);
}

static void Kv3SetMemberStringExternal(uintptr_t kv, String* name, String* str, uint8_t subtype) {
	typedef void (*Kv3SetMemberStringExternalFn)(uintptr_t, String*, String*, uint8_t);
	static Kv3SetMemberStringExternalFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberStringExternal", (void**)&__func);
	__func(kv, name, str, subtype);
}

static void Kv3SetMemberColor(uintptr_t kv, String* name, int32_t color) {
	typedef void (*Kv3SetMemberColorFn)(uintptr_t, String*, int32_t);
	static Kv3SetMemberColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberColor", (void**)&__func);
	__func(kv, name, color);
}

static void Kv3SetMemberVector(uintptr_t kv, String* name, Vector3* vec) {
	typedef void (*Kv3SetMemberVectorFn)(uintptr_t, String*, Vector3*);
	static Kv3SetMemberVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberVector", (void**)&__func);
	__func(kv, name, vec);
}

static void Kv3SetMemberVector2D(uintptr_t kv, String* name, Vector2* vec2d) {
	typedef void (*Kv3SetMemberVector2DFn)(uintptr_t, String*, Vector2*);
	static Kv3SetMemberVector2DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberVector2D", (void**)&__func);
	__func(kv, name, vec2d);
}

static void Kv3SetMemberVector4D(uintptr_t kv, String* name, Vector4* vec4d) {
	typedef void (*Kv3SetMemberVector4DFn)(uintptr_t, String*, Vector4*);
	static Kv3SetMemberVector4DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberVector4D", (void**)&__func);
	__func(kv, name, vec4d);
}

static void Kv3SetMemberQuaternion(uintptr_t kv, String* name, Vector4* quat) {
	typedef void (*Kv3SetMemberQuaternionFn)(uintptr_t, String*, Vector4*);
	static Kv3SetMemberQuaternionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberQuaternion", (void**)&__func);
	__func(kv, name, quat);
}

static void Kv3SetMemberQAngle(uintptr_t kv, String* name, Vector3* ang) {
	typedef void (*Kv3SetMemberQAngleFn)(uintptr_t, String*, Vector3*);
	static Kv3SetMemberQAngleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberQAngle", (void**)&__func);
	__func(kv, name, ang);
}

static void Kv3SetMemberMatrix3x4(uintptr_t kv, String* name, Matrix4x4* matrix) {
	typedef void (*Kv3SetMemberMatrix3x4Fn)(uintptr_t, String*, Matrix4x4*);
	static Kv3SetMemberMatrix3x4Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SetMemberMatrix3x4", (void**)&__func);
	__func(kv, name, matrix);
}

static void Kv3DebugPrint(uintptr_t kv) {
	typedef void (*Kv3DebugPrintFn)(uintptr_t);
	static Kv3DebugPrintFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3DebugPrint", (void**)&__func);
	__func(kv);
}

static bool Kv3LoadFromBuffer(uintptr_t context, String* error, Vector* input, String* kv_name, uint32_t flags) {
	typedef bool (*Kv3LoadFromBufferFn)(uintptr_t, String*, Vector*, String*, uint32_t);
	static Kv3LoadFromBufferFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromBuffer", (void**)&__func);
	return __func(context, error, input, kv_name, flags);
}

static bool Kv3Load(uintptr_t kv, String* error, Vector* input, String* kv_name, uint32_t flags) {
	typedef bool (*Kv3LoadFn)(uintptr_t, String*, Vector*, String*, uint32_t);
	static Kv3LoadFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3Load", (void**)&__func);
	return __func(kv, error, input, kv_name, flags);
}

static bool Kv3LoadFromText(uintptr_t kv, String* error, String* input, String* kv_name, uint32_t flags) {
	typedef bool (*Kv3LoadFromTextFn)(uintptr_t, String*, String*, String*, uint32_t);
	static Kv3LoadFromTextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromText", (void**)&__func);
	return __func(kv, error, input, kv_name, flags);
}

static bool Kv3LoadFromFileToContext(uintptr_t context, String* error, String* filename, String* path, uint32_t flags) {
	typedef bool (*Kv3LoadFromFileToContextFn)(uintptr_t, String*, String*, String*, uint32_t);
	static Kv3LoadFromFileToContextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromFileToContext", (void**)&__func);
	return __func(context, error, filename, path, flags);
}

static bool Kv3LoadFromFile(uintptr_t kv, String* error, String* filename, String* path, uint32_t flags) {
	typedef bool (*Kv3LoadFromFileFn)(uintptr_t, String*, String*, String*, uint32_t);
	static Kv3LoadFromFileFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromFile", (void**)&__func);
	return __func(kv, error, filename, path, flags);
}

static bool Kv3LoadFromJSON(uintptr_t kv, String* error, String* input, String* kv_name, uint32_t flags) {
	typedef bool (*Kv3LoadFromJSONFn)(uintptr_t, String*, String*, String*, uint32_t);
	static Kv3LoadFromJSONFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromJSON", (void**)&__func);
	return __func(kv, error, input, kv_name, flags);
}

static bool Kv3LoadFromJSONFile(uintptr_t kv, String* error, String* path, String* filename, uint32_t flags) {
	typedef bool (*Kv3LoadFromJSONFileFn)(uintptr_t, String*, String*, String*, uint32_t);
	static Kv3LoadFromJSONFileFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromJSONFile", (void**)&__func);
	return __func(kv, error, path, filename, flags);
}

static bool Kv3LoadFromKV1File(uintptr_t kv, String* error, String* path, String* filename, uint8_t esc_behavior, uint32_t flags) {
	typedef bool (*Kv3LoadFromKV1FileFn)(uintptr_t, String*, String*, String*, uint8_t, uint32_t);
	static Kv3LoadFromKV1FileFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromKV1File", (void**)&__func);
	return __func(kv, error, path, filename, esc_behavior, flags);
}

static bool Kv3LoadFromKV1Text(uintptr_t kv, String* error, String* input, uint8_t esc_behavior, String* kv_name, bool unk, uint32_t flags) {
	typedef bool (*Kv3LoadFromKV1TextFn)(uintptr_t, String*, String*, uint8_t, String*, bool, uint32_t);
	static Kv3LoadFromKV1TextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromKV1Text", (void**)&__func);
	return __func(kv, error, input, esc_behavior, kv_name, unk, flags);
}

static bool Kv3LoadFromKV1TextTranslated(uintptr_t kv, String* error, String* input, uint8_t esc_behavior, uintptr_t translation, int32_t unk1, String* kv_name, bool unk2, uint32_t flags) {
	typedef bool (*Kv3LoadFromKV1TextTranslatedFn)(uintptr_t, String*, String*, uint8_t, uintptr_t, int32_t, String*, bool, uint32_t);
	static Kv3LoadFromKV1TextTranslatedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromKV1TextTranslated", (void**)&__func);
	return __func(kv, error, input, esc_behavior, translation, unk1, kv_name, unk2, flags);
}

static bool Kv3LoadFromKV3OrKV1(uintptr_t kv, String* error, Vector* input, String* kv_name, uint32_t flags) {
	typedef bool (*Kv3LoadFromKV3OrKV1Fn)(uintptr_t, String*, Vector*, String*, uint32_t);
	static Kv3LoadFromKV3OrKV1Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromKV3OrKV1", (void**)&__func);
	return __func(kv, error, input, kv_name, flags);
}

static bool Kv3LoadFromOldSchemaText(uintptr_t kv, String* error, Vector* input, String* kv_name, uint32_t flags) {
	typedef bool (*Kv3LoadFromOldSchemaTextFn)(uintptr_t, String*, Vector*, String*, uint32_t);
	static Kv3LoadFromOldSchemaTextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadFromOldSchemaText", (void**)&__func);
	return __func(kv, error, input, kv_name, flags);
}

static bool Kv3LoadTextNoHeader(uintptr_t kv, String* error, String* input, String* kv_name, uint32_t flags) {
	typedef bool (*Kv3LoadTextNoHeaderFn)(uintptr_t, String*, String*, String*, uint32_t);
	static Kv3LoadTextNoHeaderFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3LoadTextNoHeader", (void**)&__func);
	return __func(kv, error, input, kv_name, flags);
}

static bool Kv3Save(uintptr_t kv, String* error, Vector* output, uint32_t flags) {
	typedef bool (*Kv3SaveFn)(uintptr_t, String*, Vector*, uint32_t);
	static Kv3SaveFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3Save", (void**)&__func);
	return __func(kv, error, output, flags);
}

static bool Kv3SaveAsJSON(uintptr_t kv, String* error, Vector* output) {
	typedef bool (*Kv3SaveAsJSONFn)(uintptr_t, String*, Vector*);
	static Kv3SaveAsJSONFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveAsJSON", (void**)&__func);
	return __func(kv, error, output);
}

static bool Kv3SaveAsJSONString(uintptr_t kv, String* error, String* output) {
	typedef bool (*Kv3SaveAsJSONStringFn)(uintptr_t, String*, String*);
	static Kv3SaveAsJSONStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveAsJSONString", (void**)&__func);
	return __func(kv, error, output);
}

static bool Kv3SaveAsKV1Text(uintptr_t kv, String* error, Vector* output, uint8_t esc_behavior) {
	typedef bool (*Kv3SaveAsKV1TextFn)(uintptr_t, String*, Vector*, uint8_t);
	static Kv3SaveAsKV1TextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveAsKV1Text", (void**)&__func);
	return __func(kv, error, output, esc_behavior);
}

static bool Kv3SaveAsKV1TextTranslated(uintptr_t kv, String* error, Vector* output, uint8_t esc_behavior, uintptr_t translation, int32_t unk) {
	typedef bool (*Kv3SaveAsKV1TextTranslatedFn)(uintptr_t, String*, Vector*, uint8_t, uintptr_t, int32_t);
	static Kv3SaveAsKV1TextTranslatedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveAsKV1TextTranslated", (void**)&__func);
	return __func(kv, error, output, esc_behavior, translation, unk);
}

static bool Kv3SaveTextNoHeaderToBuffer(uintptr_t kv, String* error, Vector* output, uint32_t flags) {
	typedef bool (*Kv3SaveTextNoHeaderToBufferFn)(uintptr_t, String*, Vector*, uint32_t);
	static Kv3SaveTextNoHeaderToBufferFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveTextNoHeaderToBuffer", (void**)&__func);
	return __func(kv, error, output, flags);
}

static bool Kv3SaveTextNoHeader(uintptr_t kv, String* error, String* output, uint32_t flags) {
	typedef bool (*Kv3SaveTextNoHeaderFn)(uintptr_t, String*, String*, uint32_t);
	static Kv3SaveTextNoHeaderFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveTextNoHeader", (void**)&__func);
	return __func(kv, error, output, flags);
}

static bool Kv3SaveTextToString(uintptr_t kv, String* error, String* output, uint32_t flags) {
	typedef bool (*Kv3SaveTextToStringFn)(uintptr_t, String*, String*, uint32_t);
	static Kv3SaveTextToStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveTextToString", (void**)&__func);
	return __func(kv, error, output, flags);
}

static bool Kv3SaveToFile(uintptr_t kv, String* error, String* filename, String* path, uint32_t flags) {
	typedef bool (*Kv3SaveToFileFn)(uintptr_t, String*, String*, String*, uint32_t);
	static Kv3SaveToFileFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv3SaveToFile", (void**)&__func);
	return __func(kv, error, filename, path, flags);
}

