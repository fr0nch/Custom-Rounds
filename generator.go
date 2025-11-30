//go:generate go run generator.go -package=main -output=.
//go:build ignore

package main

import (
	"flag"
	"fmt"
	"os"
	"strings"

	"github.com/untrustedmodders/go-plugify"
)

func splitOrNil(s string) []string {
	if s == "" {
		return nil
	}
	return strings.Split(s, ",")
}

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

	err := plugify.Generate(*patterns, *output, *name, *version, *description, *author, *website, *license, splitOrNil(*platforms), splitOrNil(*dependencies), splitOrNil(*conflicts), *entry, *target)

	if err != nil {
		fmt.Fprintf(os.Stderr, "Ошибка генерации манифеста плагина: %v\n", err)
		os.Exit(1)
	}

	fmt.Println("✓ Манифест плагина и экспорты успешно сгенерированы!")
}
