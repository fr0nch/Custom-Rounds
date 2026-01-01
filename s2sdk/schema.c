#include "shared.h"

PLUGIFY_EXPORT int32_t (*__s2sdk_GetSchemaOffset)(String*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetSchemaChainOffset)(String*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_IsSchemaFieldNetworked)(String*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetSchemaClassSize)(String*) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_GetEntData2)(uintptr_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntData2)(uintptr_t, int32_t, int64_t, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetEntDataFloat2)(uintptr_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataFloat2)(uintptr_t, int32_t, double, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetEntDataColor2)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataColor2)(uintptr_t, int32_t, Vector4*, bool, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEntDataString2)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataString2)(uintptr_t, int32_t, String*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntDataVector2)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataVector2)(uintptr_t, int32_t, Vector3*, bool, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntDataEnt2)(uintptr_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataEnt2)(uintptr_t, int32_t, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ChangeEntityState2)(uintptr_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_GetEntData)(int32_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntData)(int32_t, int32_t, int64_t, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetEntDataFloat)(int32_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataFloat)(int32_t, int32_t, double, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetEntDataColor)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataColor)(int32_t, int32_t, Vector4*, bool, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEntDataString)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataString)(int32_t, int32_t, String*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntDataVector)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataVector)(int32_t, int32_t, Vector3*, bool, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntDataEnt)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntDataEnt)(int32_t, int32_t, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ChangeEntityState)(int32_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntSchemaArraySize2)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_GetEntSchema2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchema2)(uintptr_t, String*, String*, int64_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetEntSchemaFloat2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaFloat2)(uintptr_t, String*, String*, double, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetEntSchemaColor2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaColor2)(uintptr_t, String*, String*, Vector4*, bool, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEntSchemaString2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaString2)(uintptr_t, String*, String*, String*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntSchemaVector3D2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaVector3D2)(uintptr_t, String*, String*, Vector3*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector2 (*__s2sdk_GetEntSchemaVector2D2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaVector2D2)(uintptr_t, String*, String*, Vector2*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetEntSchemaVector4D2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaVector4D2)(uintptr_t, String*, String*, Vector4*, bool, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntSchemaEnt2)(uintptr_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaEnt2)(uintptr_t, String*, String*, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_NetworkStateChanged2)(uintptr_t, String*, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntSchemaArraySize)(int32_t, String*, String*) = NULL;


PLUGIFY_EXPORT int64_t (*__s2sdk_GetEntSchema)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchema)(int32_t, String*, String*, int64_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT double (*__s2sdk_GetEntSchemaFloat)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaFloat)(int32_t, String*, String*, double, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetEntSchemaColor)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaColor)(int32_t, String*, String*, Vector4*, bool, int32_t) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetEntSchemaString)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaString)(int32_t, String*, String*, String*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntSchemaVector3D)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaVector3D)(int32_t, String*, String*, Vector3*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector2 (*__s2sdk_GetEntSchemaVector2D)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaVector2D)(int32_t, String*, String*, Vector2*, bool, int32_t) = NULL;


PLUGIFY_EXPORT Vector4 (*__s2sdk_GetEntSchemaVector4D)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaVector4D)(int32_t, String*, String*, Vector4*, bool, int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntSchemaEnt)(int32_t, String*, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntSchemaEnt)(int32_t, String*, String*, int32_t, bool, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_NetworkStateChanged)(int32_t, String*, String*) = NULL;


