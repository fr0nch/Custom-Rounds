#pragma once

#include "shared.h"

extern int32_t (*__s2sdk_GetSchemaOffset)(String*, String*);

static int32_t GetSchemaOffset(String* className, String* memberName) {
	return __s2sdk_GetSchemaOffset(className, memberName);
}

extern int32_t (*__s2sdk_GetSchemaChainOffset)(String*);

static int32_t GetSchemaChainOffset(String* className) {
	return __s2sdk_GetSchemaChainOffset(className);
}

extern bool (*__s2sdk_IsSchemaFieldNetworked)(String*, String*);

static bool IsSchemaFieldNetworked(String* className, String* memberName) {
	return __s2sdk_IsSchemaFieldNetworked(className, memberName);
}

extern int32_t (*__s2sdk_GetSchemaClassSize)(String*);

static int32_t GetSchemaClassSize(String* className) {
	return __s2sdk_GetSchemaClassSize(className);
}

extern int64_t (*__s2sdk_GetEntData2)(uintptr_t, int32_t, int32_t);

static int64_t GetEntData2(uintptr_t entity, int32_t offset, int32_t size) {
	return __s2sdk_GetEntData2(entity, offset, size);
}

extern void (*__s2sdk_SetEntData2)(uintptr_t, int32_t, int64_t, int32_t, bool, int32_t);

static void SetEntData2(uintptr_t entity, int32_t offset, int64_t value, int32_t size, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntData2(entity, offset, value, size, changeState, chainOffset);
}

extern double (*__s2sdk_GetEntDataFloat2)(uintptr_t, int32_t, int32_t);

static double GetEntDataFloat2(uintptr_t entity, int32_t offset, int32_t size) {
	return __s2sdk_GetEntDataFloat2(entity, offset, size);
}

extern void (*__s2sdk_SetEntDataFloat2)(uintptr_t, int32_t, double, int32_t, bool, int32_t);

static void SetEntDataFloat2(uintptr_t entity, int32_t offset, double value, int32_t size, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataFloat2(entity, offset, value, size, changeState, chainOffset);
}

extern Vector4 (*__s2sdk_GetEntDataColor2)(uintptr_t, int32_t);

static Vector4 GetEntDataColor2(uintptr_t entity, int32_t offset) {
	return __s2sdk_GetEntDataColor2(entity, offset);
}

extern void (*__s2sdk_SetEntDataColor2)(uintptr_t, int32_t, Vector4*, bool, int32_t);

static void SetEntDataColor2(uintptr_t entity, int32_t offset, Vector4* value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataColor2(entity, offset, value, changeState, chainOffset);
}

extern String (*__s2sdk_GetEntDataString2)(uintptr_t, int32_t);

static String GetEntDataString2(uintptr_t entity, int32_t offset) {
	return __s2sdk_GetEntDataString2(entity, offset);
}

extern void (*__s2sdk_SetEntDataString2)(uintptr_t, int32_t, String*, bool, int32_t);

static void SetEntDataString2(uintptr_t entity, int32_t offset, String* value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataString2(entity, offset, value, changeState, chainOffset);
}

extern Vector3 (*__s2sdk_GetEntDataVector2)(uintptr_t, int32_t);

static Vector3 GetEntDataVector2(uintptr_t entity, int32_t offset) {
	return __s2sdk_GetEntDataVector2(entity, offset);
}

extern void (*__s2sdk_SetEntDataVector2)(uintptr_t, int32_t, Vector3*, bool, int32_t);

static void SetEntDataVector2(uintptr_t entity, int32_t offset, Vector3* value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataVector2(entity, offset, value, changeState, chainOffset);
}

extern int32_t (*__s2sdk_GetEntDataEnt2)(uintptr_t, int32_t);

static int32_t GetEntDataEnt2(uintptr_t entity, int32_t offset) {
	return __s2sdk_GetEntDataEnt2(entity, offset);
}

extern void (*__s2sdk_SetEntDataEnt2)(uintptr_t, int32_t, int32_t, bool, int32_t);

