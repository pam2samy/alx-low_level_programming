#!/bin/bash
wget -p .. https://raw.githubusercontent.com/pam2samy/alx-low_level_programming/master/0x18-dynamic_libraries/test.c
export LD_PRELOAD="$PWD/../test.so"
