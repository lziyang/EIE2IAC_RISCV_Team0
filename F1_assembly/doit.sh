#!/bin/sh

~/Documents/iac/lab0-devtools/tools/attach_usb.sh

rm -rf obj_dir
rm -f CPUTOP.vcd

verilator -Wall --cc --trace CPUTOP.sv --exe f1_tb.cpp

make -j -C obj_dir/ -f VCPUTOP.mk VCPUTOP

obj_dir/VCPUTOP