static void SetEntDataEnt2(uintptr_t entity, int32_t offset, int32_t value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataEnt2(entity, offset, value, changeState, chainOffset);
}

extern void (*__s2sdk_ChangeEntityState2)(uintptr_t, int32_t, int32_t);

static void ChangeEntityState2(uintptr_t entity, int32_t offset, int32_t chainOffset) {
	__s2sdk_ChangeEntityState2(entity, offset, chainOffset);
}

extern int64_t (*__s2sdk_GetEntData)(int32_t, int32_t, int32_t);

static int64_t GetEntData(int32_t entityHandle, int32_t offset, int32_t size) {
	return __s2sdk_GetEntData(entityHandle, offset, size);
}

extern void (*__s2sdk_SetEntData)(int32_t, int32_t, int64_t, int32_t, bool, int32_t);

static void SetEntData(int32_t entityHandle, int32_t offset, int64_t value, int32_t size, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntData(entityHandle, offset, value, size, changeState, chainOffset);
}

extern double (*__s2sdk_GetEntDataFloat)(int32_t, int32_t, int32_t);

static double GetEntDataFloat(int32_t entityHandle, int32_t offset, int32_t size) {
	return __s2sdk_GetEntDataFloat(entityHandle, offset, size);
}

extern void (*__s2sdk_SetEntDataFloat)(int32_t, int32_t, double, int32_t, bool, int32_t);

static void SetEntDataFloat(int32_t entityHandle, int32_t offset, double value, int32_t size, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataFloat(entityHandle, offset, value, size, changeState, chainOffset);
}

extern Vector4 (*__s2sdk_GetEntDataColor)(int32_t, int32_t);

static Vector4 GetEntDataColor(int32_t entityHandle, int32_t offset) {
	return __s2sdk_GetEntDataColor(entityHandle, offset);
}

extern void (*__s2sdk_SetEntDataColor)(int32_t, int32_t, Vector4*, bool, int32_t);

static void SetEntDataColor(int32_t entityHandle, int32_t offset, Vector4* value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataColor(entityHandle, offset, value, changeState, chainOffset);
}

extern String (*__s2sdk_GetEntDataString)(int32_t, int32_t);

static String GetEntDataString(int32_t entityHandle, int32_t offset) {
	return __s2sdk_GetEntDataString(entityHandle, offset);
}

extern void (*__s2sdk_SetEntDataString)(int32_t, int32_t, String*, bool, int32_t);

static void SetEntDataString(int32_t entityHandle, int32_t offset, String* value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataString(entityHandle, offset, value, changeState, chainOffset);
}

extern Vector3 (*__s2sdk_GetEntDataVector)(int32_t, int32_t);

static Vector3 GetEntDataVector(int32_t entityHandle, int32_t offset) {
	return __s2sdk_GetEntDataVector(entityHandle, offset);
}

extern void (*__s2sdk_SetEntDataVector)(int32_t, int32_t, Vector3*, bool, int32_t);

static void SetEntDataVector(int32_t entityHandle, int32_t offset, Vector3* value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataVector(entityHandle, offset, value, changeState, chainOffset);
}

extern int32_t (*__s2sdk_GetEntDataEnt)(int32_t, int32_t);

static int32_t GetEntDataEnt(int32_t entityHandle, int32_t offset) {
	return __s2sdk_GetEntDataEnt(entityHandle, offset);
}

extern void (*__s2sdk_SetEntDataEnt)(int32_t, int32_t, int32_t, bool, int32_t);

static void SetEntDataEnt(int32_t entityHandle, int32_t offset, int32_t value, bool changeState, int32_t chainOffset) {
	__s2sdk_SetEntDataEnt(entityHandle, offset, value, changeState, chainOffset);
}

extern void (*__s2sdk_ChangeEntityState)(int32_t, int32_t, int32_t);

static void ChangeEntityState(int32_t entityHandle, int32_t offset, int32_t chainOffset) {
	__s2sdk_ChangeEntityState(entityHandle, offset, chainOffset);
}

