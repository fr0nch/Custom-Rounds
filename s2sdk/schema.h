#pragma once

#include "s2sdk.h"

static int32_t GetSchemaOffset(String* className, String* memberName) {
	typedef int32_t (*GetSchemaOffsetFn)(String*, String*);
	static GetSchemaOffsetFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetSchemaOffset", (void**)&__func);
	return __func(className, memberName);
}

static int32_t GetSchemaChainOffset(String* className) {
	typedef int32_t (*GetSchemaChainOffsetFn)(String*);
	static GetSchemaChainOffsetFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetSchemaChainOffset", (void**)&__func);
	return __func(className);
}

static bool IsSchemaFieldNetworked(String* className, String* memberName) {
	typedef bool (*IsSchemaFieldNetworkedFn)(String*, String*);
	static IsSchemaFieldNetworkedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsSchemaFieldNetworked", (void**)&__func);
	return __func(className, memberName);
}

static int32_t GetSchemaClassSize(String* className) {
	typedef int32_t (*GetSchemaClassSizeFn)(String*);
	static GetSchemaClassSizeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetSchemaClassSize", (void**)&__func);
	return __func(className);
}

static int64_t GetEntData2(uintptr_t entity, int32_t offset, int32_t size) {
	typedef int64_t (*GetEntData2Fn)(uintptr_t, int32_t, int32_t);
	static GetEntData2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntData2", (void**)&__func);
	return __func(entity, offset, size);
}

static void SetEntData2(uintptr_t entity, int32_t offset, int64_t value, int32_t size, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntData2Fn)(uintptr_t, int32_t, int64_t, int32_t, bool, int32_t);
	static SetEntData2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntData2", (void**)&__func);
	__func(entity, offset, value, size, changeState, chainOffset);
}

static double GetEntDataFloat2(uintptr_t entity, int32_t offset, int32_t size) {
	typedef double (*GetEntDataFloat2Fn)(uintptr_t, int32_t, int32_t);
	static GetEntDataFloat2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataFloat2", (void**)&__func);
	return __func(entity, offset, size);
}

static void SetEntDataFloat2(uintptr_t entity, int32_t offset, double value, int32_t size, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataFloat2Fn)(uintptr_t, int32_t, double, int32_t, bool, int32_t);
	static SetEntDataFloat2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataFloat2", (void**)&__func);
	__func(entity, offset, value, size, changeState, chainOffset);
}

static String GetEntDataString2(uintptr_t entity, int32_t offset) {
	typedef String (*GetEntDataString2Fn)(uintptr_t, int32_t);
	static GetEntDataString2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataString2", (void**)&__func);
	return __func(entity, offset);
}

static void SetEntDataString2(uintptr_t entity, int32_t offset, String* value, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataString2Fn)(uintptr_t, int32_t, String*, bool, int32_t);
	static SetEntDataString2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataString2", (void**)&__func);
	__func(entity, offset, value, changeState, chainOffset);
}

static Vector3 GetEntDataVector2(uintptr_t entity, int32_t offset) {
	typedef Vector3 (*GetEntDataVector2Fn)(uintptr_t, int32_t);
	static GetEntDataVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataVector2", (void**)&__func);
	return __func(entity, offset);
}

static void SetEntDataVector2(uintptr_t entity, int32_t offset, Vector3* value, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataVector2Fn)(uintptr_t, int32_t, Vector3*, bool, int32_t);
	static SetEntDataVector2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataVector2", (void**)&__func);
	__func(entity, offset, value, changeState, chainOffset);
}

static int32_t GetEntDataEnt2(uintptr_t entity, int32_t offset) {
	typedef int32_t (*GetEntDataEnt2Fn)(uintptr_t, int32_t);
	static GetEntDataEnt2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataEnt2", (void**)&__func);
	return __func(entity, offset);
}

static void SetEntDataEnt2(uintptr_t entity, int32_t offset, int32_t value, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataEnt2Fn)(uintptr_t, int32_t, int32_t, bool, int32_t);
	static SetEntDataEnt2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataEnt2", (void**)&__func);
	__func(entity, offset, value, changeState, chainOffset);
}

static void ChangeEntityState2(uintptr_t entity, int32_t offset, int32_t chainOffset) {
	typedef void (*ChangeEntityState2Fn)(uintptr_t, int32_t, int32_t);
	static ChangeEntityState2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ChangeEntityState2", (void**)&__func);
	__func(entity, offset, chainOffset);
}

