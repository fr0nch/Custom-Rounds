#pragma once

#include "s2sdk.h"

static uint32_t CreateTimer(double delay, void* callback, int32_t flags, Vector* userData) {
	typedef uint32_t (*CreateTimerFn)(double, void*, int32_t, Vector*);
	static CreateTimerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.CreateTimer", (void**)&__func);
	return __func(delay, callback, flags, userData);
}

static void KillsTimer(uint32_t timer) {
	typedef void (*KillsTimerFn)(uint32_t);
	static KillsTimerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.KillsTimer", (void**)&__func);
	__func(timer);
}

static void RescheduleTimer(uint32_t timer, double newDaly) {
	typedef void (*RescheduleTimerFn)(uint32_t, double);
	static RescheduleTimerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RescheduleTimer", (void**)&__func);
	__func(timer, newDaly);
}

static double GetTickInterval() {
	typedef double (*GetTickIntervalFn)();
	static GetTickIntervalFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetTickInterval", (void**)&__func);
	return __func();
}

static double GetTickedTime() {
	typedef double (*GetTickedTimeFn)();
	static GetTickedTimeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetTickedTime", (void**)&__func);
	return __func();
}

