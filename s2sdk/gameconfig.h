#pragma once

#include "s2sdk.h"

static void CloseGameConfigFile(uint32_t id) {
	typedef void (*CloseGameConfigFileFn)(uint32_t);
	static CloseGameConfigFileFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CloseGameConfigFile", (void**)&__func);
	__func(id);
}

static uint32_t LoadGameConfigFile(Vector* paths) {
	typedef uint32_t (*LoadGameConfigFileFn)(Vector*);
	static LoadGameConfigFileFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.LoadGameConfigFile", (void**)&__func);
	return __func(paths);
}

static String GetGameConfigPatch(uint32_t id, String* name) {
	typedef String (*GetGameConfigPatchFn)(uint32_t, String*);
	static GetGameConfigPatchFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameConfigPatch", (void**)&__func);
	return __func(id, name);
}

static int32_t GetGameConfigOffset(uint32_t id, String* name) {
	typedef int32_t (*GetGameConfigOffsetFn)(uint32_t, String*);
	static GetGameConfigOffsetFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameConfigOffset", (void**)&__func);
	return __func(id, name);
}

static uintptr_t GetGameConfigAddress(uint32_t id, String* name) {
	typedef uintptr_t (*GetGameConfigAddressFn)(uint32_t, String*);
	static GetGameConfigAddressFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameConfigAddress", (void**)&__func);
	return __func(id, name);
}

static uintptr_t GetGameConfigVTable(uint32_t id, String* name) {
	typedef uintptr_t (*GetGameConfigVTableFn)(uint32_t, String*);
	static GetGameConfigVTableFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameConfigVTable", (void**)&__func);
	return __func(id, name);
}

static uintptr_t GetGameConfigSignature(uint32_t id, String* name) {
	typedef uintptr_t (*GetGameConfigSignatureFn)(uint32_t, String*);
	static GetGameConfigSignatureFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameConfigSignature", (void**)&__func);
	return __func(id, name);
}