static int64_t GetEntData(int32_t entityHandle, int32_t offset, int32_t size) {
	typedef int64_t (*GetEntDataFn)(int32_t, int32_t, int32_t);
	static GetEntDataFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntData", (void**)&__func);
	return __func(entityHandle, offset, size);
}

static void SetEntData(int32_t entityHandle, int32_t offset, int64_t value, int32_t size, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataFn)(int32_t, int32_t, int64_t, int32_t, bool, int32_t);
	static SetEntDataFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntData", (void**)&__func);
	__func(entityHandle, offset, value, size, changeState, chainOffset);
}

static double GetEntDataFloat(int32_t entityHandle, int32_t offset, int32_t size) {
	typedef double (*GetEntDataFloatFn)(int32_t, int32_t, int32_t);
	static GetEntDataFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataFloat", (void**)&__func);
	return __func(entityHandle, offset, size);
}

static void SetEntDataFloat(int32_t entityHandle, int32_t offset, double value, int32_t size, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataFloatFn)(int32_t, int32_t, double, int32_t, bool, int32_t);
	static SetEntDataFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataFloat", (void**)&__func);
	__func(entityHandle, offset, value, size, changeState, chainOffset);
}

static String GetEntDataString(int32_t entityHandle, int32_t offset) {
	typedef String (*GetEntDataStringFn)(int32_t, int32_t);
	static GetEntDataStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataString", (void**)&__func);
	return __func(entityHandle, offset);
}

static void SetEntDataString(int32_t entityHandle, int32_t offset, String* value, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataStringFn)(int32_t, int32_t, String*, bool, int32_t);
	static SetEntDataStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataString", (void**)&__func);
	__func(entityHandle, offset, value, changeState, chainOffset);
}

static Vector3 GetEntDataVector(int32_t entityHandle, int32_t offset) {
	typedef Vector3 (*GetEntDataVectorFn)(int32_t, int32_t);
	static GetEntDataVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataVector", (void**)&__func);
	return __func(entityHandle, offset);
}

static void SetEntDataVector(int32_t entityHandle, int32_t offset, Vector3* value, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataVectorFn)(int32_t, int32_t, Vector3*, bool, int32_t);
	static SetEntDataVectorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataVector", (void**)&__func);
	__func(entityHandle, offset, value, changeState, chainOffset);
}

static int32_t GetEntDataEnt(int32_t entityHandle, int32_t offset) {
	typedef int32_t (*GetEntDataEntFn)(int32_t, int32_t);
	static GetEntDataEntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntDataEnt", (void**)&__func);
	return __func(entityHandle, offset);
}

static void SetEntDataEnt(int32_t entityHandle, int32_t offset, int32_t value, bool changeState, int32_t chainOffset) {
	typedef void (*SetEntDataEntFn)(int32_t, int32_t, int32_t, bool, int32_t);
	static SetEntDataEntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntDataEnt", (void**)&__func);
	__func(entityHandle, offset, value, changeState, chainOffset);
}

static void ChangeEntityState(int32_t entityHandle, int32_t offset, int32_t chainOffset) {
	typedef void (*ChangeEntityStateFn)(int32_t, int32_t, int32_t);
	static ChangeEntityStateFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ChangeEntityState", (void**)&__func);
	__func(entityHandle, offset, chainOffset);
}

static int32_t GetEntSchemaArraySize2(uintptr_t entity, String* className, String* memberName) {
	typedef int32_t (*GetEntSchemaArraySize2Fn)(uintptr_t, String*, String*);
	static GetEntSchemaArraySize2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaArraySize2", (void**)&__func);
	return __func(entity, className, memberName);
}

static int64_t GetEntSchema2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	typedef int64_t (*GetEntSchema2Fn)(uintptr_t, String*, String*, int32_t);
	static GetEntSchema2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchema2", (void**)&__func);
	return __func(entity, className, memberName, element);
}

static void SetEntSchema2(uintptr_t entity, String* className, String* memberName, int64_t value, bool changeState, int32_t element) {
	typedef void (*SetEntSchema2Fn)(uintptr_t, String*, String*, int64_t, bool, int32_t);
	static SetEntSchema2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchema2", (void**)&__func);
	__func(entity, className, memberName, value, changeState, element);
}

