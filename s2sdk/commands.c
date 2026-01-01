#include "shared.h"

PLUGIFY_EXPORT bool (*__s2sdk_AddAdminCommand)(String*, int64_t, String*, int64_t, void*, uint8_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_AddConsoleCommand)(String*, String*, int64_t, void*, uint8_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_RemoveCommand)(String*, void*) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_AddCommandListener)(String*, void*, uint8_t) = NULL;


PLUGIFY_EXPORT bool (*__s2sdk_RemoveCommandListener)(String*, void*, uint8_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ServerCommand)(String*) = NULL;


PLUGIFY_EXPORT String (*__s2sdk_ServerCommandEx)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ClientCommand)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_FakeClientCommand)(int32_t, String*) = NULL;


PLUGIFY_EXPORT Vector (*__s2sdk_GetAllConCommands)(int64_t) = NULL;


PLUGIFY_EXPORT Vector (*__s2sdk_GetAllCommands)() = NULL;


