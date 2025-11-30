#pragma once

#include "s2sdk.h"

static int32_t RegisterLoggingChannel(String* name, int32_t iFlags, int32_t verbosity, int32_t color) {
	typedef int32_t (*RegisterLoggingChannelFn)(String*, int32_t, int32_t, int32_t);
	static RegisterLoggingChannelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.RegisterLoggingChannel", (void**)&__func);
	return __func(name, iFlags, verbosity, color);
}

static void AddLoggerTagToChannel(int32_t channelID, String* tagName) {
	typedef void (*AddLoggerTagToChannelFn)(int32_t, String*);
	static AddLoggerTagToChannelFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.AddLoggerTagToChannel", (void**)&__func);
	__func(channelID, tagName);
}

static bool HasLoggerTag(int32_t channelID, String* tag) {
	typedef bool (*HasLoggerTagFn)(int32_t, String*);
	static HasLoggerTagFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.HasLoggerTag", (void**)&__func);
	return __func(channelID, tag);
}

static bool IsLoggerChannelEnabledBySeverity(int32_t channelID, int32_t severity) {
	typedef bool (*IsLoggerChannelEnabledBySeverityFn)(int32_t, int32_t);
	static IsLoggerChannelEnabledBySeverityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsLoggerChannelEnabledBySeverity", (void**)&__func);
	return __func(channelID, severity);
}

static bool IsLoggerChannelEnabledByVerbosity(int32_t channelID, int32_t verbosity) {
	typedef bool (*IsLoggerChannelEnabledByVerbosityFn)(int32_t, int32_t);
	static IsLoggerChannelEnabledByVerbosityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.IsLoggerChannelEnabledByVerbosity", (void**)&__func);
	return __func(channelID, verbosity);
}

static int32_t GetLoggerChannelVerbosity(int32_t channelID) {
	typedef int32_t (*GetLoggerChannelVerbosityFn)(int32_t);
	static GetLoggerChannelVerbosityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetLoggerChannelVerbosity", (void**)&__func);
	return __func(channelID);
}

static void SetLoggerChannelVerbosity(int32_t channelID, int32_t verbosity) {
	typedef void (*SetLoggerChannelVerbosityFn)(int32_t, int32_t);
	static SetLoggerChannelVerbosityFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetLoggerChannelVerbosity", (void**)&__func);
	__func(channelID, verbosity);
}

static void SetLoggerChannelVerbosityByName(int32_t channelID, String* name, int32_t verbosity) {
	typedef void (*SetLoggerChannelVerbosityByNameFn)(int32_t, String*, int32_t);
	static SetLoggerChannelVerbosityByNameFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetLoggerChannelVerbosityByName", (void**)&__func);
	__func(channelID, name, verbosity);
}

static void SetLoggerChannelVerbosityByTag(int32_t channelID, String* tag, int32_t verbosity) {
	typedef void (*SetLoggerChannelVerbosityByTagFn)(int32_t, String*, int32_t);
	static SetLoggerChannelVerbosityByTagFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetLoggerChannelVerbosityByTag", (void**)&__func);
	__func(channelID, tag, verbosity);
}

static int32_t GetLoggerChannelColor(int32_t channelID) {
	typedef int32_t (*GetLoggerChannelColorFn)(int32_t);
	static GetLoggerChannelColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetLoggerChannelColor", (void**)&__func);
	return __func(channelID);
}

static void SetLoggerChannelColor(int32_t channelID, int32_t color) {
	typedef void (*SetLoggerChannelColorFn)(int32_t, int32_t);
	static SetLoggerChannelColorFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetLoggerChannelColor", (void**)&__func);
	__func(channelID, color);
}

static int32_t GetLoggerChannelFlags(int32_t channelID) {
	typedef int32_t (*GetLoggerChannelFlagsFn)(int32_t);
	static GetLoggerChannelFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.GetLoggerChannelFlags", (void**)&__func);
	return __func(channelID);
}

static void SetLoggerChannelFlags(int32_t channelID, int32_t eFlags) {
	typedef void (*SetLoggerChannelFlagsFn)(int32_t, int32_t);
	static SetLoggerChannelFlagsFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.SetLoggerChannelFlags", (void**)&__func);
	__func(channelID, eFlags);
}

static int32_t Log(int32_t channelID, int32_t severity, String* message) {
	typedef int32_t (*LogFn)(int32_t, int32_t, String*);
	static LogFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.Log", (void**)&__func);
	return __func(channelID, severity, message);
}

static int32_t LogColored(int32_t channelID, int32_t severity, int32_t color, String* message) {
	typedef int32_t (*LogColoredFn)(int32_t, int32_t, int32_t, String*);
	static LogColoredFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.LogColored", (void**)&__func);
	return __func(channelID, severity, color, message);
}

static int32_t LogFull(int32_t channelID, int32_t severity, String* file, int32_t line, String* function, String* message) {
	typedef int32_t (*LogFullFn)(int32_t, int32_t, String*, int32_t, String*, String*);
	static LogFullFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.LogFull", (void**)&__func);
	return __func(channelID, severity, file, line, function, message);
}

static int32_t LogFullColored(int32_t channelID, int32_t severity, String* file, int32_t line, String* function, int32_t color, String* message) {
	typedef int32_t (*LogFullColoredFn)(int32_t, int32_t, String*, int32_t, String*, int32_t, String*);
	static LogFullColoredFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.LogFullColored", (void**)&__func);
	return __func(channelID, severity, file, line, function, color, message);
}

