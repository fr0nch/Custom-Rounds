#pragma once

#include "s2sdk.h"

static uintptr_t FindModule(String* name) {
	typedef uintptr_t (*FindModuleFn)(String*);
	static FindModuleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindModule", (void**)&__func);
	return __func(name);
}

static uintptr_t FindInterface(String* name) {
	typedef uintptr_t (*FindInterfaceFn)(String*);
	static FindInterfaceFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.FindInterface", (void**)&__func);
	return __func(name);
}

static uintptr_t QueryInterface(String* module, String* name) {
	typedef uintptr_t (*QueryInterfaceFn)(String*, String*);
	static QueryInterfaceFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.QueryInterface", (void**)&__func);
	return __func(module, name);
}

static String GetGameDirectory() {
	typedef String (*GetGameDirectoryFn)();
	static GetGameDirectoryFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameDirectory", (void**)&__func);
	return __func();
}

static String GetCurrentMap() {
	typedef String (*GetCurrentMapFn)();
	static GetCurrentMapFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetCurrentMap", (void**)&__func);
	return __func();
}

static bool IsMapValid(String* mapname) {
	typedef bool (*IsMapValidFn)(String*);
	static IsMapValidFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsMapValid", (void**)&__func);
	return __func(mapname);
}

static float GetGameTime() {
	typedef float (*GetGameTimeFn)();
	static GetGameTimeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameTime", (void**)&__func);
	return __func();
}

static int32_t GetGameTickCount() {
	typedef int32_t (*GetGameTickCountFn)();
	static GetGameTickCountFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameTickCount", (void**)&__func);
	return __func();
}

static float GetGameFrameTime() {
	typedef float (*GetGameFrameTimeFn)();
	static GetGameFrameTimeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetGameFrameTime", (void**)&__func);
	return __func();
}

static double GetEngineTime() {
	typedef double (*GetEngineTimeFn)();
	static GetEngineTimeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEngineTime", (void**)&__func);
	return __func();
}

static int32_t GetMaxClients() {
	typedef int32_t (*GetMaxClientsFn)();
	static GetMaxClientsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetMaxClients", (void**)&__func);
	return __func();
}

static void Precache(String* resource) {
	typedef void (*PrecacheFn)(String*);
	static PrecacheFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Precache", (void**)&__func);
	__func(resource);
}

static bool IsPrecached(String* resource) {
	typedef bool (*IsPrecachedFn)(String*);
	static IsPrecachedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsPrecached", (void**)&__func);
	return __func(resource);
}

static uintptr_t GetEconItemSystem() {
	typedef uintptr_t (*GetEconItemSystemFn)();
	static GetEconItemSystemFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEconItemSystem", (void**)&__func);
	return __func();
}

static bool IsServerPaused() {
	typedef bool (*IsServerPausedFn)();
	static IsServerPausedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsServerPaused", (void**)&__func);
	return __func();
}

static void QueueTaskForNextFrame(void* callback, Vector* userData) {
	typedef void (*QueueTaskForNextFrameFn)(void*, Vector*);
	static QueueTaskForNextFrameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.QueueTaskForNextFrame", (void**)&__func);
	__func(callback, userData);
}

static void QueueTaskForNextWorldUpdate(void* callback, Vector* userData) {
	typedef void (*QueueTaskForNextWorldUpdateFn)(void*, Vector*);
	static QueueTaskForNextWorldUpdateFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.QueueTaskForNextWorldUpdate", (void**)&__func);
	__func(callback, userData);
}

static float GetSoundDuration(String* name) {
	typedef float (*GetSoundDurationFn)(String*);
	static GetSoundDurationFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetSoundDuration", (void**)&__func);
	return __func(name);
}

static void EmitSound(int32_t entityHandle, String* sound, int32_t pitch, float volume, float delay) {
	typedef void (*EmitSoundFn)(int32_t, String*, int32_t, float, float);
	static EmitSoundFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EmitSound", (void**)&__func);
	__func(entityHandle, sound, pitch, volume, delay);
}

static void StopSound(int32_t entityHandle, String* sound) {
	typedef void (*StopSoundFn)(int32_t, String*);
	static StopSoundFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.StopSound", (void**)&__func);
	__func(entityHandle, sound);
}

static void EmitSoundToClient(int32_t playerSlot, int32_t channel, String* sound, float volume, int32_t soundLevel, int32_t flags, int32_t pitch, Vector3* origin, float soundTime) {
	typedef void (*EmitSoundToClientFn)(int32_t, int32_t, String*, float, int32_t, int32_t, int32_t, Vector3*, float);
	static EmitSoundToClientFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.EmitSoundToClient", (void**)&__func);
	__func(playerSlot, channel, sound, volume, soundLevel, flags, pitch, origin, soundTime);
}

