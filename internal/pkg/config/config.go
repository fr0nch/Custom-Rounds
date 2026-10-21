package config

import (
	"encoding/json"
	"fmt"
	"os"
	"path/filepath"

	"github.com/untrustedmodders/go-plugify"
)

func NewConfig() *Config {
	return &Config{Settings: &Settings{General: DefaultSettings().General}}
}

func LoadConfig[T ConfigsType](folder, fileName string, defaultData T) (*T, error) {
	configPath := filepath.Join(plugify.ConfigsDir(), folder, fileName)

	err := createConfigFile(configPath, defaultData)
	if err != nil {
		return nil, fmt.Errorf("loading config: %w", err)
	}

	file, err := os.Open(configPath)
	if err != nil {
		return nil, fmt.Errorf("failed to open config file %s: %w", configPath, err)
	}

	defer file.Close()

	var config T
	err = json.NewDecoder(file).Decode(&config)
	if err != nil {
		return nil, fmt.Errorf("parsing config: %w", err)
	}

	return &config, nil
}

func createConfigFile(filePath string, defaultData any) error {
	if _, err := os.Stat(filePath); err == nil {
		return nil
	} else if !os.IsNotExist(err) {
		return err
	}

	dir := filepath.Dir(filePath)
	if dir != "." && dir != string(filepath.Separator) {
		if err := os.MkdirAll(dir, 0755); err != nil {
			return err
		}
	}

	data, err := json.MarshalIndent(defaultData, "", "\t")
	if err != nil {
		return err
	}

	return os.WriteFile(filePath, data, 0666)
}
