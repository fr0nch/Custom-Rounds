#pragma once

#include "shared.h"

extern uintptr_t (*__s2sdk_Kv1Create)(String*);

static uintptr_t Kv1Create(String* setName) {
	return __s2sdk_Kv1Create(setName);
}

extern void (*__s2sdk_Kv1Destroy)(uintptr_t);

static void Kv1Destroy(uintptr_t kv) {
	__s2sdk_Kv1Destroy(kv);
}

extern String (*__s2sdk_Kv1GetName)(uintptr_t);

static String Kv1GetName(uintptr_t kv) {
	return __s2sdk_Kv1GetName(kv);
}

extern void (*__s2sdk_Kv1SetName)(uintptr_t, String*);

static void Kv1SetName(uintptr_t kv, String* name) {
	__s2sdk_Kv1SetName(kv, name);
}

extern uintptr_t (*__s2sdk_Kv1FindKey)(uintptr_t, String*);

static uintptr_t Kv1FindKey(uintptr_t kv, String* keyName) {
	return __s2sdk_Kv1FindKey(kv, keyName);
}

extern uintptr_t (*__s2sdk_Kv1FindOrCreateKey)(uintptr_t, String*);

static uintptr_t Kv1FindOrCreateKey(uintptr_t kv, String* keyName) {
	return __s2sdk_Kv1FindOrCreateKey(kv, keyName);
}

extern uintptr_t (*__s2sdk_Kv1CreateKey)(uintptr_t, String*);

static uintptr_t Kv1CreateKey(uintptr_t kv, String* keyName) {
	return __s2sdk_Kv1CreateKey(kv, keyName);
}

extern uintptr_t (*__s2sdk_Kv1CreateNewKey)(uintptr_t);

static uintptr_t Kv1CreateNewKey(uintptr_t kv) {
	return __s2sdk_Kv1CreateNewKey(kv);
}

extern void (*__s2sdk_Kv1AddSubKey)(uintptr_t, uintptr_t);

static void Kv1AddSubKey(uintptr_t kv, uintptr_t subKey) {
	__s2sdk_Kv1AddSubKey(kv, subKey);
}

extern uintptr_t (*__s2sdk_Kv1GetFirstSubKey)(uintptr_t);

static uintptr_t Kv1GetFirstSubKey(uintptr_t kv) {
	return __s2sdk_Kv1GetFirstSubKey(kv);
}

extern uintptr_t (*__s2sdk_Kv1GetNextKey)(uintptr_t);

static uintptr_t Kv1GetNextKey(uintptr_t kv) {
	return __s2sdk_Kv1GetNextKey(kv);
}

extern Vector4 (*__s2sdk_Kv1GetColor)(uintptr_t, String*, Vector4*);

static Vector4 Kv1GetColor(uintptr_t kv, String* keyName, Vector4* defaultValue) {
	return __s2sdk_Kv1GetColor(kv, keyName, defaultValue);
}

extern void (*__s2sdk_Kv1SetColor)(uintptr_t, String*, Vector4*);

static void Kv1SetColor(uintptr_t kv, String* keyName, Vector4* value) {
	__s2sdk_Kv1SetColor(kv, keyName, value);
}

extern int32_t (*__s2sdk_Kv1GetInt)(uintptr_t, String*, int32_t);

static int32_t Kv1GetInt(uintptr_t kv, String* keyName, int32_t defaultValue) {
	return __s2sdk_Kv1GetInt(kv, keyName, defaultValue);
}

extern void (*__s2sdk_Kv1SetInt)(uintptr_t, String*, int32_t);

static void Kv1SetInt(uintptr_t kv, String* keyName, int32_t value) {
	__s2sdk_Kv1SetInt(kv, keyName, value);
}

extern float (*__s2sdk_Kv1GetFloat)(uintptr_t, String*, float);

static float Kv1GetFloat(uintptr_t kv, String* keyName, float defaultValue) {
	return __s2sdk_Kv1GetFloat(kv, keyName, defaultValue);
}

extern void (*__s2sdk_Kv1SetFloat)(uintptr_t, String*, float);

static void Kv1SetFloat(uintptr_t kv, String* keyName, float value) {
	__s2sdk_Kv1SetFloat(kv, keyName, value);
}

extern String (*__s2sdk_Kv1GetString)(uintptr_t, String*, String*);

static String Kv1GetString(uintptr_t kv, String* keyName, String* defaultValue) {
	return __s2sdk_Kv1GetString(kv, keyName, defaultValue);
}

extern void (*__s2sdk_Kv1SetString)(uintptr_t, String*, String*);

static void Kv1SetString(uintptr_t kv, String* keyName, String* value) {
	__s2sdk_Kv1SetString(kv, keyName, value);
}

extern uintptr_t (*__s2sdk_Kv1GetPtr)(uintptr_t, String*, uintptr_t);

static uintptr_t Kv1GetPtr(uintptr_t kv, String* keyName, uintptr_t defaultValue) {
	return __s2sdk_Kv1GetPtr(kv, keyName, defaultValue);
}

extern void (*__s2sdk_Kv1SetPtr)(uintptr_t, String*, uintptr_t);

static void Kv1SetPtr(uintptr_t kv, String* keyName, uintptr_t value) {
	__s2sdk_Kv1SetPtr(kv, keyName, value);
}

extern bool (*__s2sdk_Kv1GetBool)(uintptr_t, String*, bool);

static bool Kv1GetBool(uintptr_t kv, String* keyName, bool defaultValue) {
	return __s2sdk_Kv1GetBool(kv, keyName, defaultValue);
}

extern void (*__s2sdk_Kv1SetBool)(uintptr_t, String*, bool);

static void Kv1SetBool(uintptr_t kv, String* keyName, bool value) {
	__s2sdk_Kv1SetBool(kv, keyName, value);
}

extern uintptr_t (*__s2sdk_Kv1MakeCopy)(uintptr_t);

static uintptr_t Kv1MakeCopy(uintptr_t kv) {
	return __s2sdk_Kv1MakeCopy(kv);
}

extern void (*__s2sdk_Kv1Clear)(uintptr_t);

static void Kv1Clear(uintptr_t kv) {
	__s2sdk_Kv1Clear(kv);
}

extern bool (*__s2sdk_Kv1IsEmpty)(uintptr_t, String*);

static bool Kv1IsEmpty(uintptr_t kv, String* keyName) {
	return __s2sdk_Kv1IsEmpty(kv, keyName);
}

