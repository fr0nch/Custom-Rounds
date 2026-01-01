#include "shared.h"

PLUGIFY_EXPORT int32_t (*__s2sdk_HookEvent)(String*, void*, uint8_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_UnhookEvent)(String*, void*, uint8_t) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_CreateEvent)(String*, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FireEvent)(uintptr_t, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FireEventToClient)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_CancelCreatedEvent)(uintptr_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_GetEventBool)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEventFloat)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEventInt)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_GetEventUInt64)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEventString)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetEventPtr)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetEventPlayerController)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEventPlayerIndex)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetEventPlayerPawn)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetEventEntity)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEventEntityIndex)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEventEntityHandle)(uintptr_t, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEventName)(uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventBool)(uintptr_t, String*, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventFloat)(uintptr_t, String*, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventInt)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventUInt64)(uintptr_t, String*, uint64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventString)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventPtr)(uintptr_t, String*, uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventPlayerController)(uintptr_t, String*, uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventPlayerIndex)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventEntity)(uintptr_t, String*, uintptr_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventEntityIndex)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventEntityHandle)(uintptr_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEventBroadcast)(uintptr_t, bool) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_LoadEventsFromFile)(String*, bool) = NULL;


