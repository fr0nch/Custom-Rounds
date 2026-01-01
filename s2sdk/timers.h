#pragma once

#include "shared.h"

extern uint32_t (*__s2sdk_CreateTimer)(double, void*, int32_t, Vector*);

static uint32_t CreateTimer(double delay, void* callback, int32_t flags, Vector* userData) {
	return __s2sdk_CreateTimer(delay, callback, flags, userData);
}

extern void (*__s2sdk_KillsTimer)(uint32_t);

static void KillsTimer(uint32_t timer) {
	__s2sdk_KillsTimer(timer);
}

extern void (*__s2sdk_RescheduleTimer)(uint32_t, double);

static void RescheduleTimer(uint32_t timer, double newDaly) {
	__s2sdk_RescheduleTimer(timer, newDaly);
}

extern double (*__s2sdk_GetTickInterval)();

static double GetTickInterval() {
	return __s2sdk_GetTickInterval();
}

extern double (*__s2sdk_GetTickedTime)();

static double GetTickedTime() {
	return __s2sdk_GetTickedTime();
}

