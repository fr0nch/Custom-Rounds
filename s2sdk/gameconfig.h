#pragma once

#include "shared.h"

extern void (*__s2sdk_CloseGameConfigFile)(uint32_t);

static void CloseGameConfigFile(uint32_t id) {
	__s2sdk_CloseGameConfigFile(id);
}

extern uint32_t (*__s2sdk_LoadGameConfigFile)(Vector*);

static uint32_t LoadGameConfigFile(Vector* paths) {
	return __s2sdk_LoadGameConfigFile(paths);
}

extern String (*__s2sdk_GetGameConfigPatch)(uint32_t, String*);

static String GetGameConfigPatch(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigPatch(id, name);
}

extern int32_t (*__s2sdk_GetGameConfigOffset)(uint32_t, String*);

static int32_t GetGameConfigOffset(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigOffset(id, name);
}

extern uintptr_t (*__s2sdk_GetGameConfigAddress)(uint32_t, String*);

static uintptr_t GetGameConfigAddress(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigAddress(id, name);
}

extern uintptr_t (*__s2sdk_GetGameConfigVTable)(uint32_t, String*);

static uintptr_t GetGameConfigVTable(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigVTable(id, name);
}

extern uintptr_t (*__s2sdk_GetGameConfigSignature)(uint32_t, String*);

static uintptr_t GetGameConfigSignature(uint32_t id, String* name) {
	return __s2sdk_GetGameConfigSignature(id, name);
}

extern String (*__s2sdk_GetGameConfigPatchAll)(String*);

static String GetGameConfigPatchAll(String* name) {
	return __s2sdk_GetGameConfigPatchAll(name);
}

extern int32_t (*__s2sdk_GetGameConfigOffsetAll)(String*);

static int32_t GetGameConfigOffsetAll(String* name) {
	return __s2sdk_GetGameConfigOffsetAll(name);
}

extern uintptr_t (*__s2sdk_GetGameConfigAddressAll)(String*);

static uintptr_t GetGameConfigAddressAll(String* name) {
	return __s2sdk_GetGameConfigAddressAll(name);
}

extern uintptr_t (*__s2sdk_GetGameConfigVTableAll)(String*);

static uintptr_t GetGameConfigVTableAll(String* name) {
	return __s2sdk_GetGameConfigVTableAll(name);
}

extern uintptr_t (*__s2sdk_GetGameConfigSignatureAll)(String*);

static uintptr_t GetGameConfigSignatureAll(String* name) {
	return __s2sdk_GetGameConfigSignatureAll(name);
}