static double GetEntSchemaFloat2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	typedef double (*GetEntSchemaFloat2Fn)(uintptr_t, String*, String*, int32_t);
	static GetEntSchemaFloat2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaFloat2", (void**)&__func);
	return __func(entity, className, memberName, element);
}

static void SetEntSchemaFloat2(uintptr_t entity, String* className, String* memberName, double value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaFloat2Fn)(uintptr_t, String*, String*, double, bool, int32_t);
	static SetEntSchemaFloat2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaFloat2", (void**)&__func);
	__func(entity, className, memberName, value, changeState, element);
}

static String GetEntSchemaString2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	typedef String (*GetEntSchemaString2Fn)(uintptr_t, String*, String*, int32_t);
	static GetEntSchemaString2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaString2", (void**)&__func);
	return __func(entity, className, memberName, element);
}

static void SetEntSchemaString2(uintptr_t entity, String* className, String* memberName, String* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaString2Fn)(uintptr_t, String*, String*, String*, bool, int32_t);
	static SetEntSchemaString2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaString2", (void**)&__func);
	__func(entity, className, memberName, value, changeState, element);
}

static Vector3 GetEntSchemaVector3D2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	typedef Vector3 (*GetEntSchemaVector3D2Fn)(uintptr_t, String*, String*, int32_t);
	static GetEntSchemaVector3D2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaVector3D2", (void**)&__func);
	return __func(entity, className, memberName, element);
}

static void SetEntSchemaVector3D2(uintptr_t entity, String* className, String* memberName, Vector3* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaVector3D2Fn)(uintptr_t, String*, String*, Vector3*, bool, int32_t);
	static SetEntSchemaVector3D2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaVector3D2", (void**)&__func);
	__func(entity, className, memberName, value, changeState, element);
}

static Vector2 GetEntSchemaVector2D2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	typedef Vector2 (*GetEntSchemaVector2D2Fn)(uintptr_t, String*, String*, int32_t);
	static GetEntSchemaVector2D2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaVector2D2", (void**)&__func);
	return __func(entity, className, memberName, element);
}

static void SetEntSchemaVector2D2(uintptr_t entity, String* className, String* memberName, Vector2* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaVector2D2Fn)(uintptr_t, String*, String*, Vector2*, bool, int32_t);
	static SetEntSchemaVector2D2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaVector2D2", (void**)&__func);
	__func(entity, className, memberName, value, changeState, element);
}

static Vector4 GetEntSchemaVector4D2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	typedef Vector4 (*GetEntSchemaVector4D2Fn)(uintptr_t, String*, String*, int32_t);
	static GetEntSchemaVector4D2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaVector4D2", (void**)&__func);
	return __func(entity, className, memberName, element);
}

static void SetEntSchemaVector4D2(uintptr_t entity, String* className, String* memberName, Vector4* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaVector4D2Fn)(uintptr_t, String*, String*, Vector4*, bool, int32_t);
	static SetEntSchemaVector4D2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaVector4D2", (void**)&__func);
	__func(entity, className, memberName, value, changeState, element);
}

static int32_t GetEntSchemaEnt2(uintptr_t entity, String* className, String* memberName, int32_t element) {
	typedef int32_t (*GetEntSchemaEnt2Fn)(uintptr_t, String*, String*, int32_t);
	static GetEntSchemaEnt2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaEnt2", (void**)&__func);
	return __func(entity, className, memberName, element);
}

static void SetEntSchemaEnt2(uintptr_t entity, String* className, String* memberName, int32_t value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaEnt2Fn)(uintptr_t, String*, String*, int32_t, bool, int32_t);
	static SetEntSchemaEnt2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaEnt2", (void**)&__func);
	__func(entity, className, memberName, value, changeState, element);
}

static void NetworkStateChanged2(uintptr_t entity, String* className, String* memberName) {
	typedef void (*NetworkStateChanged2Fn)(uintptr_t, String*, String*);
	static NetworkStateChanged2Fn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.NetworkStateChanged2", (void**)&__func);
	__func(entity, className, memberName);
}

static int32_t GetEntSchemaArraySize(int32_t entityHandle, String* className, String* memberName) {
	typedef int32_t (*GetEntSchemaArraySizeFn)(int32_t, String*, String*);
	static GetEntSchemaArraySizeFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaArraySize", (void**)&__func);
	return __func(entityHandle, className, memberName);
}

static int64_t GetEntSchema(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	typedef int64_t (*GetEntSchemaFn)(int32_t, String*, String*, int32_t);
	static GetEntSchemaFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchema", (void**)&__func);
	return __func(entityHandle, className, memberName, element);
}

