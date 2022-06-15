#!/bin/bash
wget https://github.com/BezaB10/alx-low_level_programming/raw/master/0x18-dynamic_libraries/win.so -P ../
export LD_PRELOAD=../win.so
