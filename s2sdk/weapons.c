#include "shared.h"

PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetWeaponVDataFromKey)(String*) = NULL;


PLUGIFY_EXPORT uintptr_t (*__s2sdk_GetWeaponVData)(int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_GetWeaponType)(int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_GetWeaponCategory)(int32_t) = NULL;


PLUGIFY_EXPORT uint32_t (*__s2sdk_GetWeaponGearSlot)(int32_t) = NULL;


PLUGIFY_EXPORT uint16_t (*__s2sdk_GetWeaponItemDefinition)(int32_t) = NULL;


PLUGIFY_EXPORT uint16_t (*__s2sdk_GetWeaponItemDefinitionByName)(String*) = NULL;