static void SetEntSchema(int32_t entityHandle, String* className, String* memberName, int64_t value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaFn)(int32_t, String*, String*, int64_t, bool, int32_t);
	static SetEntSchemaFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchema", (void**)&__func);
	__func(entityHandle, className, memberName, value, changeState, element);
}

static double GetEntSchemaFloat(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	typedef double (*GetEntSchemaFloatFn)(int32_t, String*, String*, int32_t);
	static GetEntSchemaFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaFloat", (void**)&__func);
	return __func(entityHandle, className, memberName, element);
}

static void SetEntSchemaFloat(int32_t entityHandle, String* className, String* memberName, double value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaFloatFn)(int32_t, String*, String*, double, bool, int32_t);
	static SetEntSchemaFloatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaFloat", (void**)&__func);
	__func(entityHandle, className, memberName, value, changeState, element);
}

static String GetEntSchemaString(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	typedef String (*GetEntSchemaStringFn)(int32_t, String*, String*, int32_t);
	static GetEntSchemaStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaString", (void**)&__func);
	return __func(entityHandle, className, memberName, element);
}

static void SetEntSchemaString(int32_t entityHandle, String* className, String* memberName, String* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaStringFn)(int32_t, String*, String*, String*, bool, int32_t);
	static SetEntSchemaStringFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaString", (void**)&__func);
	__func(entityHandle, className, memberName, value, changeState, element);
}

static Vector3 GetEntSchemaVector3D(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	typedef Vector3 (*GetEntSchemaVector3DFn)(int32_t, String*, String*, int32_t);
	static GetEntSchemaVector3DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaVector3D", (void**)&__func);
	return __func(entityHandle, className, memberName, element);
}

static void SetEntSchemaVector3D(int32_t entityHandle, String* className, String* memberName, Vector3* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaVector3DFn)(int32_t, String*, String*, Vector3*, bool, int32_t);
	static SetEntSchemaVector3DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaVector3D", (void**)&__func);
	__func(entityHandle, className, memberName, value, changeState, element);
}

static Vector2 GetEntSchemaVector2D(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	typedef Vector2 (*GetEntSchemaVector2DFn)(int32_t, String*, String*, int32_t);
	static GetEntSchemaVector2DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaVector2D", (void**)&__func);
	return __func(entityHandle, className, memberName, element);
}

static void SetEntSchemaVector2D(int32_t entityHandle, String* className, String* memberName, Vector2* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaVector2DFn)(int32_t, String*, String*, Vector2*, bool, int32_t);
	static SetEntSchemaVector2DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaVector2D", (void**)&__func);
	__func(entityHandle, className, memberName, value, changeState, element);
}

static Vector4 GetEntSchemaVector4D(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	typedef Vector4 (*GetEntSchemaVector4DFn)(int32_t, String*, String*, int32_t);
	static GetEntSchemaVector4DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaVector4D", (void**)&__func);
	return __func(entityHandle, className, memberName, element);
}

static void SetEntSchemaVector4D(int32_t entityHandle, String* className, String* memberName, Vector4* value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaVector4DFn)(int32_t, String*, String*, Vector4*, bool, int32_t);
	static SetEntSchemaVector4DFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaVector4D", (void**)&__func);
	__func(entityHandle, className, memberName, value, changeState, element);
}

static int32_t GetEntSchemaEnt(int32_t entityHandle, String* className, String* memberName, int32_t element) {
	typedef int32_t (*GetEntSchemaEntFn)(int32_t, String*, String*, int32_t);
	static GetEntSchemaEntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetEntSchemaEnt", (void**)&__func);
	return __func(entityHandle, className, memberName, element);
}

static void SetEntSchemaEnt(int32_t entityHandle, String* className, String* memberName, int32_t value, bool changeState, int32_t element) {
	typedef void (*SetEntSchemaEntFn)(int32_t, String*, String*, int32_t, bool, int32_t);
	static SetEntSchemaEntFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetEntSchemaEnt", (void**)&__func);
	__func(entityHandle, className, memberName, value, changeState, element);
}

static void NetworkStateChanged(int32_t entityHandle, String* className, String* memberName) {
	typedef void (*NetworkStateChangedFn)(int32_t, String*, String*);
	static NetworkStateChangedFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.NetworkStateChanged", (void**)&__func);
	__func(entityHandle, className, memberName);
}

