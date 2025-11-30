#pragma once

#include "s2sdk.h"

static uintptr_t GetWeaponVDataFromKey(String* name) {
	typedef uintptr_t (*GetWeaponVDataFromKeyFn)(String*);
	static GetWeaponVDataFromKeyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetWeaponVDataFromKey", (void**)&__func);
	return __func(name);
}

static uintptr_t GetWeaponVData(int32_t entityHandle) {
	typedef uintptr_t (*GetWeaponVDataFn)(int32_t);
	static GetWeaponVDataFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetWeaponVData", (void**)&__func);
	return __func(entityHandle);
}

static uint32_t GetWeaponType(int32_t entityHandle) {
	typedef uint32_t (*GetWeaponTypeFn)(int32_t);
	static GetWeaponTypeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetWeaponType", (void**)&__func);
	return __func(entityHandle);
}

static uint32_t GetWeaponCategory(int32_t entityHandle) {
	typedef uint32_t (*GetWeaponCategoryFn)(int32_t);
	static GetWeaponCategoryFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetWeaponCategory", (void**)&__func);
	return __func(entityHandle);
}

static uint32_t GetWeaponGearSlot(int32_t entityHandle) {
	typedef uint32_t (*GetWeaponGearSlotFn)(int32_t);
	static GetWeaponGearSlotFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetWeaponGearSlot", (void**)&__func);
	return __func(entityHandle);
}

static uint16_t GetWeaponItemDefinition(int32_t entityHandle) {
	typedef uint16_t (*GetWeaponItemDefinitionFn)(int32_t);
	static GetWeaponItemDefinitionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetWeaponItemDefinition", (void**)&__func);
	return __func(entityHandle);
}

static uint16_t GetWeaponItemDefinitionByName(String* itemName) {
	typedef uint16_t (*GetWeaponItemDefinitionByNameFn)(String*);
	static GetWeaponItemDefinitionByNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetWeaponItemDefinitionByName", (void**)&__func);
	return __func(itemName);
}

