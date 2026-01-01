#include "shared.h"

PLUGIFY_EXPORT uintptr_t (*__s2sdk_FindModule)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_FindInterface)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_QueryInterface)(String*, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetGameDirectory)() = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetCurrentMap)() = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsMapValid)(String*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetGameTime)() = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetGameTickCount)() = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetGameFrameTime)() = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetEngineTime)() = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetMaxClients)() = NULL;


PLUGIFY_EXPORT void (*__s2sdk_Precache)(String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsPrecached)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetEconItemSystem)() = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsServerPaused)() = NULL;


PLUGIFY_EXPORT void (*__s2sdk_QueueTaskForNextFrame)(void*, Vector*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_QueueTaskForNextWorldUpdate)(void*, Vector*) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetSoundDuration)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_EmitSound)(int32_t, String*, int32_t, float, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_StopSound)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_EmitSoundToClient)(int32_t, int32_t, String*, float, int32_t, int32_t, int32_t, Vector3*, float) = NULL;


