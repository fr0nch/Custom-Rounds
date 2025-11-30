//go:build debug

package main

import (
	"fmt"
)

func CRDebug(message string, args ...any) {
	fmt.Printf("[CustomRounds] "+message+"\n", args...)
}
