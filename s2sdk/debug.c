#include "shared.h"

PLUGIFY_EXPORT void (*__s2sdk_DebugBreak)() = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawBox)(Vector3*, Vector3*, Vector3*, int32_t, int32_t, int32_t, int32_t, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawBoxDirection)(Vector3*, Vector3*, Vector3*, Vector3*, Vector3*, float, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawCircle)(Vector3*, Vector3*, float, float, bool, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawClear)() = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawLine)(Vector3*, Vector3*, int32_t, int32_t, int32_t, bool, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawLine_vCol)(Vector3*, Vector3*, Vector3*, bool, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawScreenTextLine)(float, float, int32_t, String*, int32_t, int32_t, int32_t, int32_t, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawSphere)(Vector3*, Vector3*, float, float, bool, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugDrawText)(Vector3*, String*, bool, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugScreenTextPretty)(float, float, int32_t, String*, int32_t, int32_t, int32_t, int32_t, float, String*, int32_t, bool) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_DebugScriptAssert)(bool, String*) = NULL;


