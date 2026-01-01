#pragma once

#include "shared.h"

extern void (*__s2sdk_SetTransmitInfoEntity)(uintptr_t, int32_t);

static void SetTransmitInfoEntity(uintptr_t info, int32_t entityHandle) {
	__s2sdk_SetTransmitInfoEntity(info, entityHandle);
}

extern void (*__s2sdk_ClearTransmitInfoEntity)(uintptr_t, int32_t);

static void ClearTransmitInfoEntity(uintptr_t info, int32_t entityHandle) {
	__s2sdk_ClearTransmitInfoEntity(info, entityHandle);
}

extern bool (*__s2sdk_IsTransmitInfoEntitySet)(uintptr_t, int32_t);

static bool IsTransmitInfoEntitySet(uintptr_t info, int32_t entityHandle) {
	return __s2sdk_IsTransmitInfoEntitySet(info, entityHandle);
}

extern void (*__s2sdk_SetTransmitInfoEntityAll)(uintptr_t);

static void SetTransmitInfoEntityAll(uintptr_t info) {
	__s2sdk_SetTransmitInfoEntityAll(info);
}

extern void (*__s2sdk_ClearTransmitInfoEntityAll)(uintptr_t);

static void ClearTransmitInfoEntityAll(uintptr_t info) {
	__s2sdk_ClearTransmitInfoEntityAll(info);
}

extern void (*__s2sdk_SetTransmitInfoNonPlayer)(uintptr_t, int32_t);

static void SetTransmitInfoNonPlayer(uintptr_t info, int32_t entityHandle) {
	__s2sdk_SetTransmitInfoNonPlayer(info, entityHandle);
}

extern void (*__s2sdk_ClearTransmitInfoNonPlayer)(uintptr_t, int32_t);

static void ClearTransmitInfoNonPlayer(uintptr_t info, int32_t entityHandle) {
	__s2sdk_ClearTransmitInfoNonPlayer(info, entityHandle);
}

extern bool (*__s2sdk_IsTransmitInfoNonPlayerSet)(uintptr_t, int32_t);

static bool IsTransmitInfoNonPlayerSet(uintptr_t info, int32_t entityHandle) {
	return __s2sdk_IsTransmitInfoNonPlayerSet(info, entityHandle);
}

extern void (*__s2sdk_SetTransmitInfoNonPlayerAll)(uintptr_t);

static void SetTransmitInfoNonPlayerAll(uintptr_t info) {
	__s2sdk_SetTransmitInfoNonPlayerAll(info);
}

extern void (*__s2sdk_ClearTransmitInfoNonPlayerAll)(uintptr_t);

static void ClearTransmitInfoNonPlayerAll(uintptr_t info) {
	__s2sdk_ClearTransmitInfoNonPlayerAll(info);
}

extern void (*__s2sdk_SetTransmitInfoAlways)(uintptr_t, int32_t);

static void SetTransmitInfoAlways(uintptr_t info, int32_t entityHandle) {
	__s2sdk_SetTransmitInfoAlways(info, entityHandle);
}

extern void (*__s2sdk_ClearTransmitInfoAlways)(uintptr_t, int32_t);

static void ClearTransmitInfoAlways(uintptr_t info, int32_t entityHandle) {
	__s2sdk_ClearTransmitInfoAlways(info, entityHandle);
}

extern bool (*__s2sdk_IsTransmitInfoAlwaysSet)(uintptr_t, int32_t);

static bool IsTransmitInfoAlwaysSet(uintptr_t info, int32_t entityHandle) {
	return __s2sdk_IsTransmitInfoAlwaysSet(info, entityHandle);
}

extern void (*__s2sdk_SetTransmitInfoAlwaysAll)(uintptr_t);

static void SetTransmitInfoAlwaysAll(uintptr_t info) {
	__s2sdk_SetTransmitInfoAlwaysAll(info);
}

extern void (*__s2sdk_ClearTransmitInfoAlwaysAll)(uintptr_t);

static void ClearTransmitInfoAlwaysAll(uintptr_t info) {
	__s2sdk_ClearTransmitInfoAlwaysAll(info);
}

extern int32_t (*__s2sdk_GetTransmitInfoTargetSlotsCount)(uintptr_t);

static int32_t GetTransmitInfoTargetSlotsCount(uintptr_t info) {
	return __s2sdk_GetTransmitInfoTargetSlotsCount(info);
}

extern int32_t (*__s2sdk_GetTransmitInfoTargetSlot)(uintptr_t, int32_t);

static int32_t GetTransmitInfoTargetSlot(uintptr_t info, int32_t index) {
	return __s2sdk_GetTransmitInfoTargetSlot(info, index);
}

extern void (*__s2sdk_AddTransmitInfoTargetSlot)(uintptr_t, int32_t);

static void AddTransmitInfoTargetSlot(uintptr_t info, int32_t playerSlot) {
	__s2sdk_AddTransmitInfoTargetSlot(info, playerSlot);
}

extern void (*__s2sdk_RemoveTransmitInfoTargetSlot)(uintptr_t, int32_t);

static void RemoveTransmitInfoTargetSlot(uintptr_t info, int32_t index) {
	__s2sdk_RemoveTransmitInfoTargetSlot(info, index);
}

extern Vector (*__s2sdk_GetTransmitInfoTargetSlotsAll)(uintptr_t);

static Vector GetTransmitInfoTargetSlotsAll(uintptr_t info) {
	return __s2sdk_GetTransmitInfoTargetSlotsAll(info);
}

extern void (*__s2sdk_RemoveTransmitInfoTargetSlotsAll)(uintptr_t);

static void RemoveTransmitInfoTargetSlotsAll(uintptr_t info) {
	__s2sdk_RemoveTransmitInfoTargetSlotsAll(info);
}

extern int32_t (*__s2sdk_GetTransmitInfoPlayerSlot)(uintptr_t);

static int32_t GetTransmitInfoPlayerSlot(uintptr_t info) {
	return __s2sdk_GetTransmitInfoPlayerSlot(info);
}

extern void (*__s2sdk_SetTransmitInfoPlayerSlot)(uintptr_t, int32_t);

static void SetTransmitInfoPlayerSlot(uintptr_t info, int32_t playerSlot) {
	__s2sdk_SetTransmitInfoPlayerSlot(info, playerSlot);
}

extern bool (*__s2sdk_GetTransmitInfoFullUpdate)(uintptr_t);

static bool GetTransmitInfoFullUpdate(uintptr_t info) {
	return __s2sdk_GetTransmitInfoFullUpdate(info);
}

extern void (*__s2sdk_SetTransmitInfoFullUpdate)(uintptr_t, bool);

static void SetTransmitInfoFullUpdate(uintptr_t info, bool fullUpdate) {
	__s2sdk_SetTransmitInfoFullUpdate(info, fullUpdate);
}

