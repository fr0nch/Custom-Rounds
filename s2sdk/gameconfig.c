#include "shared.h"

PLUGIFY_EXPORT void (*__s2sdk_CloseGameConfigFile)(uint32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_LoadGameConfigFile)(Vector*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetGameConfigPatch)(uint32_t, String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetGameConfigOffset)(uint32_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameConfigAddress)(uint32_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameConfigVTable)(uint32_t, String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameConfigSignature)(uint32_t, String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_GetGameConfigPatchAll)(String*) = NULL;


PLUGIFY_EXPORT int32_t (*__s2sdk_GetGameConfigOffsetAll)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameConfigAddressAll)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameConfigVTableAll)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetGameConfigSignatureAll)(String*) = NULL;


