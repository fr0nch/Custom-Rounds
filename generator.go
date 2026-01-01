//go:generate go run generator.go -package=main
//go:build ignore

package main

import (
	"flag"
	"fmt"
	"os"
	"strings"

	"github.com/untrustedmodders/go-plugify"
)

func main() {
	var (
		patterns     = flag.String("patterns", "./...", "Package patterns to analyze")
		output       = flag.String("output", "cs2-customrounds.pplugin", "Output manifest file (default: <packagename>.pplugin)")
		name         = flag.String("name", "customrounds", "Plugin name (default: package name)")
		version      = flag.String("version", "custom-build", "Plugin version")
		description  = flag.String("description", "Provides feature for building custom rounds", "Plugin description")
		author       = flag.String("author", "Fr4nch", "Plugin author")
		website      = flag.String("website", "https://github.com/fr0nch", "Plugin website")
		license      = flag.String("license", "GPLv3", "Plugin license")
		platforms    = flag.String("platforms", "", "Plugin platforms (comma-separated)")
		dependencies = flag.String("dependencies", "s2sdk", "Plugin dependencies (comma-separated)")
		conflicts    = flag.String("conflicts", "", "Plugin conflicts (comma-separated)")
		entry        = flag.String("entry", "bin/libcs2-customrounds", "Plugin entry point (default: <packagename>)")
		target       = flag.String("package", "main", "Autoexports package (default: main)")
	)

	flag.Parse()

	// Log what we're doing
	fmt.Println("Starting plugin manifest generation...")
	fmt.Printf("Package patterns: %s\n", *patterns)
	if *output != "" {
		fmt.Printf("Output file: %s\n", *output)
	}
	if *name != "" {
		fmt.Printf("Plugin name: %s\n", *name)
	}
	fmt.Printf("Version: %s\n", *version)

	// Parse comma-separated strings
	platformList := parseCommaSeparated(*platforms)
	dependencyList := parseCommaSeparated(*dependencies)
	conflictList := parseCommaSeparated(*conflicts)

	// Call the generator with error handling
	err := plugify.Generate(*patterns, *output, *name, *version, *description, *author, *website, *license, platformList, dependencyList, conflictList, *entry, *target)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error generating plugin manifest: %v\n", err)
		os.Exit(1)
	}
}

// parseCommaSeparated parses a comma-separated string into a slice of trimmed strings
func parseCommaSeparated(input string) []string {
	if input == "" {
		return nil
	}

	parts := strings.Split(input, ",")
	result := make([]string, 0, len(parts))

	for _, part := range parts {
		part = strings.TrimSpace(part)
		if part != "" {
			result = append(result, part)
		}
	}

	return result
}
