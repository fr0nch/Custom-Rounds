//go:generate go run generator.go
//go:build ignore

package main

import (
	"fmt"
	"os"

	"github.com/untrustedmodders/go-plugify"
)

func main() {
	CreateManifest("customrounds", "1.0.0", "Fr4nch", []string{"s2sdk"}, "bin/libcs2-customrounds")
}

func CreateManifest(name, version, author string, dependencies []string, entry string) {
	err := plugify.Generate("./...", "cs2-customrounds.pplugin", name, version, "", author, "", "", make([]string, 0), dependencies, make([]string, 0), entry, "main")
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error generating plugin manifest: %v\n", err)
		os.Exit(1)
	}

	fmt.Println("✓ Manifest and autoexports successfully generated!")

	os.Exit(0)
}
