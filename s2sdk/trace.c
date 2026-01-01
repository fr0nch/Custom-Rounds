#include "shared.h"

PLUGIFY_EXPORT bool (*__s2sdk_TraceCollideable)(Vector3*, Vector3*, int32_t, Vector3*, double*, bool*, bool*, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_TraceCollideable2)(Vector3*, Vector3*, int32_t, uintptr_t, uintptr_t, Vector3*, double*, bool*, bool*, Vector3*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_TraceHull)(Vector3*, Vector3*, Vector3*, Vector3*, int32_t, int32_t, Vector3*, double*, bool*, int32_t*, bool*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_TraceLine)(Vector3*, Vector3*, int32_t, int32_t, Vector3*, double*, bool*, int32_t*, bool*) = NULL;