extern int32_t (*__s2sdk_GetEntSchemaArraySize2)(uintptr_t, String*, String*);

static int32_t GetEntSchemaArraySize2(uintptr_t entity, String* className, String* memberName) {
	return __s2sdk_GetEntSchemaArraySize2(entity, className, memberName);
}

extern int64_t (*__s2sdk_GetEntSchema2)(uintptr_t, String*, String*, int32_t);

static int64_t GetEntSchema2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchema2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchema2)(uintptr_t, String*, String*, int64_t, bool, int32_t);

static void SetEntSchema2(uintptr_t entity, String* className, String* memberName, int64_t value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchema2(entity, className, memberName, value, changeState, element);
}

extern double (*__s2sdk_GetEntSchemaFloat2)(uintptr_t, String*, String*, int32_t);

static double GetEntSchemaFloat2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaFloat2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaFloat2)(uintptr_t, String*, String*, double, bool, int32_t);

static void SetEntSchemaFloat2(uintptr_t entity, String* className, String* memberName, double value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaFloat2(entity, className, memberName, value, changeState, element);
}

extern Vector4 (*__s2sdk_GetEntSchemaColor2)(uintptr_t, String*, String*, int32_t);

static Vector4 GetEntSchemaColor2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaColor2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaColor2)(uintptr_t, String*, String*, Vector4*, bool, int32_t);

static void SetEntSchemaColor2(uintptr_t entity, String* className, String* memberName, Vector4* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaColor2(entity, className, memberName, value, changeState, element);
}

extern String (*__s2sdk_GetEntSchemaString2)(uintptr_t, String*, String*, int32_t);

static String GetEntSchemaString2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaString2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaString2)(uintptr_t, String*, String*, String*, bool, int32_t);

static void SetEntSchemaString2(uintptr_t entity, String* className, String* memberName, String* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaString2(entity, className, memberName, value, changeState, element);
}

extern Vector3 (*__s2sdk_GetEntSchemaVector3D2)(uintptr_t, String*, String*, int32_t);

static Vector3 GetEntSchemaVector3D2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaVector3D2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaVector3D2)(uintptr_t, String*, String*, Vector3*, bool, int32_t);

static void SetEntSchemaVector3D2(uintptr_t entity, String* className, String* memberName, Vector3* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaVector3D2(entity, className, memberName, value, changeState, element);
}

extern Vector2 (*__s2sdk_GetEntSchemaVector2D2)(uintptr_t, String*, String*, int32_t);

static Vector2 GetEntSchemaVector2D2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaVector2D2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaVector2D2)(uintptr_t, String*, String*, Vector2*, bool, int32_t);

static void SetEntSchemaVector2D2(uintptr_t entity, String* className, String* memberName, Vector2* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaVector2D2(entity, className, memberName, value, changeState, element);
}

extern Vector4 (*__s2sdk_GetEntSchemaVector4D2)(uintptr_t, String*, String*, int32_t);

static Vector4 GetEntSchemaVector4D2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaVector4D2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaVector4D2)(uintptr_t, String*, String*, Vector4*, bool, int32_t);

static void SetEntSchemaVector4D2(uintptr_t entity, String* className, String* memberName, Vector4* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaVector4D2(entity, className, memberName, value, changeState, element);
}

extern int32_t (*__s2sdk_GetEntSchemaEnt2)(uintptr_t, String*, String*, int32_t);

static int32_t GetEntSchemaEnt2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaEnt2(entity, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaEnt2)(uintptr_t, String*, String*, int32_t, bool, int32_t);

static void SetEntSchemaEnt2(uintptr_t entity, String* className, String* memberName, int32_t value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaEnt2(entity, className, memberName, value, changeState, element);
}

extern void (*__s2sdk_NetworkStateChanged2)(uintptr_t, String*, String*);

static void NetworkStateChanged2(uintptr_t entity, String* className, String* memberName) {
	__s2sdk_NetworkStateChanged2(entity, className, memberName);
}

