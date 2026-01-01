#include "shared.h"

PLUGIFY_EXPORT void (*__s2sdk_PrintToServer)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintToConsole)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintToChat)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintCenterText)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintAlertText)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintCentreHtml)(int32_t, String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintToConsoleAll)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintToChatAll)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintCenterTextAll)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintAlertTextAll)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintCentreHtmlAll)(String*, int32_t) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintToChatColored)(int32_t, String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_PrintToChatColoredAll)(String*) = NULL;


PLUGIFY_EXPORT void (*__s2sdk_ReplyToCommand)(int32_t, int32_t, String*) = NULL;


