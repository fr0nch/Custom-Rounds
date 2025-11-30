#pragma once

#include "s2sdk.h"

static void PrintToServer(String* msg) {
	typedef void (*PrintToServerFn)(String*);
	static PrintToServerFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintToServer", (void**)&__func);
	__func(msg);
}

static void PrintToConsole(int32_t playerSlot, String* message) {
	typedef void (*PrintToConsoleFn)(int32_t, String*);
	static PrintToConsoleFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintToConsole", (void**)&__func);
	__func(playerSlot, message);
}

static void PrintToChat(int32_t playerSlot, String* message) {
	typedef void (*PrintToChatFn)(int32_t, String*);
	static PrintToChatFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintToChat", (void**)&__func);
	__func(playerSlot, message);
}

static void PrintCenterText(int32_t playerSlot, String* message) {
	typedef void (*PrintCenterTextFn)(int32_t, String*);
	static PrintCenterTextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintCenterText", (void**)&__func);
	__func(playerSlot, message);
}

static void PrintAlertText(int32_t playerSlot, String* message) {
	typedef void (*PrintAlertTextFn)(int32_t, String*);
	static PrintAlertTextFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintAlertText", (void**)&__func);
	__func(playerSlot, message);
}

static void PrintCentreHtml(int32_t playerSlot, String* message, int32_t duration) {
	typedef void (*PrintCentreHtmlFn)(int32_t, String*, int32_t);
	static PrintCentreHtmlFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintCentreHtml", (void**)&__func);
	__func(playerSlot, message, duration);
}

static void PrintToConsoleAll(String* message) {
	typedef void (*PrintToConsoleAllFn)(String*);
	static PrintToConsoleAllFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintToConsoleAll", (void**)&__func);
	__func(message);
}

static void PrintToChatAll(String* message) {
	typedef void (*PrintToChatAllFn)(String*);
	static PrintToChatAllFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintToChatAll", (void**)&__func);
	__func(message);
}

static void PrintCenterTextAll(String* message) {
	typedef void (*PrintCenterTextAllFn)(String*);
	static PrintCenterTextAllFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintCenterTextAll", (void**)&__func);
	__func(message);
}

static void PrintAlertTextAll(String* message) {
	typedef void (*PrintAlertTextAllFn)(String*);
	static PrintAlertTextAllFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintAlertTextAll", (void**)&__func);
	__func(message);
}

static void PrintCentreHtmlAll(String* message, int32_t duration) {
	typedef void (*PrintCentreHtmlAllFn)(String*, int32_t);
	static PrintCentreHtmlAllFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintCentreHtmlAll", (void**)&__func);
	__func(message, duration);
}

static void PrintToChatColored(int32_t playerSlot, String* message) {
	typedef void (*PrintToChatColoredFn)(int32_t, String*);
	static PrintToChatColoredFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintToChatColored", (void**)&__func);
	__func(playerSlot, message);
}

static void PrintToChatColoredAll(String* message) {
	typedef void (*PrintToChatColoredAllFn)(String*);
	static PrintToChatColoredAllFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.PrintToChatColoredAll", (void**)&__func);
	__func(message);
}

static void ReplyToCommand(int32_t context, int32_t playerSlot, String* message) {
	typedef void (*ReplyToCommandFn)(int32_t, int32_t, String*);
	static ReplyToCommandFn __func = NULL;
	if (__func == NULL) Plugify_GetMethodPtr2("s2sdk.ReplyToCommand", (void**)&__func);
	__func(context, playerSlot, message);
}

