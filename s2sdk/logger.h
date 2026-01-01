#pragma once

#include "shared.h"

extern int32_t (*__s2sdk_RegisterLoggingChannel)(String*, int32_t, int32_t, Vector4*);

static int32_t RegisterLoggingChannel(String* name, int32_t flags, int32_t verbosity, Vector4* color) {
	return __s2sdk_RegisterLoggingChannel(name, flags, verbosity, color);
}

extern void (*__s2sdk_AddLoggerTagToChannel)(int32_t, String*);

static void AddLoggerTagToChannel(int32_t channelID, String* tagName) {
	__s2sdk_AddLoggerTagToChannel(channelID, tagName);
}

extern bool (*__s2sdk_HasLoggerTag)(int32_t, String*);

static bool HasLoggerTag(int32_t channelID, String* tag) {
	return __s2sdk_HasLoggerTag(channelID, tag);
}

extern bool (*__s2sdk_IsLoggerChannelEnabledBySeverity)(int32_t, int32_t);

static bool IsLoggerChannelEnabledBySeverity(int32_t channelID, int32_t severity) {
	return __s2sdk_IsLoggerChannelEnabledBySeverity(channelID, severity);
}

extern bool (*__s2sdk_IsLoggerChannelEnabledByVerbosity)(int32_t, int32_t);

static bool IsLoggerChannelEnabledByVerbosity(int32_t channelID, int32_t verbosity) {
	return __s2sdk_IsLoggerChannelEnabledByVerbosity(channelID, verbosity);
}

extern int32_t (*__s2sdk_GetLoggerChannelVerbosity)(int32_t);

static int32_t GetLoggerChannelVerbosity(int32_t channelID) {
	return __s2sdk_GetLoggerChannelVerbosity(channelID);
}

extern void (*__s2sdk_SetLoggerChannelVerbosity)(int32_t, int32_t);

static void SetLoggerChannelVerbosity(int32_t channelID, int32_t verbosity) {
	__s2sdk_SetLoggerChannelVerbosity(channelID, verbosity);
}

extern void (*__s2sdk_SetLoggerChannelVerbosityByName)(int32_t, String*, int32_t);

static void SetLoggerChannelVerbosityByName(int32_t channelID, String* name, int32_t verbosity) {
	__s2sdk_SetLoggerChannelVerbosityByName(channelID, name, verbosity);
}

extern void (*__s2sdk_SetLoggerChannelVerbosityByTag)(int32_t, String*, int32_t);

static void SetLoggerChannelVerbosityByTag(int32_t channelID, String* tag, int32_t verbosity) {
	__s2sdk_SetLoggerChannelVerbosityByTag(channelID, tag, verbosity);
}

extern Vector4 (*__s2sdk_GetLoggerChannelColor)(int32_t);

static Vector4 GetLoggerChannelColor(int32_t channelID) {
	return __s2sdk_GetLoggerChannelColor(channelID);
}

extern void (*__s2sdk_SetLoggerChannelColor)(int32_t, Vector4*);

static void SetLoggerChannelColor(int32_t channelID, Vector4* color) {
	__s2sdk_SetLoggerChannelColor(channelID, color);
}

extern int32_t (*__s2sdk_GetLoggerChannelFlags)(int32_t);

static int32_t GetLoggerChannelFlags(int32_t channelID) {
	return __s2sdk_GetLoggerChannelFlags(channelID);
}

extern void (*__s2sdk_SetLoggerChannelFlags)(int32_t, int32_t);

static void SetLoggerChannelFlags(int32_t channelID, int32_t eFlags) {
	__s2sdk_SetLoggerChannelFlags(channelID, eFlags);
}

extern int32_t (*__s2sdk_Log)(int32_t, int32_t, String*);

static int32_t Log(int32_t channelID, int32_t severity, String* message) {
	return __s2sdk_Log(channelID, severity, message);
}

extern int32_t (*__s2sdk_LogColored)(int32_t, int32_t, Vector4*, String*);

static int32_t LogColored(int32_t channelID, int32_t severity, Vector4* color, String* message) {
	return __s2sdk_LogColored(channelID, severity, color, message);
}

extern int32_t (*__s2sdk_LogFull)(int32_t, int32_t, String*, int32_t, String*, String*);

static int32_t LogFull(int32_t channelID, int32_t severity, String* file, int32_t line, String* function, String* message) {
	return __s2sdk_LogFull(channelID, severity, file, line, function, message);
}

extern int32_t (*__s2sdk_LogFullColored)(int32_t, int32_t, String*, int32_t, String*, Vector4*, String*);

static int32_t LogFullColored(int32_t channelID, int32_t severity, String* file, int32_t line, String* function, Vector4* color, String* message) {
	return __s2sdk_LogFullColored(channelID, severity, file, line, function, color, message);
}

