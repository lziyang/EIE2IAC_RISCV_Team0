#!/bin/bash

# Translate Verilog -> C++ including testbench
verilator   -Wall --trace \
            -cc two_waymisscache_ad.sv \
            --exe verifyCache.cpp \
            --prefix "Vtwo_waymisscache_ad" \
            -o Vtwo_waymisscache_ad \
            -CFLAGS "-isystem /opt/homebrew/Cellar/googletest/1.15.2/include"\
            -LDFLAGS "-L/opt/homebrew/Cellar/googletest/1.15.2/lib -lgtest -lgtest_main -lpthread" \

# Build C++ project with automatically generated Makefile
make -j -C obj_dir/ -f Vtwo_waymisscache_ad.mk

# Run executable simulation file
./obj_dir/Vtwo_waymisscache_ad