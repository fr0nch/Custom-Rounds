package main

import (
	"customrounds/internal"

	"github.com/untrustedmodders/go-plugify"
)

const pluginName = "customrounds"

func init() {
	plugin := internal.NewCustomRoundsPlugin()
	plugin.Plugin = plugify.NewPlugin(pluginName, plugin.OnPluginStart, plugin.OnPluginUpdate, plugin.OnPluginEnd)
}

func main() {}
