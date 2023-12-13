#!/bin/bash
wget -O /tmp/win_num.so https://github.com/bankole874/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win_num.so
export LD_PRELOAD=/tmp/win_num.so
