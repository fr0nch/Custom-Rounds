#pragma once

#include "shared.h"

extern uintptr_t (*__s2sdk_FindModule)(String*);

static uintptr_t FindModule(String* name) {
	return __s2sdk_FindModule(name);
}

extern uintptr_t (*__s2sdk_FindInterface)(String*);

static uintptr_t FindInterface(String* name) {
	return __s2sdk_FindInterface(name);
}

extern uintptr_t (*__s2sdk_QueryInterface)(String*, String*);

static uintptr_t QueryInterface(String* module, String* name) {
	return __s2sdk_QueryInterface(module, name);
}

extern String (*__s2sdk_GetGameDirectory)();

static String GetGameDirectory() {
	return __s2sdk_GetGameDirectory();
}

extern String (*__s2sdk_GetCurrentMap)();

static String GetCurrentMap() {
	return __s2sdk_GetCurrentMap();
}

extern bool (*__s2sdk_IsMapValid)(String*);

static bool IsMapValid(String* mapname) {
	return __s2sdk_IsMapValid(mapname);
}

extern float (*__s2sdk_GetGameTime)();

static float GetGameTime() {
	return __s2sdk_GetGameTime();
}

extern int32_t (*__s2sdk_GetGameTickCount)();

static int32_t GetGameTickCount() {
	return __s2sdk_GetGameTickCount();
}

extern float (*__s2sdk_GetGameFrameTime)();

static float GetGameFrameTime() {
	return __s2sdk_GetGameFrameTime();
}

extern double (*__s2sdk_GetEngineTime)();

static double GetEngineTime() {
	return __s2sdk_GetEngineTime();
}

extern int32_t (*__s2sdk_GetMaxClients)();

static int32_t GetMaxClients() {
	return __s2sdk_GetMaxClients();
}

extern void (*__s2sdk_Precache)(String*);

static void Precache(String* resource) {
	__s2sdk_Precache(resource);
}

extern bool (*__s2sdk_IsPrecached)(String*);

static bool IsPrecached(String* resource) {
	return __s2sdk_IsPrecached(resource);
}

extern uintptr_t (*__s2sdk_GetEconItemSystem)();

static uintptr_t GetEconItemSystem() {
	return __s2sdk_GetEconItemSystem();
}

extern bool (*__s2sdk_IsServerPaused)();

static bool IsServerPaused() {
	return __s2sdk_IsServerPaused();
}

extern void (*__s2sdk_QueueTaskForNextFrame)(void*, Vector*);

static void QueueTaskForNextFrame(void* callback, Vector* userData) {
	__s2sdk_QueueTaskForNextFrame(callback, userData);
}

extern void (*__s2sdk_QueueTaskForNextWorldUpdate)(void*, Vector*);

static void QueueTaskForNextWorldUpdate(void* callback, Vector* userData) {
	__s2sdk_QueueTaskForNextWorldUpdate(callback, userData);
}

extern float (*__s2sdk_GetSoundDuration)(String*);

static float GetSoundDuration(String* name) {
	return __s2sdk_GetSoundDuration(name);
}

extern void (*__s2sdk_EmitSound)(int32_t, String*, int32_t, float, float);

static void EmitSound(int32_t entityHandle, String* sound, int32_t pitch, float volume, float delay) {
	__s2sdk_EmitSound(entityHandle, sound, pitch, volume, delay);
}

extern void (*__s2sdk_StopSound)(int32_t, String*);

static void StopSound(int32_t entityHandle, String* sound) {
	__s2sdk_StopSound(entityHandle, sound);
}

extern void (*__s2sdk_EmitSoundToClient)(int32_t, int32_t, String*, float, int32_t, int32_t, int32_t, Vector3*, float);

static void EmitSoundToClient(int32_t playerSlot, int32_t channel, String* sound, float volume, int32_t soundLevel, int32_t flags, int32_t pitch, Vector3* origin, float soundTime) {
	__s2sdk_EmitSoundToClient(playerSlot, channel, sound, volume, soundLevel, flags, pitch, origin, soundTime);
}

