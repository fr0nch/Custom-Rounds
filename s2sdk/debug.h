#pragma once

#include "s2sdk.h"

static void DebugBreak() {
	typedef void (*DebugBreakFn)();
	static DebugBreakFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugBreak", (void**)&__func);
	__func();
}

static void DebugDrawBox(Vector3* center, Vector3* mins, Vector3* maxs, int32_t r, int32_t g, int32_t b, int32_t a, float duration) {
	typedef void (*DebugDrawBoxFn)(Vector3*, Vector3*, Vector3*, int32_t, int32_t, int32_t, int32_t, float);
	static DebugDrawBoxFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawBox", (void**)&__func);
	__func(center, mins, maxs, r, g, b, a, duration);
}

static void DebugDrawBoxDirection(Vector3* center, Vector3* mins, Vector3* maxs, Vector3* forward, Vector3* color, float alpha, float duration) {
	typedef void (*DebugDrawBoxDirectionFn)(Vector3*, Vector3*, Vector3*, Vector3*, Vector3*, float, float);
	static DebugDrawBoxDirectionFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawBoxDirection", (void**)&__func);
	__func(center, mins, maxs, forward, color, alpha, duration);
}

static void DebugDrawCircle(Vector3* center, Vector3* color, float alpha, float radius, bool zTest, float duration) {
	typedef void (*DebugDrawCircleFn)(Vector3*, Vector3*, float, float, bool, float);
	static DebugDrawCircleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawCircle", (void**)&__func);
	__func(center, color, alpha, radius, zTest, duration);
}

static void DebugDrawClear() {
	typedef void (*DebugDrawClearFn)();
	static DebugDrawClearFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawClear", (void**)&__func);
	__func();
}

static void DebugDrawLine(Vector3* origin, Vector3* target, int32_t r, int32_t g, int32_t b, bool zTest, float duration) {
	typedef void (*DebugDrawLineFn)(Vector3*, Vector3*, int32_t, int32_t, int32_t, bool, float);
	static DebugDrawLineFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawLine", (void**)&__func);
	__func(origin, target, r, g, b, zTest, duration);
}

static void DebugDrawLine_vCol(Vector3* start, Vector3* end, Vector3* color, bool zTest, float duration) {
	typedef void (*DebugDrawLine_vColFn)(Vector3*, Vector3*, Vector3*, bool, float);
	static DebugDrawLine_vColFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawLine_vCol", (void**)&__func);
	__func(start, end, color, zTest, duration);
}

static void DebugDrawScreenTextLine(float x, float y, int32_t lineOffset, String* text, int32_t r, int32_t g, int32_t b, int32_t a, float duration) {
	typedef void (*DebugDrawScreenTextLineFn)(float, float, int32_t, String*, int32_t, int32_t, int32_t, int32_t, float);
	static DebugDrawScreenTextLineFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawScreenTextLine", (void**)&__func);
	__func(x, y, lineOffset, text, r, g, b, a, duration);
}

static void DebugDrawSphere(Vector3* center, Vector3* color, float alpha, float radius, bool zTest, float duration) {
	typedef void (*DebugDrawSphereFn)(Vector3*, Vector3*, float, float, bool, float);
	static DebugDrawSphereFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawSphere", (void**)&__func);
	__func(center, color, alpha, radius, zTest, duration);
}

static void DebugDrawText(Vector3* origin, String* text, bool viewCheck, float duration) {
	typedef void (*DebugDrawTextFn)(Vector3*, String*, bool, float);
	static DebugDrawTextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugDrawText", (void**)&__func);
	__func(origin, text, viewCheck, duration);
}

static void DebugScreenTextPretty(float x, float y, int32_t lineOffset, String* text, int32_t r, int32_t g, int32_t b, int32_t a, float duration, String* font, int32_t size, bool bold) {
	typedef void (*DebugScreenTextPrettyFn)(float, float, int32_t, String*, int32_t, int32_t, int32_t, int32_t, float, String*, int32_t, bool);
	static DebugScreenTextPrettyFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugScreenTextPretty", (void**)&__func);
	__func(x, y, lineOffset, text, r, g, b, a, duration, font, size, bold);
}

static void DebugScriptAssert(bool assertion, String* message) {
	typedef void (*DebugScriptAssertFn)(bool, String*);
	static DebugScriptAssertFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.DebugScriptAssert", (void**)&__func);
	__func(assertion, message);
}

