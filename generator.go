//go:generate go run generator.go
//go:build ignore

package main

import (
	"encoding/json"
	"fmt"
	"os"

	"github.com/untrustedmodders/go-plugify"
	"github.com/untrustedmodders/go-plugify/manifest"
)

const manifestPath = "customrounds.pplugin"

func main() {
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

	if err := setDependencies(dependencies); err != nil {
		fmt.Fprintf(os.Stderr, "Error writing manifest dependencies: %v\n", err)
		os.Exit(1)
	}

	fmt.Println("Manifest and autoexports successfully generated!")

	os.Exit(0)
}

func currentVersion() (string, error) {
	data, err := os.ReadFile(manifestPath)
	if err != nil {
		return "", err
	}

	var man manifest.Manifest
	if err := json.Unmarshal(data, &man); err != nil {
		return "", err
	}

	return man.Version, nil
}

func setDependencies(dependencies []manifest.Dependency) error {
	data, err := os.ReadFile(manifestPath)
	if err != nil {
		return err
	}

	var man manifest.Manifest
	if err := json.Unmarshal(data, &man); err != nil {
		return err
	}

	man.Dependencies = dependencies

	data, err = json.MarshalIndent(man, "", "  ")
	if err != nil {
		return err
	}

	return os.WriteFile(manifestPath, data, 0644)
}
