~/Documents/iac/lab0-devtools/tools/attach_usb.sh

rm -rf obj_dir
rm -f top.vcd

verilator -Wall --cc --trace top.sv --exe f1_tb.cpp

make -j -C obj_dir/ -f Vtop.mk Vtop

obj_dir/Vtop
