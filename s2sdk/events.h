#pragma once

#include "shared.h"

extern int32_t (*__s2sdk_HookEvent)(String*, void*, uint8_t);

static int32_t HookEvent(String* name, void* callback, uint8_t type_) {
	return __s2sdk_HookEvent(name, callback, type_);
}

extern int32_t (*__s2sdk_UnhookEvent)(String*, void*, uint8_t);

static int32_t UnhookEvent(String* name, void* callback, uint8_t type_) {
	return __s2sdk_UnhookEvent(name, callback, type_);
}

extern uintptr_t (*__s2sdk_CreateEvent)(String*, bool);

static uintptr_t CreateEvent(String* name, bool force) {
	return __s2sdk_CreateEvent(name, force);
}

extern void (*__s2sdk_FireEvent)(uintptr_t, bool);

static void FireEvent(uintptr_t event, bool dontBroadcast) {
	__s2sdk_FireEvent(event, dontBroadcast);
}

extern void (*__s2sdk_FireEventToClient)(uintptr_t, int32_t);

static void FireEventToClient(uintptr_t event, int32_t playerSlot) {
	__s2sdk_FireEventToClient(event, playerSlot);
}

extern void (*__s2sdk_CancelCreatedEvent)(uintptr_t);

static void CancelCreatedEvent(uintptr_t event) {
	__s2sdk_CancelCreatedEvent(event);
}

extern bool (*__s2sdk_GetEventBool)(uintptr_t, String*);

static bool GetEventBool(uintptr_t event, String* key) {
	return __s2sdk_GetEventBool(event, key);
}

extern float (*__s2sdk_GetEventFloat)(uintptr_t, String*);

static float GetEventFloat(uintptr_t event, String* key) {
	return __s2sdk_GetEventFloat(event, key);
}

extern int32_t (*__s2sdk_GetEventInt)(uintptr_t, String*);

static int32_t GetEventInt(uintptr_t event, String* key) {
	return __s2sdk_GetEventInt(event, key);
}

extern uint64_t (*__s2sdk_GetEventUInt64)(uintptr_t, String*);

static uint64_t GetEventUInt64(uintptr_t event, String* key) {
	return __s2sdk_GetEventUInt64(event, key);
}

extern String (*__s2sdk_GetEventString)(uintptr_t, String*);

static String GetEventString(uintptr_t event, String* key) {
	return __s2sdk_GetEventString(event, key);
}

extern uintptr_t (*__s2sdk_GetEventPtr)(uintptr_t, String*);

static uintptr_t GetEventPtr(uintptr_t event, String* key) {
	return __s2sdk_GetEventPtr(event, key);
}

extern uintptr_t (*__s2sdk_GetEventPlayerController)(uintptr_t, String*);

static uintptr_t GetEventPlayerController(uintptr_t event, String* key) {
	return __s2sdk_GetEventPlayerController(event, key);
}

extern int32_t (*__s2sdk_GetEventPlayerIndex)(uintptr_t, String*);

static int32_t GetEventPlayerIndex(uintptr_t event, String* key) {
	return __s2sdk_GetEventPlayerIndex(event, key);
}

extern uintptr_t (*__s2sdk_GetEventPlayerPawn)(uintptr_t, String*);

static uintptr_t GetEventPlayerPawn(uintptr_t event, String* key) {
	return __s2sdk_GetEventPlayerPawn(event, key);
}

extern uintptr_t (*__s2sdk_GetEventEntity)(uintptr_t, String*);

static uintptr_t GetEventEntity(uintptr_t event, String* key) {
	return __s2sdk_GetEventEntity(event, key);
}

extern int32_t (*__s2sdk_GetEventEntityIndex)(uintptr_t, String*);

static int32_t GetEventEntityIndex(uintptr_t event, String* key) {
	return __s2sdk_GetEventEntityIndex(event, key);
}

extern int32_t (*__s2sdk_GetEventEntityHandle)(uintptr_t, String*);

static int32_t GetEventEntityHandle(uintptr_t event, String* key) {
	return __s2sdk_GetEventEntityHandle(event, key);
}

extern String (*__s2sdk_GetEventName)(uintptr_t);

static String GetEventName(uintptr_t event) {
	return __s2sdk_GetEventName(event);
}

extern void (*__s2sdk_SetEventBool)(uintptr_t, String*, bool);

static void SetEventBool(uintptr_t event, String* key, bool value) {
	__s2sdk_SetEventBool(event, key, value);
}

extern void (*__s2sdk_SetEventFloat)(uintptr_t, String*, float);

static void SetEventFloat(uintptr_t event, String* key, float value) {
	__s2sdk_SetEventFloat(event, key, value);
}

extern void (*__s2sdk_SetEventInt)(uintptr_t, String*, int32_t);

static void SetEventInt(uintptr_t event, String* key, int32_t value) {
	__s2sdk_SetEventInt(event, key, value);
}

extern void (*__s2sdk_SetEventUInt64)(uintptr_t, String*, uint64_t);

static void SetEventUInt64(uintptr_t event, String* key, uint64_t value) {
	__s2sdk_SetEventUInt64(event, key, value);
}

extern void (*__s2sdk_SetEventString)(uintptr_t, String*, String*);

static void SetEventString(uintptr_t event, String* key, String* value) {
	__s2sdk_SetEventString(event, key, value);
}

extern void (*__s2sdk_SetEventPtr)(uintptr_t, String*, uintptr_t);

static void SetEventPtr(uintptr_t event, String* key, uintptr_t value) {
	__s2sdk_SetEventPtr(event, key, value);
}

extern void (*__s2sdk_SetEventPlayerController)(uintptr_t, String*, uintptr_t);

static void SetEventPlayerController(uintptr_t event, String* key, uintptr_t value) {
	__s2sdk_SetEventPlayerController(event, key, value);
}

extern void (*__s2sdk_SetEventPlayerIndex)(uintptr_t, String*, int32_t);

static void SetEventPlayerIndex(uintptr_t event, String* key, int32_t value) {
	__s2sdk_SetEventPlayerIndex(event, key, value);
}

extern void (*__s2sdk_SetEventEntity)(uintptr_t, String*, uintptr_t);

static void SetEventEntity(uintptr_t event, String* key, uintptr_t value) {
	__s2sdk_SetEventEntity(event, key, value);
}

extern void (*__s2sdk_SetEventEntityIndex)(uintptr_t, String*, int32_t);

static void SetEventEntityIndex(uintptr_t event, String* key, int32_t value) {
	__s2sdk_SetEventEntityIndex(event, key, value);
}

extern void (*__s2sdk_SetEventEntityHandle)(uintptr_t, String*, int32_t);

static void SetEventEntityHandle(uintptr_t event, String* key, int32_t value) {
	__s2sdk_SetEventEntityHandle(event, key, value);
}

extern void (*__s2sdk_SetEventBroadcast)(uintptr_t, bool);

static void SetEventBroadcast(uintptr_t event, bool dontBroadcast) {
	__s2sdk_SetEventBroadcast(event, dontBroadcast);
}

extern int32_t (*__s2sdk_LoadEventsFromFile)(String*, bool);

static int32_t LoadEventsFromFile(String* path, bool searchAll) {
	return __s2sdk_LoadEventsFromFile(path, searchAll);
}

