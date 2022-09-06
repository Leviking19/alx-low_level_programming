#!/bin/bash
wget -P /tmp https://github.com/Leviking19/alx-low_level_programming/raw/master/0x18-dynamic_libraries/vendetta.so
export LD_PRELOAD=/tmp/vendetta.so
