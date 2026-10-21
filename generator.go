//go:generate go run generator.go
//go:build ignore

package main

import (
	"encoding/json"
	"errors"
	"fmt"
	"io/fs"
	"os"
	"path/filepath"
	"runtime"
	"slices"
	"strings"

	"github.com/untrustedmodders/go-plugify"
	"github.com/untrustedmodders/go-plugify/manifest"
)

const (
	manifestPath        = "customrounds.pplugin"
	releaseManifestPath = ".github/release-please-manifest.json"
)

var configMethods = []string{
	"ReloadConfig",
	"IsRoundExists",
	"GetRound",
	"GetRounds",
	"GetRoundNames",
	"GetRoundIndex",
	"GetJsonString",
}

func main() {
	_, file, _, _ := runtime.Caller(0)
	if err := os.Chdir(filepath.Dir(file)); err != nil {
		fmt.Fprintf(os.Stderr, "Error changing to project directory: %v\n", err)
		os.Exit(1)
	}

	dependencies := []manifest.Dependency{
		{Name: "s2sdk", Constraints: ">=3.0.0"},
		{Name: "permissions", Optional: true},
	}

	CreateManifest("customrounds", "Fr4nch", dependencies, "bin/libcustomrounds")
}

func CreateManifest(name, author string, dependencies []manifest.Dependency, entry string) {
	version, err := currentVersion()
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error reading manifest version: %v\n", err)
		os.Exit(1)
	}

	names := make([]string, 0, len(dependencies))
	for i := range dependencies {
		names = append(names, dependencies[i].Name)
	}

	params := plugify.GenerateParams{
		Version:      version,
		Description:  "Custom rounds for CS2: loads round presets from a JSON config and passes their settings to other plugins as KeyValues3.",
		Author:       author,
		Website:      "https://github.com/fr0nch",
		License:      "GPLv3",
		Dependencies: names,
	}

	if err := plugify.Generate(manifestPath, name, entry, false, params, nil); err != nil {
		fmt.Fprintf(os.Stderr, "Error generating plugin manifest: %v\n", err)
		os.Exit(1)
	}

	if err := updateManifest(dependencies); err != nil {
		fmt.Fprintf(os.Stderr, "Error updating manifest: %v\n", err)
		os.Exit(1)
	}

	fmt.Println("Manifest and autoexports successfully generated!")

	os.Exit(0)
}

func currentVersion() (string, error) {
	data, err := os.ReadFile(releaseManifestPath)
	if errors.Is(err, fs.ErrNotExist) {
		return "0.0.1", nil
	} else if err != nil {
		return "", err
	}

	var versions map[string]string
	if err := json.Unmarshal(data, &versions); err != nil {
		return "", err
	}

	return versions["."], nil
}

func updateManifest(dependencies []manifest.Dependency) error {
	data, err := os.ReadFile(manifestPath)
	if err != nil {
		return err
	}

	var man manifest.Manifest
	if err := json.Unmarshal(data, &man); err != nil {
		return err
	}

	man.Dependencies = dependencies

	for i := range man.Methods {
		man.Methods[i].Group = methodGroup(man.Methods[i].Name)
	}

	file, err := os.Create(manifestPath)
	if err != nil {
		return err
	}
	defer file.Close()

	encoder := json.NewEncoder(file)
	encoder.SetEscapeHTML(false)
	encoder.SetIndent("", "  ")

	return encoder.Encode(man)
}

func methodGroup(name string) string {
	switch {
	case strings.HasSuffix(name, "_Register"), strings.HasSuffix(name, "_Unregister"):
		return "Listeners"
	case slices.Contains(configMethods, name):
		return "Config"
	}

	return "Rounds"
}
