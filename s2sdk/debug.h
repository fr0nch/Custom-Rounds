#pragma once

#include "shared.h"

extern void (*__s2sdk_DebugBreak)();

static void DebugBreak() {
	__s2sdk_DebugBreak();
}

extern void (*__s2sdk_DebugDrawBox)(Vector3*, Vector3*, Vector3*, int32_t, int32_t, int32_t, int32_t, float);

static void DebugDrawBox(Vector3* center, Vector3* mins, Vector3* maxs, int32_t r, int32_t g, int32_t b, int32_t a, float duration) {
	__s2sdk_DebugDrawBox(center, mins, maxs, r, g, b, a, duration);
}

extern void (*__s2sdk_DebugDrawBoxDirection)(Vector3*, Vector3*, Vector3*, Vector3*, Vector3*, float, float);

static void DebugDrawBoxDirection(Vector3* center, Vector3* mins, Vector3* maxs, Vector3* forward, Vector3* color, float alpha, float duration) {
	__s2sdk_DebugDrawBoxDirection(center, mins, maxs, forward, color, alpha, duration);
}

extern void (*__s2sdk_DebugDrawCircle)(Vector3*, Vector3*, float, float, bool, float);

static void DebugDrawCircle(Vector3* center, Vector3* color, float alpha, float radius, bool zTest, float duration) {
	__s2sdk_DebugDrawCircle(center, color, alpha, radius, zTest, duration);
}

extern void (*__s2sdk_DebugDrawClear)();

static void DebugDrawClear() {
	__s2sdk_DebugDrawClear();
}

extern void (*__s2sdk_DebugDrawLine)(Vector3*, Vector3*, int32_t, int32_t, int32_t, bool, float);

static void DebugDrawLine(Vector3* origin, Vector3* target, int32_t r, int32_t g, int32_t b, bool zTest, float duration) {
	__s2sdk_DebugDrawLine(origin, target, r, g, b, zTest, duration);
}

extern void (*__s2sdk_DebugDrawLine_vCol)(Vector3*, Vector3*, Vector3*, bool, float);

static void DebugDrawLine_vCol(Vector3* start, Vector3* end, Vector3* color, bool zTest, float duration) {
	__s2sdk_DebugDrawLine_vCol(start, end, color, zTest, duration);
}

extern void (*__s2sdk_DebugDrawScreenTextLine)(float, float, int32_t, String*, int32_t, int32_t, int32_t, int32_t, float);

static void DebugDrawScreenTextLine(float x, float y, int32_t lineOffset, String* text, int32_t r, int32_t g, int32_t b, int32_t a, float duration) {
	__s2sdk_DebugDrawScreenTextLine(x, y, lineOffset, text, r, g, b, a, duration);
}

extern void (*__s2sdk_DebugDrawSphere)(Vector3*, Vector3*, float, float, bool, float);

static void DebugDrawSphere(Vector3* center, Vector3* color, float alpha, float radius, bool zTest, float duration) {
	__s2sdk_DebugDrawSphere(center, color, alpha, radius, zTest, duration);
}

extern void (*__s2sdk_DebugDrawText)(Vector3*, String*, bool, float);

static void DebugDrawText(Vector3* origin, String* text, bool viewCheck, float duration) {
	__s2sdk_DebugDrawText(origin, text, viewCheck, duration);
}

extern void (*__s2sdk_DebugScreenTextPretty)(float, float, int32_t, String*, int32_t, int32_t, int32_t, int32_t, float, String*, int32_t, bool);

static void DebugScreenTextPretty(float x, float y, int32_t lineOffset, String* text, int32_t r, int32_t g, int32_t b, int32_t a, float duration, String* font, int32_t size, bool bold) {
	__s2sdk_DebugScreenTextPretty(x, y, lineOffset, text, r, g, b, a, duration, font, size, bold);
}

extern void (*__s2sdk_DebugScriptAssert)(bool, String*);

static void DebugScriptAssert(bool assertion, String* message) {
	__s2sdk_DebugScriptAssert(assertion, message);
}

