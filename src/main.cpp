#include "../../include/plugin.h"
#include <iostream>

static void on_init() {}
static void on_exit() {}

static bool on_command(const std::string& input) {
    return false;
}

static std::string on_hint(const std::string& input) {
    return "";
}

static void on_cd(const std::string& dir) {}

static const char* cmds[] = {nullptr}; // fill with claimed commands e.g. {"ls", "cat", nullptr}

static PluginAPI api = {
    .name     = "myplugin",
    .version  = "1.0.0",
    .commands = cmds,
    .on_init  = on_init,
    .on_exit  = on_exit,
    .on_command = on_command,
    .on_hint  = on_hint,
    .on_cd    = on_cd,
};

extern "C" PluginAPI* ordona_plugin() { return &api; }
