#pragma once

#include "shared.h"

extern bool (*__s2sdk_TraceCollideable)(Vector3*, Vector3*, int32_t, Vector3*, double*, bool*, bool*, Vector3*);

static bool TraceCollideable(Vector3* start, Vector3* end, int32_t entityHandle, Vector3* outPos, double* outFraction, bool* outHit, bool* outStartSolid, Vector3* outNormal) {
	return __s2sdk_TraceCollideable(start, end, entityHandle, outPos, outFraction, outHit, outStartSolid, outNormal);
}

extern bool (*__s2sdk_TraceCollideable2)(Vector3*, Vector3*, int32_t, uintptr_t, uintptr_t, Vector3*, double*, bool*, bool*, Vector3*);

static bool TraceCollideable2(Vector3* start, Vector3* end, int32_t entityHandle, uintptr_t mins, uintptr_t maxs, Vector3* outPos, double* outFraction, bool* outHit, bool* outStartSolid, Vector3* outNormal) {
	return __s2sdk_TraceCollideable2(start, end, entityHandle, mins, maxs, outPos, outFraction, outHit, outStartSolid, outNormal);
}

extern bool (*__s2sdk_TraceHull)(Vector3*, Vector3*, Vector3*, Vector3*, int32_t, int32_t, Vector3*, double*, bool*, int32_t*, bool*);

static bool TraceHull(Vector3* start, Vector3* end, Vector3* min, Vector3* max, int32_t mask, int32_t ignoreHandle, Vector3* outPos, double* outFraction, bool* outHit, int32_t* outEntHit, bool* outStartSolid) {
	return __s2sdk_TraceHull(start, end, min, max, mask, ignoreHandle, outPos, outFraction, outHit, outEntHit, outStartSolid);
}

extern bool (*__s2sdk_TraceLine)(Vector3*, Vector3*, int32_t, int32_t, Vector3*, double*, bool*, int32_t*, bool*);

static bool TraceLine(Vector3* startPos, Vector3* endPos, int32_t mask, int32_t ignoreHandle, Vector3* outPos, double* outFraction, bool* outHit, int32_t* outEntHit, bool* outStartSolid) {
	return __s2sdk_TraceLine(startPos, endPos, mask, ignoreHandle, outPos, outFraction, outHit, outEntHit, outStartSolid);
}