extern int32_t (*__s2sdk_GetEntSchemaArraySize)(int32_t, String*, String*);

static int32_t GetEntSchemaArraySize(int32_t entityHandle, String* className, String* memberName) {
	return __s2sdk_GetEntSchemaArraySize(entityHandle, className, memberName);
}

extern int64_t (*__s2sdk_GetEntSchema)(int32_t, String*, String*, int32_t);

static int64_t GetEntSchema(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchema(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchema)(int32_t, String*, String*, int64_t, bool, int32_t);

static void SetEntSchema(int32_t entityHandle, String* className, String* memberName, int64_t value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchema(entityHandle, className, memberName, value, changeState, element);
}

extern double (*__s2sdk_GetEntSchemaFloat)(int32_t, String*, String*, int32_t);

static double GetEntSchemaFloat(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaFloat(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaFloat)(int32_t, String*, String*, double, bool, int32_t);

static void SetEntSchemaFloat(int32_t entityHandle, String* className, String* memberName, double value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaFloat(entityHandle, className, memberName, value, changeState, element);
}

extern Vector4 (*__s2sdk_GetEntSchemaColor)(int32_t, String*, String*, int32_t);

static Vector4 GetEntSchemaColor(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaColor(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaColor)(int32_t, String*, String*, Vector4*, bool, int32_t);

static void SetEntSchemaColor(int32_t entityHandle, String* className, String* memberName, Vector4* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaColor(entityHandle, className, memberName, value, changeState, element);
}

extern String (*__s2sdk_GetEntSchemaString)(int32_t, String*, String*, int32_t);

static String GetEntSchemaString(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaString(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaString)(int32_t, String*, String*, String*, bool, int32_t);

static void SetEntSchemaString(int32_t entityHandle, String* className, String* memberName, String* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaString(entityHandle, className, memberName, value, changeState, element);
}

extern Vector3 (*__s2sdk_GetEntSchemaVector3D)(int32_t, String*, String*, int32_t);

static Vector3 GetEntSchemaVector3D(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaVector3D(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaVector3D)(int32_t, String*, String*, Vector3*, bool, int32_t);

static void SetEntSchemaVector3D(int32_t entityHandle, String* className, String* memberName, Vector3* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaVector3D(entityHandle, className, memberName, value, changeState, element);
}

extern Vector2 (*__s2sdk_GetEntSchemaVector2D)(int32_t, String*, String*, int32_t);

static Vector2 GetEntSchemaVector2D(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaVector2D(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaVector2D)(int32_t, String*, String*, Vector2*, bool, int32_t);

static void SetEntSchemaVector2D(int32_t entityHandle, String* className, String* memberName, Vector2* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaVector2D(entityHandle, className, memberName, value, changeState, element);
}

extern Vector4 (*__s2sdk_GetEntSchemaVector4D)(int32_t, String*, String*, int32_t);

static Vector4 GetEntSchemaVector4D(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaVector4D(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaVector4D)(int32_t, String*, String*, Vector4*, bool, int32_t);

static void SetEntSchemaVector4D(int32_t entityHandle, String* className, String* memberName, Vector4* value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaVector4D(entityHandle, className, memberName, value, changeState, element);
}

extern int32_t (*__s2sdk_GetEntSchemaEnt)(int32_t, String*, String*, int32_t);

static int32_t GetEntSchemaEnt(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	return __s2sdk_GetEntSchemaEnt(entityHandle, className, memberName, element);
}

extern void (*__s2sdk_SetEntSchemaEnt)(int32_t, String*, String*, int32_t, bool, int32_t);

static void SetEntSchemaEnt(int32_t entityHandle, String* className, String* memberName, int32_t value, bool changeState, int32_t element) {
	__s2sdk_SetEntSchemaEnt(entityHandle, className, memberName, value, changeState, element);
}

extern void (*__s2sdk_NetworkStateChanged)(int32_t, String*, String*);

static void NetworkStateChanged(int32_t entityHandle, String* className, String* memberName) {
	__s2sdk_NetworkStateChanged(entityHandle, className, memberName);
}

