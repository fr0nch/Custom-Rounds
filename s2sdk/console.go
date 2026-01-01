package s2sdk

/*
#include "console.h"
#cgo noescape PrintToServer
#cgo noescape PrintToConsole
#cgo noescape PrintToChat
#cgo noescape PrintCenterText
#cgo noescape PrintAlertText
#cgo noescape PrintCentreHtml
#cgo noescape PrintToConsoleAll
#cgo noescape PrintToChatAll
#cgo noescape PrintCenterTextAll
#cgo noescape PrintAlertTextAll
#cgo noescape PrintCentreHtmlAll
#cgo noescape PrintToChatColored
#cgo noescape PrintToChatColoredAll
#cgo noescape ReplyToCommand
*/
import "C"
import (
	"errors"
	"github.com/untrustedmodders/go-plugify"
	"reflect"
	"runtime"
	"unsafe"
)

var _ = errors.New("")
var _ = reflect.TypeOf(0)
var _ = runtime.GOOS
var _ = unsafe.Sizeof(0)
var _ = plugify.Plugin.Loaded

// Generated from s2sdk (group: console)

// PrintToServer
//
//	@brief Sends a message to the server console.
//
//	@param msg: The message to be sent to the server console.
func PrintToServer(msg string) {
	__msg := plugify.ConstructString(msg)
	plugify.Block{
		Try: func() {
			C.PrintToServer((*C.String)(unsafe.Pointer(&__msg)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__msg)
		},
	}.Do()
}

// PrintToConsole
//
//	@brief Sends a message to a client's console.
//
//	@param playerSlot: The index of the player's slot to whom the message will be sent.
//	@param message: The message to be sent to the client's console.
func PrintToConsole(playerSlot int32, message string) {
	__playerSlot := C.int32_t(playerSlot)
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintToConsole(__playerSlot, (*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintToChat
//
//	@brief Prints a message to a specific client in the chat area.
//
//	@param playerSlot: The index of the player's slot to whom the message will be sent.
//	@param message: The message to be printed in the chat area.
func PrintToChat(playerSlot int32, message string) {
	__playerSlot := C.int32_t(playerSlot)
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintToChat(__playerSlot, (*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintCenterText
//
//	@brief Prints a message to a specific client in the center of the screen.
//
//	@param playerSlot: The index of the player's slot to whom the message will be sent.
//	@param message: The message to be printed in the center of the screen.
func PrintCenterText(playerSlot int32, message string) {
	__playerSlot := C.int32_t(playerSlot)
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintCenterText(__playerSlot, (*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintAlertText
//
//	@brief Prints a message to a specific client with an alert box.
//
//	@param playerSlot: The index of the player's slot to whom the message will be sent.
//	@param message: The message to be printed in the alert box.
func PrintAlertText(playerSlot int32, message string) {
	__playerSlot := C.int32_t(playerSlot)
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintAlertText(__playerSlot, (*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintCentreHtml
//
//	@brief Prints a html message to a specific client in the center of the screen.
//
//	@param playerSlot: The index of the player's slot to whom the message will be sent.
//	@param message: The HTML-formatted message to be printed.
//	@param duration: The duration of the message in seconds.
func PrintCentreHtml(playerSlot int32, message string, duration int32) {
	__playerSlot := C.int32_t(playerSlot)
	__message := plugify.ConstructString(message)
	__duration := C.int32_t(duration)
	plugify.Block{
		Try: func() {
			C.PrintCentreHtml(__playerSlot, (*C.String)(unsafe.Pointer(&__message)), __duration)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintToConsoleAll
//
//	@brief Sends a message to every client's console.
//
//	@param message: The message to be sent to all clients' consoles.
func PrintToConsoleAll(message string) {
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintToConsoleAll((*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintToChatAll
//
//	@brief Prints a message to all clients in the chat area.
//
//	@param message: The message to be printed in the chat area for all clients.
func PrintToChatAll(message string) {
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintToChatAll((*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintCenterTextAll
//
//	@brief Prints a message to all clients in the center of the screen.
//
//	@param message: The message to be printed in the center of the screen for all clients.
func PrintCenterTextAll(message string) {
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintCenterTextAll((*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintAlertTextAll
//
//	@brief Prints a message to all clients with an alert box.
//
//	@param message: The message to be printed in an alert box for all clients.
func PrintAlertTextAll(message string) {
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintAlertTextAll((*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintCentreHtmlAll
//
//	@brief Prints a html message to all clients in the center of the screen.
//
//	@param message: The HTML-formatted message to be printed in the center of the screen for all clients.
//	@param duration: The duration of the message in seconds.
func PrintCentreHtmlAll(message string, duration int32) {
	__message := plugify.ConstructString(message)
	__duration := C.int32_t(duration)
	plugify.Block{
		Try: func() {
			C.PrintCentreHtmlAll((*C.String)(unsafe.Pointer(&__message)), __duration)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintToChatColored
//
//	@brief Prints a colored message to a specific client in the chat area.
//
//	@param playerSlot: The index of the player's slot to whom the message will be sent.
//	@param message: The message to be printed in the chat area with color.
func PrintToChatColored(playerSlot int32, message string) {
	__playerSlot := C.int32_t(playerSlot)
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintToChatColored(__playerSlot, (*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// PrintToChatColoredAll
//
//	@brief Prints a colored message to all clients in the chat area.
//
//	@param message: The colored message to be printed in the chat area for all clients.
func PrintToChatColoredAll(message string) {
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.PrintToChatColoredAll((*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}

// ReplyToCommand
//
//	@brief Sends a reply message to a player or to the server console depending on the command context.
//
//	@param context: The context from which the command was called (e.g., Console or Chat).
//	@param playerSlot: The slot/index of the player receiving the message.
//	@param message: The message string to be sent as a reply.
func ReplyToCommand(context CommandCallingContext, playerSlot int32, message string) {
	__context := C.int32_t(context)
	__playerSlot := C.int32_t(playerSlot)
	__message := plugify.ConstructString(message)
	plugify.Block{
		Try: func() {
			C.ReplyToCommand(__context, __playerSlot, (*C.String)(unsafe.Pointer(&__message)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__message)
		},
	}.Do()
}
