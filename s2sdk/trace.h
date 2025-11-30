#pragma once

#include "s2sdk.h"

static bool TraceCollideable(Vector3* start, Vector3* end, int32_t entityHandle, Vector3* outPos, double* outFraction, bool* outHit, bool* outStartSolid, Vector3* outNormal) {
	typedef bool (*TraceCollideableFn)(Vector3*, Vector3*, int32_t, Vector3*, double*, bool*, bool*, Vector3*);
	static TraceCollideableFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TraceCollideable", (void**)&__func);
	return __func(start, end, entityHandle, outPos, outFraction, outHit, outStartSolid, outNormal);
}

static bool TraceCollideable2(Vector3* start, Vector3* end, int32_t entityHandle, uintptr_t mins, uintptr_t maxs, Vector3* outPos, double* outFraction, bool* outHit, bool* outStartSolid, Vector3* outNormal) {
	typedef bool (*TraceCollideable2Fn)(Vector3*, Vector3*, int32_t, uintptr_t, uintptr_t, Vector3*, double*, bool*, bool*, Vector3*);
	static TraceCollideable2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TraceCollideable2", (void**)&__func);
	return __func(start, end, entityHandle, mins, maxs, outPos, outFraction, outHit, outStartSolid, outNormal);
}

static bool TraceHull(Vector3* start, Vector3* end, Vector3* min, Vector3* max, int32_t mask, int32_t ignoreHandle, Vector3* outPos, double* outFraction, bool* outHit, int32_t* outEntHit, bool* outStartSolid) {
	typedef bool (*TraceHullFn)(Vector3*, Vector3*, Vector3*, Vector3*, int32_t, int32_t, Vector3*, double*, bool*, int32_t*, bool*);
	static TraceHullFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TraceHull", (void**)&__func);
	return __func(start, end, min, max, mask, ignoreHandle, outPos, outFraction, outHit, outEntHit, outStartSolid);
}

static bool TraceLine(Vector3* startPos, Vector3* endPos, int32_t mask, int32_t ignoreHandle, Vector3* outPos, double* outFraction, bool* outHit, int32_t* outEntHit, bool* outStartSolid) {
	typedef bool (*TraceLineFn)(Vector3*, Vector3*, int32_t, int32_t, Vector3*, double*, bool*, int32_t*, bool*);
	static TraceLineFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.TraceLine", (void**)&__func);
	return __func(startPos, endPos, mask, ignoreHandle, outPos, outFraction, outHit, outEntHit, outStartSolid);
}

