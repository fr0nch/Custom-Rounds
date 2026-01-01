#pragma once

#include "shared.h"

extern void (*__s2sdk_PrintToServer)(String*);

static void PrintToServer(String* msg) {
	__s2sdk_PrintToServer(msg);
}

extern void (*__s2sdk_PrintToConsole)(int32_t, String*);

static void PrintToConsole(int32_t playerSlot, String* message) {
	__s2sdk_PrintToConsole(playerSlot, message);
}

extern void (*__s2sdk_PrintToChat)(int32_t, String*);

static void PrintToChat(int32_t playerSlot, String* message) {
	__s2sdk_PrintToChat(playerSlot, message);
}

extern void (*__s2sdk_PrintCenterText)(int32_t, String*);

static void PrintCenterText(int32_t playerSlot, String* message) {
	__s2sdk_PrintCenterText(playerSlot, message);
}

extern void (*__s2sdk_PrintAlertText)(int32_t, String*);

static void PrintAlertText(int32_t playerSlot, String* message) {
	__s2sdk_PrintAlertText(playerSlot, message);
}

extern void (*__s2sdk_PrintCentreHtml)(int32_t, String*, int32_t);

static void PrintCentreHtml(int32_t playerSlot, String* message, int32_t duration) {
	__s2sdk_PrintCentreHtml(playerSlot, message, duration);
}

extern void (*__s2sdk_PrintToConsoleAll)(String*);

static void PrintToConsoleAll(String* message) {
	__s2sdk_PrintToConsoleAll(message);
}

extern void (*__s2sdk_PrintToChatAll)(String*);

static void PrintToChatAll(String* message) {
	__s2sdk_PrintToChatAll(message);
}

extern void (*__s2sdk_PrintCenterTextAll)(String*);

static void PrintCenterTextAll(String* message) {
	__s2sdk_PrintCenterTextAll(message);
}

extern void (*__s2sdk_PrintAlertTextAll)(String*);

static void PrintAlertTextAll(String* message) {
	__s2sdk_PrintAlertTextAll(message);
}

extern void (*__s2sdk_PrintCentreHtmlAll)(String*, int32_t);

static void PrintCentreHtmlAll(String* message, int32_t duration) {
	__s2sdk_PrintCentreHtmlAll(message, duration);
}

extern void (*__s2sdk_PrintToChatColored)(int32_t, String*);

static void PrintToChatColored(int32_t playerSlot, String* message) {
	__s2sdk_PrintToChatColored(playerSlot, message);
}

extern void (*__s2sdk_PrintToChatColoredAll)(String*);

static void PrintToChatColoredAll(String* message) {
	__s2sdk_PrintToChatColoredAll(message);
}

extern void (*__s2sdk_ReplyToCommand)(int32_t, int32_t, String*);

static void ReplyToCommand(int32_t context, int32_t playerSlot, String* message) {
	__s2sdk_ReplyToCommand(context, playerSlot, message);
}

