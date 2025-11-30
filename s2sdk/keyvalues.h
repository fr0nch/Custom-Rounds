#pragma once

#include "s2sdk.h"

static uintptr_t Kv1Create(String* setName) {
	typedef uintptr_t (*Kv1CreateFn)(String*);
	static Kv1CreateFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1Create", (void**)&__func);
	return __func(setName);
}

static void Kv1Destroy(uintptr_t kv) {
	typedef void (*Kv1DestroyFn)(uintptr_t);
	static Kv1DestroyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1Destroy", (void**)&__func);
	__func(kv);
}

static String Kv1GetName(uintptr_t kv) {
	typedef String (*Kv1GetNameFn)(uintptr_t);
	static Kv1GetNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetName", (void**)&__func);
	return __func(kv);
}

static void Kv1SetName(uintptr_t kv, String* name) {
	typedef void (*Kv1SetNameFn)(uintptr_t, String*);
	static Kv1SetNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1SetName", (void**)&__func);
	__func(kv, name);
}

static uintptr_t Kv1FindKey(uintptr_t kv, String* keyName) {
	typedef uintptr_t (*Kv1FindKeyFn)(uintptr_t, String*);
	static Kv1FindKeyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1FindKey", (void**)&__func);
	return __func(kv, keyName);
}

static uintptr_t Kv1FindKeyOrCreate(uintptr_t kv, String* keyName) {
	typedef uintptr_t (*Kv1FindKeyOrCreateFn)(uintptr_t, String*);
	static Kv1FindKeyOrCreateFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1FindKeyOrCreate", (void**)&__func);
	return __func(kv, keyName);
}

static uintptr_t Kv1CreateKey(uintptr_t kv, String* keyName) {
	typedef uintptr_t (*Kv1CreateKeyFn)(uintptr_t, String*);
	static Kv1CreateKeyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1CreateKey", (void**)&__func);
	return __func(kv, keyName);
}

static uintptr_t Kv1CreateNewKey(uintptr_t kv) {
	typedef uintptr_t (*Kv1CreateNewKeyFn)(uintptr_t);
	static Kv1CreateNewKeyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1CreateNewKey", (void**)&__func);
	return __func(kv);
}

static void Kv1AddSubKey(uintptr_t kv, uintptr_t subKey) {
	typedef void (*Kv1AddSubKeyFn)(uintptr_t, uintptr_t);
	static Kv1AddSubKeyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1AddSubKey", (void**)&__func);
	__func(kv, subKey);
}

static uintptr_t Kv1GetFirstSubKey(uintptr_t kv) {
	typedef uintptr_t (*Kv1GetFirstSubKeyFn)(uintptr_t);
	static Kv1GetFirstSubKeyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetFirstSubKey", (void**)&__func);
	return __func(kv);
}

static uintptr_t Kv1GetNextKey(uintptr_t kv) {
	typedef uintptr_t (*Kv1GetNextKeyFn)(uintptr_t);
	static Kv1GetNextKeyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetNextKey", (void**)&__func);
	return __func(kv);
}

static int32_t Kv1GetColor(uintptr_t kv, String* keyName, int32_t defaultValue) {
	typedef int32_t (*Kv1GetColorFn)(uintptr_t, String*, int32_t);
	static Kv1GetColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetColor", (void**)&__func);
	return __func(kv, keyName, defaultValue);
}

static void Kv1SetColor(uintptr_t kv, String* keyName, int32_t value) {
	typedef void (*Kv1SetColorFn)(uintptr_t, String*, int32_t);
	static Kv1SetColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1SetColor", (void**)&__func);
	__func(kv, keyName, value);
}

static int32_t Kv1GetInt(uintptr_t kv, String* keyName, int32_t defaultValue) {
	typedef int32_t (*Kv1GetIntFn)(uintptr_t, String*, int32_t);
	static Kv1GetIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetInt", (void**)&__func);
	return __func(kv, keyName, defaultValue);
}

static void Kv1SetInt(uintptr_t kv, String* keyName, int32_t value) {
	typedef void (*Kv1SetIntFn)(uintptr_t, String*, int32_t);
	static Kv1SetIntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1SetInt", (void**)&__func);
	__func(kv, keyName, value);
}

static float Kv1GetFloat(uintptr_t kv, String* keyName, float defaultValue) {
	typedef float (*Kv1GetFloatFn)(uintptr_t, String*, float);
	static Kv1GetFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetFloat", (void**)&__func);
	return __func(kv, keyName, defaultValue);
}

static void Kv1SetFloat(uintptr_t kv, String* keyName, float value) {
	typedef void (*Kv1SetFloatFn)(uintptr_t, String*, float);
	static Kv1SetFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1SetFloat", (void**)&__func);
	__func(kv, keyName, value);
}

static String Kv1GetString(uintptr_t kv, String* keyName, String* defaultValue) {
	typedef String (*Kv1GetStringFn)(uintptr_t, String*, String*);
	static Kv1GetStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetString", (void**)&__func);
	return __func(kv, keyName, defaultValue);
}

static void Kv1SetString(uintptr_t kv, String* keyName, String* value) {
	typedef void (*Kv1SetStringFn)(uintptr_t, String*, String*);
	static Kv1SetStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1SetString", (void**)&__func);
	__func(kv, keyName, value);
}

static uintptr_t Kv1GetPtr(uintptr_t kv, String* keyName, uintptr_t defaultValue) {
	typedef uintptr_t (*Kv1GetPtrFn)(uintptr_t, String*, uintptr_t);
	static Kv1GetPtrFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetPtr", (void**)&__func);
	return __func(kv, keyName, defaultValue);
}

static void Kv1SetPtr(uintptr_t kv, String* keyName, uintptr_t value) {
	typedef void (*Kv1SetPtrFn)(uintptr_t, String*, uintptr_t);
	static Kv1SetPtrFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1SetPtr", (void**)&__func);
	__func(kv, keyName, value);
}

static bool Kv1GetBool(uintptr_t kv, String* keyName, bool defaultValue) {
	typedef bool (*Kv1GetBoolFn)(uintptr_t, String*, bool);
	static Kv1GetBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1GetBool", (void**)&__func);
	return __func(kv, keyName, defaultValue);
}

static void Kv1SetBool(uintptr_t kv, String* keyName, bool value) {
	typedef void (*Kv1SetBoolFn)(uintptr_t, String*, bool);
	static Kv1SetBoolFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1SetBool", (void**)&__func);
	__func(kv, keyName, value);
}

static uintptr_t Kv1MakeCopy(uintptr_t kv) {
	typedef uintptr_t (*Kv1MakeCopyFn)(uintptr_t);
	static Kv1MakeCopyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1MakeCopy", (void**)&__func);
	return __func(kv);
}

static void Kv1Clear(uintptr_t kv) {
	typedef void (*Kv1ClearFn)(uintptr_t);
	static Kv1ClearFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1Clear", (void**)&__func);
	__func(kv);
}

static bool Kv1IsEmpty(uintptr_t kv, String* keyName) {
	typedef bool (*Kv1IsEmptyFn)(uintptr_t, String*);
	static Kv1IsEmptyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Kv1IsEmpty", (void**)&__func);
	return __func(kv, keyName);
}

