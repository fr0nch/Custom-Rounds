#include "shared.h"

PLUGIFY_EXPORT int32_t (*__s2sdk_RegisterLoggingChannel)(String*, int32_t, int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_AddLoggerTagToChannel)(int32_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_HasLoggerTag)(int32_t, String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsLoggerChannelEnabledBySeverity)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsLoggerChannelEnabledByVerbosity)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetLoggerChannelVerbosity)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetLoggerChannelVerbosity)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetLoggerChannelVerbosityByName)(int32_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetLoggerChannelVerbosityByTag)(int32_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetLoggerChannelColor)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetLoggerChannelColor)(int32_t, Vector4*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetLoggerChannelFlags)(int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetLoggerChannelFlags)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_Log)(int32_t, int32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_LogColored)(int32_t, int32_t, Vector4*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_LogFull)(int32_t, int32_t, String*, int32_t, String*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_LogFullColored)(int32_t, int32_t, String*, int32_t, String*, Vector4*, String*) = NULL;


