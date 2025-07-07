#!/bin/bash
DYLD_FRAMEWORK_PATH=/Users/kirillinsky/Applications/qt/6.8.2/macos/lib${DYLD_FRAMEWORK_PATH:+:$DYLD_FRAMEWORK_PATH}
export DYLD_FRAMEWORK_PATH
QT_PLUGIN_PATH=/Users/kirillinsky/Applications/qt/6.8.2/macos/plugins${QT_PLUGIN_PATH:+:$QT_PLUGIN_PATH}
export QT_PLUGIN_PATH
exec "$@"
