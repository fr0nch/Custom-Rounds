#include "shared.h"

PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAttachmentAngles)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAttachmentForward)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityAttachmentOrigin)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_GetEntityMaterialGroupHash)(int32_t) = NULL;


PLUGIFY_EXPORT uint64_t (*__s2sdk_GetEntityMaterialGroupMask)(int32_t) = NULL;


PLUGIFY_EXPORT float (*__s2sdk_GetEntityModelScale)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetEntityRenderAlpha)(int32_t) = NULL;


PLUGIFY_EXPORT Vector3 (*__s2sdk_GetEntityRenderColor2)(int32_t) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_ScriptLookupAttachment)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityBodygroup)(int32_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityBodygroupByName)(int32_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityLightGroup)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityMaterialGroup)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityMaterialGroupHash)(int32_t, uint32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityMaterialGroupMask)(int32_t, uint64_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityModelScale)(int32_t, float) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityRenderAlpha)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityRenderColor2)(int32_t, int32_t, int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntityRenderMode2)(int32_t, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntitySingleMeshGroup)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntitySize)(int32_t, Vector3*, Vector3*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_SetEntitySkin)(int32_t, int32_t) = NULL;


