package s2sdk

/*
#include "commands.h"
#cgo noescape AddAdminCommand
#cgo noescape AddConsoleCommand
#cgo noescape RemoveCommand
#cgo noescape AddCommandListener
#cgo noescape RemoveCommandListener
#cgo noescape ServerCommand
#cgo noescape ServerCommandEx
#cgo noescape ClientCommand
#cgo noescape FakeClientCommand
#cgo noescape GetAllConCommands
#cgo noescape GetAllCommands
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

// Generated from s2sdk (group: commands)

// AddAdminCommand
//
//	@brief Creates a console command as an administrative command.
//
//	@param name: The name of the console command.
//	@param adminFlags: The admin flags that indicate which admin level can use this command.
//	@param description: A brief description of what the command does.
//	@param flags: Command flags that define the behavior of the command.
//	@param callback: A callback function that is invoked when the command is executed.
//	@param type_: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return true if the command was successfully created; otherwise, false.
func AddAdminCommand(name string, adminFlags int64, description string, flags ConVarFlag, callback CommandCallback, type_ HookMode) bool {
	var __retVal bool
	__name := plugify.ConstructString(name)
	__adminFlags := C.int64_t(adminFlags)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.AddAdminCommand((*C.String)(unsafe.Pointer(&__name)), __adminFlags, (*C.String)(unsafe.Pointer(&__description)), __flags, __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// AddConsoleCommand
//
//	@brief Creates a console command or hooks an already existing one.
//
//	@param name: The name of the console command.
//	@param description: A brief description of what the command does.
//	@param flags: Command flags that define the behavior of the command.
//	@param callback: A callback function that is invoked when the command is executed.
//	@param type_: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return true if the command was successfully created; otherwise, false.
func AddConsoleCommand(name string, description string, flags ConVarFlag, callback CommandCallback, type_ HookMode) bool {
	var __retVal bool
	__name := plugify.ConstructString(name)
	__description := plugify.ConstructString(description)
	__flags := C.int64_t(flags)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.AddConsoleCommand((*C.String)(unsafe.Pointer(&__name)), (*C.String)(unsafe.Pointer(&__description)), __flags, __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
			plugify.DestroyString(&__description)
		},
	}.Do()
	return __retVal
}

// RemoveCommand
//
//	@brief Removes a console command from the system.
//
//	@param name: The name of the command to be removed.
//	@param callback: The callback function associated with the command to be removed.
//
//	@return true if the command was successfully removed; otherwise, false.
func RemoveCommand(name string, callback CommandCallback) bool {
	var __retVal bool
	__name := plugify.ConstructString(name)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.RemoveCommand((*C.String)(unsafe.Pointer(&__name)), __callback))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// AddCommandListener
//
//	@brief Adds a callback that will fire when a command is sent to the server.
//
//	@param name: The name of the command.
//	@param callback: The callback function that will be invoked when the command is executed.
//	@param type_: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return Returns true if the callback was successfully added, false otherwise.
func AddCommandListener(name string, callback CommandCallback, type_ HookMode) bool {
	var __retVal bool
	__name := plugify.ConstructString(name)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.AddCommandListener((*C.String)(unsafe.Pointer(&__name)), __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// RemoveCommandListener
//
//	@brief Removes a callback that fires when a command is sent to the server.
//
//	@param name: The name of the command.
//	@param callback: The callback function to be removed.
//	@param type_: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return Returns true if the callback was successfully removed, false otherwise.
func RemoveCommandListener(name string, callback CommandCallback, type_ HookMode) bool {
	var __retVal bool
	__name := plugify.ConstructString(name)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__type_ := C.uint8_t(type_)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.RemoveCommandListener((*C.String)(unsafe.Pointer(&__name)), __callback, __type_))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__name)
		},
	}.Do()
	return __retVal
}

// ServerCommand
//
//	@brief Executes a server command as if it were run on the server console or through RCON.
//
//	@param command: The command to execute on the server.
func ServerCommand(command string) {
	__command := plugify.ConstructString(command)
	plugify.Block{
		Try: func() {
			C.ServerCommand((*C.String)(unsafe.Pointer(&__command)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__command)
		},
	}.Do()
}

// ServerCommandEx
//
//	@brief Executes a server command as if it were on the server console (or RCON) and stores the printed text into buffer.
//
//	@param command: The command to execute on the server.
//
//	@return String to store command result into.
func ServerCommandEx(command string) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__command := plugify.ConstructString(command)
	plugify.Block{
		Try: func() {
			__native := C.ServerCommandEx((*C.String)(unsafe.Pointer(&__command)))
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
			plugify.DestroyString(&__command)
		},
	}.Do()
	return __retVal
}

// ClientCommand
//
//	@brief Executes a client command.
//
//	@param playerSlot: The index of the client executing the command.
//	@param command: The command to execute on the client.
func ClientCommand(playerSlot int32, command string) {
	__playerSlot := C.int32_t(playerSlot)
	__command := plugify.ConstructString(command)
	plugify.Block{
		Try: func() {
			C.ClientCommand(__playerSlot, (*C.String)(unsafe.Pointer(&__command)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__command)
		},
	}.Do()
}

// FakeClientCommand
//
//	@brief Executes a client command on the server without network communication.
//
//	@param playerSlot: The index of the client.
//	@param command: The command to be executed by the client.
func FakeClientCommand(playerSlot int32, command string) {
	__playerSlot := C.int32_t(playerSlot)
	__command := plugify.ConstructString(command)
	plugify.Block{
		Try: func() {
			C.FakeClientCommand(__playerSlot, (*C.String)(unsafe.Pointer(&__command)))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__command)
		},
	}.Do()
}

// GetAllConCommands
//
//	@brief  Returns the names of all registered console commands and cvars.
//
//	@param flags: Additional flags for the console variable.
//
//	@return The vector of command/cvar names.
func GetAllConCommands(flags ConVarFlag) []string {
	var __retVal []string
	var __retVal_native plugify.PlgVector
	__flags := C.int64_t(flags)
	plugify.Block{
		Try: func() {
			__native := C.GetAllConCommands(__flags)
			__retVal_native = *(*plugify.PlgVector)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetVectorDataString(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorString(&__retVal_native)
		},
	}.Do()
	return __retVal
}

// GetAllCommands
//
//	@brief Returns all console commands registered by this plugin.
//
//
//	@return The vector of ConCommand names.
func GetAllCommands() []string {
	var __retVal []string
	var __retVal_native plugify.PlgVector
	plugify.Block{
		Try: func() {
			__native := C.GetAllCommands()
			__retVal_native = *(*plugify.PlgVector)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetVectorDataString(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyVectorString(&__retVal_native)
		},
	}.Do()
	return __retVal
}
