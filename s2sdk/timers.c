#include "shared.h"

PLUGIFY_EXPORT uint32_t (*__s2sdk_CreateTimer)(double, void*, int32_t, Vector*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_KillsTimer)(uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_RescheduleTimer)(uint32_t, double) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetTickInterval)() = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetTickedTime)() = NULL;


