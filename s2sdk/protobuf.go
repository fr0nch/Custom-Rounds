package s2sdk

/*
#include "protobuf.h"
#cgo noescape HookUserMessage
#cgo noescape UnhookUserMessage
#cgo noescape UserMessageCreateFromSerializable
#cgo noescape UserMessageCreateFromName
#cgo noescape UserMessageCreateFromId
#cgo noescape UserMessageDestroy
#cgo noescape UserMessageSend
#cgo noescape UserMessageGetMessageName
#cgo noescape UserMessageGetMessageID
#cgo noescape UserMessageHasField
#cgo noescape UserMessageGetProtobufMessage
#cgo noescape UserMessageGetSerializableMessage
#cgo noescape UserMessageFindMessageIdByName
#cgo noescape UserMessageGetRecipientMask
#cgo noescape UserMessageAddRecipient
#cgo noescape UserMessageAddAllPlayers
#cgo noescape UserMessageSetRecipientMask
#cgo noescape UserMessageGetMessage
#cgo noescape UserMessageGetRepeatedMessage
#cgo noescape UserMessageAddMessage
#cgo noescape UserMessageGetRepeatedFieldCount
#cgo noescape UserMessageRemoveRepeatedFieldValue
#cgo noescape UserMessageGetDebugString
#cgo noescape PbReadEnum
#cgo noescape PbReadInt32
#cgo noescape PbReadInt64
#cgo noescape PbReadUInt32
#cgo noescape PbReadUInt64
#cgo noescape PbReadFloat
#cgo noescape PbReadDouble
#cgo noescape PbReadBool
#cgo noescape PbReadString
#cgo noescape PbReadColor
#cgo noescape PbReadVector2
#cgo noescape PbReadVector3
#cgo noescape PbReadVector4
#cgo noescape PbReadQAngle
#cgo noescape PbGetEnum
#cgo noescape PbSetEnum
#cgo noescape PbGetInt32
#cgo noescape PbSetInt32
#cgo noescape PbGetInt64
#cgo noescape PbSetInt64
#cgo noescape PbGetUInt32
#cgo noescape PbSetUInt32
#cgo noescape PbGetUInt64
#cgo noescape PbSetUInt64
#cgo noescape PbGetBool
#cgo noescape PbSetBool
#cgo noescape PbGetFloat
#cgo noescape PbSetFloat
#cgo noescape PbGetDouble
#cgo noescape PbSetDouble
#cgo noescape PbGetString
#cgo noescape PbSetString
#cgo noescape PbGetColor
#cgo noescape PbSetColor
#cgo noescape PbGetVector2
#cgo noescape PbSetVector2
#cgo noescape PbGetVector3
#cgo noescape PbSetVector3
#cgo noescape PbGetVector4
#cgo noescape PbSetVector4
#cgo noescape PbGetQAngle
#cgo noescape PbSetQAngle
#cgo noescape PbGetRepeatedEnum
#cgo noescape PbSetRepeatedEnum
#cgo noescape PbAddEnum
#cgo noescape PbGetRepeatedInt32
#cgo noescape PbSetRepeatedInt32
#cgo noescape PbAddInt32
#cgo noescape PbGetRepeatedInt64
#cgo noescape PbSetRepeatedInt64
#cgo noescape PbAddInt64
#cgo noescape PbGetRepeatedUInt32
#cgo noescape PbSetRepeatedUInt32
#cgo noescape PbAddUInt32
#cgo noescape PbGetRepeatedUInt64
#cgo noescape PbSetRepeatedUInt64
#cgo noescape PbAddUInt64
#cgo noescape PbGetRepeatedBool
#cgo noescape PbSetRepeatedBool
#cgo noescape PbAddBool
#cgo noescape PbGetRepeatedFloat
#cgo noescape PbSetRepeatedFloat
#cgo noescape PbAddFloat
#cgo noescape PbGetRepeatedDouble
#cgo noescape PbSetRepeatedDouble
#cgo noescape PbAddDouble
#cgo noescape PbGetRepeatedString
#cgo noescape PbSetRepeatedString
#cgo noescape PbAddString
#cgo noescape PbGetRepeatedColor
#cgo noescape PbSetRepeatedColor
#cgo noescape PbAddColor
#cgo noescape PbGetRepeatedVector2
#cgo noescape PbSetRepeatedVector2
#cgo noescape PbAddVector2
#cgo noescape PbGetRepeatedVector3
#cgo noescape PbSetRepeatedVector3
#cgo noescape PbAddVector3
#cgo noescape PbGetRepeatedVector4
#cgo noescape PbSetRepeatedVector4
#cgo noescape PbAddVector4
#cgo noescape PbGetRepeatedQAngle
#cgo noescape PbSetRepeatedQAngle
#cgo noescape PbAddQAngle
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

// Generated from s2sdk (group: protobuf)

// HookUserMessage
//
//	@brief Hooks a user message with a callback.
//
//	@param messageId: The ID of the message to hook.
//	@param callback: The callback function to invoke when the message is received.
//	@param mode: Whether to hook the message in the post mode (after processing) or pre mode (before processing).
//
//	@return True if the hook was successfully added, false otherwise.
func HookUserMessage(messageId int16, callback UserMessageCallback, mode HookMode) bool {
	var __retVal bool
	__messageId := C.int16_t(messageId)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__mode := C.uint8_t(mode)
	__retVal = bool(C.HookUserMessage(__messageId, __callback, __mode))
	return __retVal
}

// UnhookUserMessage
//
//	@brief Unhooks a previously hooked user message.
//
//	@param messageId: The ID of the message to unhook.
//	@param callback: The callback function to remove.
//	@param mode: Whether the hook was in post mode (after processing) or pre mode (before processing).
//
//	@return True if the hook was successfully removed, false otherwise.
func UnhookUserMessage(messageId int16, callback UserMessageCallback, mode HookMode) bool {
	var __retVal bool
	__messageId := C.int16_t(messageId)
	__callback := plugify.GetFunctionPointerForDelegate(callback)
	__mode := C.uint8_t(mode)
	__retVal = bool(C.UnhookUserMessage(__messageId, __callback, __mode))
	return __retVal
}

// UserMessageCreateFromSerializable
//
//	@brief Creates a UserMessage from a serializable message.
//
//	@param msgSerializable: The serializable message.
//	@param message: The network message.
//	@param recipientMask: The recipient mask.
//
//	@return A pointer to the newly created UserMessage.
func UserMessageCreateFromSerializable(msgSerializable uintptr, message uintptr, recipientMask uint64) uintptr {
	var __retVal uintptr
	__msgSerializable := C.uintptr_t(msgSerializable)
	__message := C.uintptr_t(message)
	__recipientMask := C.uint64_t(recipientMask)
	__retVal = uintptr(C.UserMessageCreateFromSerializable(__msgSerializable, __message, __recipientMask))
	return __retVal
}

// UserMessageCreateFromName
//
//	@brief Creates a UserMessage from a message name.
//
//	@param messageName: The name of the message.
//
//	@return A pointer to the newly created UserMessage.
func UserMessageCreateFromName(messageName string) uintptr {
	var __retVal uintptr
	__messageName := plugify.ConstructString(messageName)
	plugify.Block{
		Try: func() {
			__retVal = uintptr(C.UserMessageCreateFromName((*C.String)(unsafe.Pointer(&__messageName))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__messageName)
		},
	}.Do()
	return __retVal
}

// UserMessageCreateFromId
//
//	@brief Creates a UserMessage from a message ID.
//
//	@param messageId: The ID of the message.
//
//	@return A pointer to the newly created UserMessage.
func UserMessageCreateFromId(messageId int16) uintptr {
	var __retVal uintptr
	__messageId := C.int16_t(messageId)
	__retVal = uintptr(C.UserMessageCreateFromId(__messageId))
	return __retVal
}

// UserMessageDestroy
//
//	@brief Destroys a UserMessage and frees its memory.
//
//	@param userMessage: The UserMessage to destroy.
func UserMessageDestroy(userMessage uintptr) {
	__userMessage := C.uintptr_t(userMessage)
	C.UserMessageDestroy(__userMessage)
}

// UserMessageSend
//
//	@brief Sends a UserMessage to the specified recipients.
//
//	@param userMessage: The UserMessage to send.
func UserMessageSend(userMessage uintptr) {
	__userMessage := C.uintptr_t(userMessage)
	C.UserMessageSend(__userMessage)
}

// UserMessageGetMessageName
//
//	@brief Gets the name of the message.
//
//	@param userMessage: The UserMessage instance.
//
//	@return The name of the message as a string.
func UserMessageGetMessageName(userMessage uintptr) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__userMessage := C.uintptr_t(userMessage)
	plugify.Block{
		Try: func() {
			__native := C.UserMessageGetMessageName(__userMessage)
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
		},
	}.Do()
	return __retVal
}

// UserMessageGetMessageID
//
//	@brief Gets the ID of the message.
//
//	@param userMessage: The UserMessage instance.
//
//	@return The ID of the message.
func UserMessageGetMessageID(userMessage uintptr) int16 {
	var __retVal int16
	__userMessage := C.uintptr_t(userMessage)
	__retVal = int16(C.UserMessageGetMessageID(__userMessage))
	return __retVal
}

// UserMessageHasField
//
//	@brief Checks if the message has a specific field.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field to check.
//
//	@return True if the field exists, false otherwise.
func UserMessageHasField(userMessage uintptr, fieldName string) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.UserMessageHasField(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// UserMessageGetProtobufMessage
//
//	@brief Gets the protobuf message associated with the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//
//	@return A pointer to the protobuf message.
func UserMessageGetProtobufMessage(userMessage uintptr) uintptr {
	var __retVal uintptr
	__userMessage := C.uintptr_t(userMessage)
	__retVal = uintptr(C.UserMessageGetProtobufMessage(__userMessage))
	return __retVal
}

// UserMessageGetSerializableMessage
//
//	@brief Gets the serializable message associated with the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//
//	@return A pointer to the serializable message.
func UserMessageGetSerializableMessage(userMessage uintptr) uintptr {
	var __retVal uintptr
	__userMessage := C.uintptr_t(userMessage)
	__retVal = uintptr(C.UserMessageGetSerializableMessage(__userMessage))
	return __retVal
}

// UserMessageFindMessageIdByName
//
//	@brief Finds a message ID by its name.
//
//	@param messageName: The name of the message.
//
//	@return The ID of the message, or 0 if the message was not found.
func UserMessageFindMessageIdByName(messageName string) int16 {
	var __retVal int16
	__messageName := plugify.ConstructString(messageName)
	plugify.Block{
		Try: func() {
			__retVal = int16(C.UserMessageFindMessageIdByName((*C.String)(unsafe.Pointer(&__messageName))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__messageName)
		},
	}.Do()
	return __retVal
}

// UserMessageGetRecipientMask
//
//	@brief Gets the recipient mask for the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//
//	@return The recipient mask.
func UserMessageGetRecipientMask(userMessage uintptr) uint64 {
	var __retVal uint64
	__userMessage := C.uintptr_t(userMessage)
	__retVal = uint64(C.UserMessageGetRecipientMask(__userMessage))
	return __retVal
}

// UserMessageAddRecipient
//
//	@brief Adds a single recipient (player) to the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param playerSlot: The slot index of the player to add as a recipient.
func UserMessageAddRecipient(userMessage uintptr, playerSlot int32) {
	__userMessage := C.uintptr_t(userMessage)
	__playerSlot := C.int32_t(playerSlot)
	C.UserMessageAddRecipient(__userMessage, __playerSlot)
}

// UserMessageAddAllPlayers
//
//	@brief Adds all connected players as recipients to the UserMessage.
//
//	@param userMessage: The UserMessage instance.
func UserMessageAddAllPlayers(userMessage uintptr) {
	__userMessage := C.uintptr_t(userMessage)
	C.UserMessageAddAllPlayers(__userMessage)
}

// UserMessageSetRecipientMask
//
//	@brief Sets the recipient mask for the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param mask: The recipient mask to set.
func UserMessageSetRecipientMask(userMessage uintptr, mask uint64) {
	__userMessage := C.uintptr_t(userMessage)
	__mask := C.uint64_t(mask)
	C.UserMessageSetRecipientMask(__userMessage, __mask)
}

// UserMessageGetMessage
//
//	@brief Gets a nested message from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param message: A pointer to store the retrieved message.
//
//	@return True if the message was successfully retrieved, false otherwise.
func UserMessageGetMessage(userMessage uintptr, fieldName string, message *uintptr) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__message := C.uintptr_t(*message)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.UserMessageGetMessage(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__message))
			// Unmarshal - Convert native data to managed data.
			*message = uintptr(__message)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// UserMessageGetRepeatedMessage
//
//	@brief Gets a repeated nested message from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param message: A pointer to store the retrieved message.
//
//	@return True if the message was successfully retrieved, false otherwise.
func UserMessageGetRepeatedMessage(userMessage uintptr, fieldName string, index int32, message *uintptr) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__message := C.uintptr_t(*message)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.UserMessageGetRepeatedMessage(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__message))
			// Unmarshal - Convert native data to managed data.
			*message = uintptr(__message)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// UserMessageAddMessage
//
//	@brief Adds a nested message to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param message: A pointer to the message to add.
//
//	@return True if the message was successfully added, false otherwise.
func UserMessageAddMessage(userMessage uintptr, fieldName string, message uintptr) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__message := C.uintptr_t(message)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.UserMessageAddMessage(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __message))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// UserMessageGetRepeatedFieldCount
//
//	@brief Gets the count of repeated fields in a field of the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//
//	@return The count of repeated fields, or -1 if the field is not repeated or does not exist.
func UserMessageGetRepeatedFieldCount(userMessage uintptr, fieldName string) int32 {
	var __retVal int32
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.UserMessageGetRepeatedFieldCount(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// UserMessageRemoveRepeatedFieldValue
//
//	@brief Removes a value from a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the value to remove.
//
//	@return True if the value was successfully removed, false otherwise.
func UserMessageRemoveRepeatedFieldValue(userMessage uintptr, fieldName string, index int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.UserMessageRemoveRepeatedFieldValue(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// UserMessageGetDebugString
//
//	@brief Gets the debug string representation of the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//
//	@return The debug string as a string.
func UserMessageGetDebugString(userMessage uintptr) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__userMessage := C.uintptr_t(userMessage)
	plugify.Block{
		Try: func() {
			__native := C.UserMessageGetDebugString(__userMessage)
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
		},
	}.Do()
	return __retVal
}

// PbReadEnum
//
//	@brief Reads an enum value from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The integer representation of the enum value, or 0 if invalid.
func PbReadEnum(userMessage uintptr, fieldName string, index int32) int32 {
	var __retVal int32
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.PbReadEnum(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadInt32
//
//	@brief Reads a 32-bit integer from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The int32_t value read, or 0 if invalid.
func PbReadInt32(userMessage uintptr, fieldName string, index int32) int32 {
	var __retVal int32
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = int32(C.PbReadInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadInt64
//
//	@brief Reads a 64-bit integer from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The int64_t value read, or 0 if invalid.
func PbReadInt64(userMessage uintptr, fieldName string, index int32) int64 {
	var __retVal int64
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = int64(C.PbReadInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadUInt32
//
//	@brief Reads an unsigned 32-bit integer from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The uint32_t value read, or 0 if invalid.
func PbReadUInt32(userMessage uintptr, fieldName string, index int32) uint32 {
	var __retVal uint32
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = uint32(C.PbReadUInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadUInt64
//
//	@brief Reads an unsigned 64-bit integer from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The uint64_t value read, or 0 if invalid.
func PbReadUInt64(userMessage uintptr, fieldName string, index int32) uint64 {
	var __retVal uint64
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = uint64(C.PbReadUInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadFloat
//
//	@brief Reads a floating-point value from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The float value read, or 0.0 if invalid.
func PbReadFloat(userMessage uintptr, fieldName string, index int32) float32 {
	var __retVal float32
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = float32(C.PbReadFloat(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadDouble
//
//	@brief Reads a double-precision floating-point value from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The double value read, or 0.0 if invalid.
func PbReadDouble(userMessage uintptr, fieldName string, index int32) float64 {
	var __retVal float64
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = float64(C.PbReadDouble(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadBool
//
//	@brief Reads a boolean value from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The boolean value read, or false if invalid.
func PbReadBool(userMessage uintptr, fieldName string, index int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbReadBool(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadString
//
//	@brief Reads a string from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The string value read, or an empty string if invalid.
func PbReadString(userMessage uintptr, fieldName string, index int32) string {
	var __retVal string
	var __retVal_native plugify.PlgString
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__native := C.PbReadString(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index)
			__retVal_native = *(*plugify.PlgString)(unsafe.Pointer(&__native))
			// Unmarshal - Convert native data to managed data.
			__retVal = plugify.GetStringData(&__retVal_native)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__retVal_native)
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadColor
//
//	@brief Reads a color value from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The color value read, or an empty value if invalid.
func PbReadColor(userMessage uintptr, fieldName string, index int32) plugify.Vector4 {
	var __retVal plugify.Vector4
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__native := C.PbReadColor(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index)
			__retVal = *(*plugify.Vector4)(unsafe.Pointer(&__native))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadVector2
//
//	@brief Reads a 2D vector from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The 2D vector value read, or an empty value if invalid.
func PbReadVector2(userMessage uintptr, fieldName string, index int32) plugify.Vector2 {
	var __retVal plugify.Vector2
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__native := C.PbReadVector2(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index)
			__retVal = *(*plugify.Vector2)(unsafe.Pointer(&__native))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadVector3
//
//	@brief Reads a 3D vector from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The 3D vector value read, or an empty value if invalid.
func PbReadVector3(userMessage uintptr, fieldName string, index int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__native := C.PbReadVector3(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index)
			__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadVector4
//
//	@brief Reads a 4D vector from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The 4D vector value read, or an empty value if invalid.
func PbReadVector4(userMessage uintptr, fieldName string, index int32) plugify.Vector4 {
	var __retVal plugify.Vector4
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__native := C.PbReadVector4(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index)
			__retVal = *(*plugify.Vector4)(unsafe.Pointer(&__native))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbReadQAngle
//
//	@brief Reads a QAngle (rotation vector) from a UserMessage.
//
//	@param userMessage: Pointer to the UserMessage object.
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//
//	@return The QAngle value read, or an empty value if invalid.
func PbReadQAngle(userMessage uintptr, fieldName string, index int32) plugify.Vector3 {
	var __retVal plugify.Vector3
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	plugify.Block{
		Try: func() {
			__native := C.PbReadQAngle(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index)
			__retVal = *(*plugify.Vector3)(unsafe.Pointer(&__native))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetEnum
//
//	@brief Gets a enum value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetEnum(userMessage uintptr, fieldName string, out *int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.int32_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetEnum(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = int32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetEnum
//
//	@brief Sets a enum value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetEnum(userMessage uintptr, fieldName string, value int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetEnum(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetInt32
//
//	@brief Gets a 32-bit integer value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetInt32(userMessage uintptr, fieldName string, out *int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.int32_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = int32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetInt32
//
//	@brief Sets a 32-bit integer value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetInt32(userMessage uintptr, fieldName string, value int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetInt64
//
//	@brief Gets a 64-bit integer value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetInt64(userMessage uintptr, fieldName string, out *int64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.int64_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = int64(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetInt64
//
//	@brief Sets a 64-bit integer value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetInt64(userMessage uintptr, fieldName string, value int64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.int64_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetUInt32
//
//	@brief Gets an unsigned 32-bit integer value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetUInt32(userMessage uintptr, fieldName string, out *uint32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.uint32_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetUInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = uint32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetUInt32
//
//	@brief Sets an unsigned 32-bit integer value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetUInt32(userMessage uintptr, fieldName string, value uint32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.uint32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetUInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetUInt64
//
//	@brief Gets an unsigned 64-bit integer value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetUInt64(userMessage uintptr, fieldName string, out *uint64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.uint64_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetUInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = uint64(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetUInt64
//
//	@brief Sets an unsigned 64-bit integer value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetUInt64(userMessage uintptr, fieldName string, value uint64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.uint64_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetUInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetBool
//
//	@brief Gets a bool value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetBool(userMessage uintptr, fieldName string, out *bool) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.bool(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetBool(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = bool(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetBool
//
//	@brief Sets a bool value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetBool(userMessage uintptr, fieldName string, value bool) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.bool(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetBool(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetFloat
//
//	@brief Gets a float value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetFloat(userMessage uintptr, fieldName string, out *float32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.float(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetFloat(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = float32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetFloat
//
//	@brief Sets a float value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetFloat(userMessage uintptr, fieldName string, value float32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.float(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetFloat(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetDouble
//
//	@brief Gets a double value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetDouble(userMessage uintptr, fieldName string, out *float64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := C.double(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetDouble(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = float64(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetDouble
//
//	@brief Sets a double value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetDouble(userMessage uintptr, fieldName string, value float64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.double(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetDouble(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetString
//
//	@brief Gets a string value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output string.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetString(userMessage uintptr, fieldName string, out *string) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := plugify.ConstructString(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetString(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), (*C.String)(unsafe.Pointer(&__out))))
			// Unmarshal - Convert native data to managed data.
			*out = plugify.GetStringData(&__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
			plugify.DestroyString(&__out)
		},
	}.Do()
	return __retVal
}

// PbSetString
//
//	@brief Sets a string value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetString(userMessage uintptr, fieldName string, value string) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := plugify.ConstructString(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetString(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), (*C.String)(unsafe.Pointer(&__value))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
			plugify.DestroyString(&__value)
		},
	}.Do()
	return __retVal
}

// PbGetColor
//
//	@brief Gets a color value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output string.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetColor(userMessage uintptr, fieldName string, out *plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := *(*C.Vector4)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetColor(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector4)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetColor
//
//	@brief Sets a color value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetColor(userMessage uintptr, fieldName string, value plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector4)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetColor(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetVector2
//
//	@brief Gets a Vector2 value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output string.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetVector2(userMessage uintptr, fieldName string, out *plugify.Vector2) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := *(*C.Vector2)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetVector2(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector2)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetVector2
//
//	@brief Sets a Vector2 value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetVector2(userMessage uintptr, fieldName string, value plugify.Vector2) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector2)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetVector2(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetVector3
//
//	@brief Gets a Vector3 value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output string.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetVector3(userMessage uintptr, fieldName string, out *plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := *(*C.Vector3)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetVector3(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector3)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetVector3
//
//	@brief Sets a Vector3 value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetVector3(userMessage uintptr, fieldName string, value plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetVector3(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetVector4
//
//	@brief Gets a Vector4 value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output string.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetVector4(userMessage uintptr, fieldName string, out *plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := *(*C.Vector4)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetVector4(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector4)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetVector4
//
//	@brief Sets a Vector3 value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetVector4(userMessage uintptr, fieldName string, value plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector4)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetVector4(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetQAngle
//
//	@brief Gets a QAngle value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param out: The output string.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetQAngle(userMessage uintptr, fieldName string, out *plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__out := *(*C.Vector3)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetQAngle(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector3)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetQAngle
//
//	@brief Sets a QAngle value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetQAngle(userMessage uintptr, fieldName string, value plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetQAngle(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedEnum
//
//	@brief Gets a repeated enum value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedEnum(userMessage uintptr, fieldName string, index int32, out *int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.int32_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedEnum(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = int32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedEnum
//
//	@brief Sets a repeated enum value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedEnum(userMessage uintptr, fieldName string, index int32, value int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedEnum(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddEnum
//
//	@brief Adds a enum value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddEnum(userMessage uintptr, fieldName string, value int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddEnum(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedInt32
//
//	@brief Gets a repeated int32_t value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedInt32(userMessage uintptr, fieldName string, index int32, out *int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.int32_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = int32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedInt32
//
//	@brief Sets a repeated int32_t value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedInt32(userMessage uintptr, fieldName string, index int32, value int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddInt32
//
//	@brief Adds a 32-bit integer value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddInt32(userMessage uintptr, fieldName string, value int32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.int32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedInt64
//
//	@brief Gets a repeated int64_t value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedInt64(userMessage uintptr, fieldName string, index int32, out *int64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.int64_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = int64(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedInt64
//
//	@brief Sets a repeated int64_t value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedInt64(userMessage uintptr, fieldName string, index int32, value int64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.int64_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddInt64
//
//	@brief Adds a 64-bit integer value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddInt64(userMessage uintptr, fieldName string, value int64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.int64_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedUInt32
//
//	@brief Gets a repeated uint32_t value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedUInt32(userMessage uintptr, fieldName string, index int32, out *uint32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.uint32_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedUInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = uint32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedUInt32
//
//	@brief Sets a repeated uint32_t value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedUInt32(userMessage uintptr, fieldName string, index int32, value uint32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.uint32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedUInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddUInt32
//
//	@brief Adds an unsigned 32-bit integer value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddUInt32(userMessage uintptr, fieldName string, value uint32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.uint32_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddUInt32(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedUInt64
//
//	@brief Gets a repeated uint64_t value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedUInt64(userMessage uintptr, fieldName string, index int32, out *uint64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.uint64_t(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedUInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = uint64(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedUInt64
//
//	@brief Sets a repeated uint64_t value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedUInt64(userMessage uintptr, fieldName string, index int32, value uint64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.uint64_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedUInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddUInt64
//
//	@brief Adds an unsigned 64-bit integer value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddUInt64(userMessage uintptr, fieldName string, value uint64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.uint64_t(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddUInt64(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedBool
//
//	@brief Gets a repeated bool value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedBool(userMessage uintptr, fieldName string, index int32, out *bool) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.bool(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedBool(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = bool(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedBool
//
//	@brief Sets a repeated bool value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedBool(userMessage uintptr, fieldName string, index int32, value bool) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.bool(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedBool(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddBool
//
//	@brief Adds a bool value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddBool(userMessage uintptr, fieldName string, value bool) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.bool(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddBool(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedFloat
//
//	@brief Gets a repeated float value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedFloat(userMessage uintptr, fieldName string, index int32, out *float32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.float(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedFloat(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = float32(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedFloat
//
//	@brief Sets a repeated float value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedFloat(userMessage uintptr, fieldName string, index int32, value float32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.float(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedFloat(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddFloat
//
//	@brief Adds a float value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddFloat(userMessage uintptr, fieldName string, value float32) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.float(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddFloat(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedDouble
//
//	@brief Gets a repeated double value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedDouble(userMessage uintptr, fieldName string, index int32, out *float64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := C.double(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedDouble(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = float64(__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedDouble
//
//	@brief Sets a repeated double value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedDouble(userMessage uintptr, fieldName string, index int32, value float64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := C.double(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedDouble(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddDouble
//
//	@brief Adds a double value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddDouble(userMessage uintptr, fieldName string, value float64) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := C.double(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddDouble(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedString
//
//	@brief Gets a repeated string value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output string.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedString(userMessage uintptr, fieldName string, index int32, out *string) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := plugify.ConstructString(*out)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedString(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, (*C.String)(unsafe.Pointer(&__out))))
			// Unmarshal - Convert native data to managed data.
			*out = plugify.GetStringData(&__out)
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
			plugify.DestroyString(&__out)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedString
//
//	@brief Sets a repeated string value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedString(userMessage uintptr, fieldName string, index int32, value string) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := plugify.ConstructString(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedString(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, (*C.String)(unsafe.Pointer(&__value))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
			plugify.DestroyString(&__value)
		},
	}.Do()
	return __retVal
}

// PbAddString
//
//	@brief Adds a string value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddString(userMessage uintptr, fieldName string, value string) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := plugify.ConstructString(value)
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddString(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), (*C.String)(unsafe.Pointer(&__value))))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
			plugify.DestroyString(&__value)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedColor
//
//	@brief Gets a repeated color value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output color.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedColor(userMessage uintptr, fieldName string, index int32, out *plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := *(*C.Vector4)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedColor(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector4)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedColor
//
//	@brief Sets a repeated color value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedColor(userMessage uintptr, fieldName string, index int32, value plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := *(*C.Vector4)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedColor(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddColor
//
//	@brief Adds a color value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddColor(userMessage uintptr, fieldName string, value plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector4)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddColor(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedVector2
//
//	@brief Gets a repeated Vector2 value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedVector2(userMessage uintptr, fieldName string, index int32, out *plugify.Vector2) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := *(*C.Vector2)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedVector2(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector2)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedVector2
//
//	@brief Sets a repeated Vector2 value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedVector2(userMessage uintptr, fieldName string, index int32, value plugify.Vector2) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := *(*C.Vector2)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedVector2(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddVector2
//
//	@brief Adds a Vector2 value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddVector2(userMessage uintptr, fieldName string, value plugify.Vector2) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector2)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddVector2(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedVector3
//
//	@brief Gets a repeated Vector3 value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedVector3(userMessage uintptr, fieldName string, index int32, out *plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := *(*C.Vector3)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedVector3(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector3)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedVector3
//
//	@brief Sets a repeated Vector3 value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedVector3(userMessage uintptr, fieldName string, index int32, value plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedVector3(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddVector3
//
//	@brief Adds a Vector3 value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddVector3(userMessage uintptr, fieldName string, value plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddVector3(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedVector4
//
//	@brief Gets a repeated Vector4 value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedVector4(userMessage uintptr, fieldName string, index int32, out *plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := *(*C.Vector4)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedVector4(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector4)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedVector4
//
//	@brief Sets a repeated Vector4 value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedVector4(userMessage uintptr, fieldName string, index int32, value plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := *(*C.Vector4)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedVector4(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddVector4
//
//	@brief Adds a Vector4 value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddVector4(userMessage uintptr, fieldName string, value plugify.Vector4) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector4)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddVector4(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbGetRepeatedQAngle
//
//	@brief Gets a repeated QAngle value from a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//
//	@return True if the field was successfully retrieved, false otherwise.
func PbGetRepeatedQAngle(userMessage uintptr, fieldName string, index int32, out *plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__out := *(*C.Vector3)(unsafe.Pointer(out))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbGetRepeatedQAngle(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__out))
			// Unmarshal - Convert native data to managed data.
			*out = *(*plugify.Vector3)(unsafe.Pointer(&__out))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbSetRepeatedQAngle
//
//	@brief Sets a repeated QAngle value for a field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//
//	@return True if the field was successfully set, false otherwise.
func PbSetRepeatedQAngle(userMessage uintptr, fieldName string, index int32, value plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__index := C.int32_t(index)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbSetRepeatedQAngle(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), __index, &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

// PbAddQAngle
//
//	@brief Adds a QAngle value to a repeated field in the UserMessage.
//
//	@param userMessage: The UserMessage instance.
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//
//	@return True if the value was successfully added, false otherwise.
func PbAddQAngle(userMessage uintptr, fieldName string, value plugify.Vector3) bool {
	var __retVal bool
	__userMessage := C.uintptr_t(userMessage)
	__fieldName := plugify.ConstructString(fieldName)
	__value := *(*C.Vector3)(unsafe.Pointer(&value))
	plugify.Block{
		Try: func() {
			__retVal = bool(C.PbAddQAngle(__userMessage, (*C.String)(unsafe.Pointer(&__fieldName)), &__value))
		},
		Finally: func() {
			// Perform cleanup.
			plugify.DestroyString(&__fieldName)
		},
	}.Do()
	return __retVal
}

var (
	UserMessageErrEmptyHandle = errors.New("UserMessage: empty handle")
)

// UserMessage - RAII wrapper for UserMessage pointer.
type UserMessage struct {
	handle    uintptr
	cleanup   runtime.Cleanup
	ownership ownership
	noCopy    noCopy
}

// NewUserMessageUserMessageCreateFromSerializable - Creates a UserMessage from a serializable message.
//
//	@param msgSerializable: The serializable message.
//	@param message: The network message.
//	@param recipientMask: The recipient mask.
func NewUserMessageUserMessageCreateFromSerializable(msgSerializable uintptr, message uintptr, recipientMask uint64) *UserMessage {
	return NewUserMessageOwned(UserMessageCreateFromSerializable(msgSerializable, message, recipientMask))
}

// NewUserMessageUserMessageCreateFromName - Creates a UserMessage from a message name.
//
//	@param messageName: The name of the message.
func NewUserMessageUserMessageCreateFromName(messageName string) *UserMessage {
	return NewUserMessageOwned(UserMessageCreateFromName(messageName))
}

// NewUserMessageUserMessageCreateFromId - Creates a UserMessage from a message ID.
//
//	@param messageId: The ID of the message.
func NewUserMessageUserMessageCreateFromId(messageId int16) *UserMessage {
	return NewUserMessageOwned(UserMessageCreateFromId(messageId))
}

// NewUserMessageBorrowed creates a UserMessage from a borrowed handle
func NewUserMessageBorrowed(handle uintptr) *UserMessage {
	if handle == 0 {
		return &UserMessage{}
	}
	return &UserMessage{
		handle:    handle,
		ownership: Borrowed,
	}
}

// NewUserMessageOwned creates a UserMessage from an owned handle
func NewUserMessageOwned(handle uintptr) *UserMessage {
	if handle == 0 {
		return &UserMessage{}
	}
	w := &UserMessage{
		handle:    handle,
		ownership: Owned,
	}
	w.cleanup = runtime.AddCleanup(w, w.finalize, struct{}{})
	return w
}

// finalize is the finalizer function (like C++ destructor)
func (w *UserMessage) finalize(_ struct{}) {
	if plugify.Plugin.Loaded {
		w.destroy()
	}
}

// destroy cleans up owned handles
func (w *UserMessage) destroy() {
	if w.handle != 0 && w.ownership == Owned {
		UserMessageDestroy(w.handle)
	}
}

// nullify resets the handle
func (w *UserMessage) nullify() {
	w.handle = 0
	w.ownership = Borrowed
}

// Close explicitly destroys the handle (like C++ destructor, but manual)
func (w *UserMessage) Close() {
	w.Reset()
}

// Get returns the underlying handle
func (w *UserMessage) Get() uintptr {
	return w.handle
}

// Release releases ownership and returns the handle
func (w *UserMessage) Release() uintptr {
	if w.ownership == Owned {
		w.cleanup.Stop()
	}
	handle := w.handle
	w.nullify()
	return handle
}

// Reset destroys and resets the handle
func (w *UserMessage) Reset() {
	if w.ownership == Owned {
		w.cleanup.Stop()
	}
	w.destroy()
	w.nullify()
}

// IsValid returns true if handle is not nil
func (w *UserMessage) IsValid() bool {
	return w.handle != 0
}

// Send - Sends a UserMessage to the specified recipients.
func (w *UserMessage) Send() error {
	if w.handle == 0 {
		return UserMessageErrEmptyHandle
	}
	UserMessageSend(w.handle)
	return nil
}

// GetMessageName - Gets the name of the message.
//
//	@return The name of the message as a string.
func (w *UserMessage) GetMessageName() (string, error) {
	if w.handle == 0 {
		var zero string
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetMessageName(w.handle), nil
}

// GetMessageID - Gets the ID of the message.
//
//	@return The ID of the message.
func (w *UserMessage) GetMessageID() (int16, error) {
	if w.handle == 0 {
		var zero int16
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetMessageID(w.handle), nil
}

// HasField - Checks if the message has a specific field.
//
//	@param fieldName: The name of the field to check.
//	@return True if the field exists, false otherwise.
func (w *UserMessage) HasField(fieldName string) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageHasField(w.handle, fieldName), nil
}

// GetProtobufMessage - Gets the protobuf message associated with the UserMessage.
//
//	@return A pointer to the protobuf message.
func (w *UserMessage) GetProtobufMessage() (uintptr, error) {
	if w.handle == 0 {
		var zero uintptr
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetProtobufMessage(w.handle), nil
}

// GetSerializableMessage - Gets the serializable message associated with the UserMessage.
//
//	@return A pointer to the serializable message.
func (w *UserMessage) GetSerializableMessage() (uintptr, error) {
	if w.handle == 0 {
		var zero uintptr
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetSerializableMessage(w.handle), nil
}

// FindMessageIdByName - Finds a message ID by its name.
//
//	@param messageName: The name of the message.
//	@return The ID of the message, or 0 if the message was not found.
func (w *UserMessage) FindMessageIdByName(messageName string) int16 {
	return UserMessageFindMessageIdByName(messageName)
}

// GetRecipientMask - Gets the recipient mask for the UserMessage.
//
//	@return The recipient mask.
func (w *UserMessage) GetRecipientMask() (uint64, error) {
	if w.handle == 0 {
		var zero uint64
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetRecipientMask(w.handle), nil
}

// AddRecipient - Adds a single recipient (player) to the UserMessage.
//
//	@param playerSlot: The slot index of the player to add as a recipient.
func (w *UserMessage) AddRecipient(playerSlot int32) error {
	if w.handle == 0 {
		return UserMessageErrEmptyHandle
	}
	UserMessageAddRecipient(w.handle, playerSlot)
	return nil
}

// AddAllPlayers - Adds all connected players as recipients to the UserMessage.
func (w *UserMessage) AddAllPlayers() error {
	if w.handle == 0 {
		return UserMessageErrEmptyHandle
	}
	UserMessageAddAllPlayers(w.handle)
	return nil
}

// SetRecipientMask - Sets the recipient mask for the UserMessage.
//
//	@param mask: The recipient mask to set.
func (w *UserMessage) SetRecipientMask(mask uint64) error {
	if w.handle == 0 {
		return UserMessageErrEmptyHandle
	}
	UserMessageSetRecipientMask(w.handle, mask)
	return nil
}

// GetMessage - Gets a nested message from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param message: A pointer to store the retrieved message.
//	@return True if the message was successfully retrieved, false otherwise.
func (w *UserMessage) GetMessage(fieldName string, message *uintptr) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetMessage(w.handle, fieldName, message), nil
}

// GetRepeatedMessage - Gets a repeated nested message from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param message: A pointer to store the retrieved message.
//	@return True if the message was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedMessage(fieldName string, index int32, message *uintptr) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetRepeatedMessage(w.handle, fieldName, index, message), nil
}

// AddMessage - Adds a nested message to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param message: A pointer to the message to add.
//	@return True if the message was successfully added, false otherwise.
func (w *UserMessage) AddMessage(fieldName string, message uintptr) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageAddMessage(w.handle, fieldName, message), nil
}

// GetRepeatedFieldCount - Gets the count of repeated fields in a field of the UserMessage.
//
//	@param fieldName: The name of the field.
//	@return The count of repeated fields, or -1 if the field is not repeated or does not exist.
func (w *UserMessage) GetRepeatedFieldCount(fieldName string) (int32, error) {
	if w.handle == 0 {
		var zero int32
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetRepeatedFieldCount(w.handle, fieldName), nil
}

// RemoveRepeatedFieldValue - Removes a value from a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the value to remove.
//	@return True if the value was successfully removed, false otherwise.
func (w *UserMessage) RemoveRepeatedFieldValue(fieldName string, index int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageRemoveRepeatedFieldValue(w.handle, fieldName, index), nil
}

// GetDebugString - Gets the debug string representation of the UserMessage.
//
//	@return The debug string as a string.
func (w *UserMessage) GetDebugString() (string, error) {
	if w.handle == 0 {
		var zero string
		return zero, UserMessageErrEmptyHandle
	}
	return UserMessageGetDebugString(w.handle), nil
}

// ReadEnum - Reads an enum value from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The integer representation of the enum value, or 0 if invalid.
func (w *UserMessage) ReadEnum(fieldName string, index int32) (int32, error) {
	if w.handle == 0 {
		var zero int32
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadEnum(w.handle, fieldName, index), nil
}

// ReadInt32 - Reads a 32-bit integer from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The int32_t value read, or 0 if invalid.
func (w *UserMessage) ReadInt32(fieldName string, index int32) (int32, error) {
	if w.handle == 0 {
		var zero int32
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadInt32(w.handle, fieldName, index), nil
}

// ReadInt64 - Reads a 64-bit integer from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The int64_t value read, or 0 if invalid.
func (w *UserMessage) ReadInt64(fieldName string, index int32) (int64, error) {
	if w.handle == 0 {
		var zero int64
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadInt64(w.handle, fieldName, index), nil
}

// ReadUInt32 - Reads an unsigned 32-bit integer from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The uint32_t value read, or 0 if invalid.
func (w *UserMessage) ReadUInt32(fieldName string, index int32) (uint32, error) {
	if w.handle == 0 {
		var zero uint32
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadUInt32(w.handle, fieldName, index), nil
}

// ReadUInt64 - Reads an unsigned 64-bit integer from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The uint64_t value read, or 0 if invalid.
func (w *UserMessage) ReadUInt64(fieldName string, index int32) (uint64, error) {
	if w.handle == 0 {
		var zero uint64
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadUInt64(w.handle, fieldName, index), nil
}

// ReadFloat - Reads a floating-point value from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The float value read, or 0.0 if invalid.
func (w *UserMessage) ReadFloat(fieldName string, index int32) (float32, error) {
	if w.handle == 0 {
		var zero float32
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadFloat(w.handle, fieldName, index), nil
}

// ReadDouble - Reads a double-precision floating-point value from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The double value read, or 0.0 if invalid.
func (w *UserMessage) ReadDouble(fieldName string, index int32) (float64, error) {
	if w.handle == 0 {
		var zero float64
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadDouble(w.handle, fieldName, index), nil
}

// ReadBool - Reads a boolean value from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The boolean value read, or false if invalid.
func (w *UserMessage) ReadBool(fieldName string, index int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadBool(w.handle, fieldName, index), nil
}

// ReadString - Reads a string from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The string value read, or an empty string if invalid.
func (w *UserMessage) ReadString(fieldName string, index int32) (string, error) {
	if w.handle == 0 {
		var zero string
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadString(w.handle, fieldName, index), nil
}

// ReadColor - Reads a color value from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The color value read, or an empty value if invalid.
func (w *UserMessage) ReadColor(fieldName string, index int32) (plugify.Vector4, error) {
	if w.handle == 0 {
		var zero plugify.Vector4
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadColor(w.handle, fieldName, index), nil
}

// ReadVector2 - Reads a 2D vector from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The 2D vector value read, or an empty value if invalid.
func (w *UserMessage) ReadVector2(fieldName string, index int32) (plugify.Vector2, error) {
	if w.handle == 0 {
		var zero plugify.Vector2
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadVector2(w.handle, fieldName, index), nil
}

// ReadVector3 - Reads a 3D vector from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The 3D vector value read, or an empty value if invalid.
func (w *UserMessage) ReadVector3(fieldName string, index int32) (plugify.Vector3, error) {
	if w.handle == 0 {
		var zero plugify.Vector3
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadVector3(w.handle, fieldName, index), nil
}

// ReadVector4 - Reads a 4D vector from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The 4D vector value read, or an empty value if invalid.
func (w *UserMessage) ReadVector4(fieldName string, index int32) (plugify.Vector4, error) {
	if w.handle == 0 {
		var zero plugify.Vector4
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadVector4(w.handle, fieldName, index), nil
}

// ReadQAngle - Reads a QAngle (rotation vector) from a UserMessage.
//
//	@param fieldName: Name of the field to read.
//	@param index: Index of the repeated field (use -1 for non-repeated fields).
//	@return The QAngle value read, or an empty value if invalid.
func (w *UserMessage) ReadQAngle(fieldName string, index int32) (plugify.Vector3, error) {
	if w.handle == 0 {
		var zero plugify.Vector3
		return zero, UserMessageErrEmptyHandle
	}
	return PbReadQAngle(w.handle, fieldName, index), nil
}

// GetEnum - Gets a enum value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetEnum(fieldName string, out *int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetEnum(w.handle, fieldName, out), nil
}

// SetEnum - Sets a enum value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetEnum(fieldName string, value int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetEnum(w.handle, fieldName, value), nil
}

// GetInt32 - Gets a 32-bit integer value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetInt32(fieldName string, out *int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetInt32(w.handle, fieldName, out), nil
}

// SetInt32 - Sets a 32-bit integer value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetInt32(fieldName string, value int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetInt32(w.handle, fieldName, value), nil
}

// GetInt64 - Gets a 64-bit integer value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetInt64(fieldName string, out *int64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetInt64(w.handle, fieldName, out), nil
}

// SetInt64 - Sets a 64-bit integer value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetInt64(fieldName string, value int64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetInt64(w.handle, fieldName, value), nil
}

// GetUInt32 - Gets an unsigned 32-bit integer value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetUInt32(fieldName string, out *uint32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetUInt32(w.handle, fieldName, out), nil
}

// SetUInt32 - Sets an unsigned 32-bit integer value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetUInt32(fieldName string, value uint32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetUInt32(w.handle, fieldName, value), nil
}

// GetUInt64 - Gets an unsigned 64-bit integer value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetUInt64(fieldName string, out *uint64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetUInt64(w.handle, fieldName, out), nil
}

// SetUInt64 - Sets an unsigned 64-bit integer value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetUInt64(fieldName string, value uint64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetUInt64(w.handle, fieldName, value), nil
}

// GetBool - Gets a bool value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetBool(fieldName string, out *bool) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetBool(w.handle, fieldName, out), nil
}

// SetBool - Sets a bool value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetBool(fieldName string, value bool) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetBool(w.handle, fieldName, value), nil
}

// GetFloat - Gets a float value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetFloat(fieldName string, out *float32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetFloat(w.handle, fieldName, out), nil
}

// SetFloat - Sets a float value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetFloat(fieldName string, value float32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetFloat(w.handle, fieldName, value), nil
}

// GetDouble - Gets a double value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetDouble(fieldName string, out *float64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetDouble(w.handle, fieldName, out), nil
}

// SetDouble - Sets a double value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetDouble(fieldName string, value float64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetDouble(w.handle, fieldName, value), nil
}

// GetString - Gets a string value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output string.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetString(fieldName string, out *string) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetString(w.handle, fieldName, out), nil
}

// SetString - Sets a string value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetString(fieldName string, value string) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetString(w.handle, fieldName, value), nil
}

// GetColor - Gets a color value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output string.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetColor(fieldName string, out *plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetColor(w.handle, fieldName, out), nil
}

// SetColor - Sets a color value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetColor(fieldName string, value plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetColor(w.handle, fieldName, value), nil
}

// GetVector2 - Gets a Vector2 value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output string.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetVector2(fieldName string, out *plugify.Vector2) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetVector2(w.handle, fieldName, out), nil
}

// SetVector2 - Sets a Vector2 value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetVector2(fieldName string, value plugify.Vector2) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetVector2(w.handle, fieldName, value), nil
}

// GetVector3 - Gets a Vector3 value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output string.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetVector3(fieldName string, out *plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetVector3(w.handle, fieldName, out), nil
}

// SetVector3 - Sets a Vector3 value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetVector3(fieldName string, value plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetVector3(w.handle, fieldName, value), nil
}

// GetVector4 - Gets a Vector4 value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output string.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetVector4(fieldName string, out *plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetVector4(w.handle, fieldName, out), nil
}

// SetVector4 - Sets a Vector3 value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetVector4(fieldName string, value plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetVector4(w.handle, fieldName, value), nil
}

// GetQAngle - Gets a QAngle value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param out: The output string.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetQAngle(fieldName string, out *plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetQAngle(w.handle, fieldName, out), nil
}

// SetQAngle - Sets a QAngle value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetQAngle(fieldName string, value plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetQAngle(w.handle, fieldName, value), nil
}

// GetRepeatedEnum - Gets a repeated enum value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedEnum(fieldName string, index int32, out *int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedEnum(w.handle, fieldName, index, out), nil
}

// SetRepeatedEnum - Sets a repeated enum value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedEnum(fieldName string, index int32, value int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedEnum(w.handle, fieldName, index, value), nil
}

// AddEnum - Adds a enum value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddEnum(fieldName string, value int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddEnum(w.handle, fieldName, value), nil
}

// GetRepeatedInt32 - Gets a repeated int32_t value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedInt32(fieldName string, index int32, out *int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedInt32(w.handle, fieldName, index, out), nil
}

// SetRepeatedInt32 - Sets a repeated int32_t value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedInt32(fieldName string, index int32, value int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedInt32(w.handle, fieldName, index, value), nil
}

// AddInt32 - Adds a 32-bit integer value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddInt32(fieldName string, value int32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddInt32(w.handle, fieldName, value), nil
}

// GetRepeatedInt64 - Gets a repeated int64_t value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedInt64(fieldName string, index int32, out *int64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedInt64(w.handle, fieldName, index, out), nil
}

// SetRepeatedInt64 - Sets a repeated int64_t value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedInt64(fieldName string, index int32, value int64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedInt64(w.handle, fieldName, index, value), nil
}

// AddInt64 - Adds a 64-bit integer value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddInt64(fieldName string, value int64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddInt64(w.handle, fieldName, value), nil
}

// GetRepeatedUInt32 - Gets a repeated uint32_t value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedUInt32(fieldName string, index int32, out *uint32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedUInt32(w.handle, fieldName, index, out), nil
}

// SetRepeatedUInt32 - Sets a repeated uint32_t value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedUInt32(fieldName string, index int32, value uint32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedUInt32(w.handle, fieldName, index, value), nil
}

// AddUInt32 - Adds an unsigned 32-bit integer value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddUInt32(fieldName string, value uint32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddUInt32(w.handle, fieldName, value), nil
}

// GetRepeatedUInt64 - Gets a repeated uint64_t value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedUInt64(fieldName string, index int32, out *uint64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedUInt64(w.handle, fieldName, index, out), nil
}

// SetRepeatedUInt64 - Sets a repeated uint64_t value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedUInt64(fieldName string, index int32, value uint64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedUInt64(w.handle, fieldName, index, value), nil
}

// AddUInt64 - Adds an unsigned 64-bit integer value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddUInt64(fieldName string, value uint64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddUInt64(w.handle, fieldName, value), nil
}

// GetRepeatedBool - Gets a repeated bool value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedBool(fieldName string, index int32, out *bool) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedBool(w.handle, fieldName, index, out), nil
}

// SetRepeatedBool - Sets a repeated bool value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedBool(fieldName string, index int32, value bool) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedBool(w.handle, fieldName, index, value), nil
}

// AddBool - Adds a bool value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddBool(fieldName string, value bool) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddBool(w.handle, fieldName, value), nil
}

// GetRepeatedFloat - Gets a repeated float value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedFloat(fieldName string, index int32, out *float32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedFloat(w.handle, fieldName, index, out), nil
}

// SetRepeatedFloat - Sets a repeated float value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedFloat(fieldName string, index int32, value float32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedFloat(w.handle, fieldName, index, value), nil
}

// AddFloat - Adds a float value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddFloat(fieldName string, value float32) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddFloat(w.handle, fieldName, value), nil
}

// GetRepeatedDouble - Gets a repeated double value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output value.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedDouble(fieldName string, index int32, out *float64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedDouble(w.handle, fieldName, index, out), nil
}

// SetRepeatedDouble - Sets a repeated double value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedDouble(fieldName string, index int32, value float64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedDouble(w.handle, fieldName, index, value), nil
}

// AddDouble - Adds a double value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddDouble(fieldName string, value float64) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddDouble(w.handle, fieldName, value), nil
}

// GetRepeatedString - Gets a repeated string value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output string.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedString(fieldName string, index int32, out *string) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedString(w.handle, fieldName, index, out), nil
}

// SetRepeatedString - Sets a repeated string value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedString(fieldName string, index int32, value string) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedString(w.handle, fieldName, index, value), nil
}

// AddString - Adds a string value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddString(fieldName string, value string) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddString(w.handle, fieldName, value), nil
}

// GetRepeatedColor - Gets a repeated color value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output color.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedColor(fieldName string, index int32, out *plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedColor(w.handle, fieldName, index, out), nil
}

// SetRepeatedColor - Sets a repeated color value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedColor(fieldName string, index int32, value plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedColor(w.handle, fieldName, index, value), nil
}

// AddColor - Adds a color value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddColor(fieldName string, value plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddColor(w.handle, fieldName, value), nil
}

// GetRepeatedVector2 - Gets a repeated Vector2 value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedVector2(fieldName string, index int32, out *plugify.Vector2) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedVector2(w.handle, fieldName, index, out), nil
}

// SetRepeatedVector2 - Sets a repeated Vector2 value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedVector2(fieldName string, index int32, value plugify.Vector2) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedVector2(w.handle, fieldName, index, value), nil
}

// AddVector2 - Adds a Vector2 value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddVector2(fieldName string, value plugify.Vector2) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddVector2(w.handle, fieldName, value), nil
}

// GetRepeatedVector3 - Gets a repeated Vector3 value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedVector3(fieldName string, index int32, out *plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedVector3(w.handle, fieldName, index, out), nil
}

// SetRepeatedVector3 - Sets a repeated Vector3 value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedVector3(fieldName string, index int32, value plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedVector3(w.handle, fieldName, index, value), nil
}

// AddVector3 - Adds a Vector3 value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddVector3(fieldName string, value plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddVector3(w.handle, fieldName, value), nil
}

// GetRepeatedVector4 - Gets a repeated Vector4 value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedVector4(fieldName string, index int32, out *plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedVector4(w.handle, fieldName, index, out), nil
}

// SetRepeatedVector4 - Sets a repeated Vector4 value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedVector4(fieldName string, index int32, value plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedVector4(w.handle, fieldName, index, value), nil
}

// AddVector4 - Adds a Vector4 value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddVector4(fieldName string, value plugify.Vector4) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddVector4(w.handle, fieldName, value), nil
}

// GetRepeatedQAngle - Gets a repeated QAngle value from a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param out: The output vector.
//	@return True if the field was successfully retrieved, false otherwise.
func (w *UserMessage) GetRepeatedQAngle(fieldName string, index int32, out *plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbGetRepeatedQAngle(w.handle, fieldName, index, out), nil
}

// SetRepeatedQAngle - Sets a repeated QAngle value for a field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param index: The index of the repeated field.
//	@param value: The value to set.
//	@return True if the field was successfully set, false otherwise.
func (w *UserMessage) SetRepeatedQAngle(fieldName string, index int32, value plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbSetRepeatedQAngle(w.handle, fieldName, index, value), nil
}

// AddQAngle - Adds a QAngle value to a repeated field in the UserMessage.
//
//	@param fieldName: The name of the field.
//	@param value: The value to add.
//	@return True if the value was successfully added, false otherwise.
func (w *UserMessage) AddQAngle(fieldName string, value plugify.Vector3) (bool, error) {
	if w.handle == 0 {
		var zero bool
		return zero, UserMessageErrEmptyHandle
	}
	return PbAddQAngle(w.handle, fieldName, value), nil
}
