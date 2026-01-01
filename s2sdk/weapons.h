#pragma once

#include "shared.h"

extern uintptr_t (*__s2sdk_GetWeaponVDataFromKey)(String*);

static uintptr_t GetWeaponVDataFromKey(String* name) {
	return __s2sdk_GetWeaponVDataFromKey(name);
}

extern uintptr_t (*__s2sdk_GetWeaponVData)(int32_t);

static uintptr_t GetWeaponVData(int32_t entityHandle) {
	return __s2sdk_GetWeaponVData(entityHandle);
}

extern uint32_t (*__s2sdk_GetWeaponType)(int32_t);

static uint32_t GetWeaponType(int32_t entityHandle) {
	return __s2sdk_GetWeaponType(entityHandle);
}

extern uint32_t (*__s2sdk_GetWeaponCategory)(int32_t);

static uint32_t GetWeaponCategory(int32_t entityHandle) {
	return __s2sdk_GetWeaponCategory(entityHandle);
}

extern uint32_t (*__s2sdk_GetWeaponGearSlot)(int32_t);

static uint32_t GetWeaponGearSlot(int32_t entityHandle) {
	return __s2sdk_GetWeaponGearSlot(entityHandle);
}

extern uint16_t (*__s2sdk_GetWeaponItemDefinition)(int32_t);

static uint16_t GetWeaponItemDefinition(int32_t entityHandle) {
	return __s2sdk_GetWeaponItemDefinition(entityHandle);
}

extern uint16_t (*__s2sdk_GetWeaponItemDefinitionByName)(String*);

static uint16_t GetWeaponItemDefinitionByName(String* itemName) {
	return __s2sdk_GetWeaponItemDefinitionByName(itemName);
}

