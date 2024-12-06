#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include "vbuddy.cpp" // include vbuddy code

#define MAX_SIM_CYC 2000

int main(int argc, char **argv, char **env)
{
  int simcyc; // simulation clock count
  int tick;   // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vtop *top = new Vtop;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("CPUTOP.vcd");

  // init Vbuddy
  if (vbdOpen() != 1)
    return (-1);
  vbdHeader("F1 Programme");

  // initialize simulation input
  top->clk = 0;
  top->rst = 0;
  top->trigger = 0;

  vbdSetMode(0);

  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
  {
    // dump variables into VCD file and toggle clock
    for (tick = 0; tick < 2; tick++)
    {
      tfp->dump(2 * simcyc + tick);
      top->clk = !top->clk;
      top->eval();
    }

    top->trigger = vbdFlag();

    vbdBar(top->a0 & 0xFF);
    top->trigger = vbdFlag();
    vbdCycle(simcyc);

    // either simulation finished, or 'q' is pressed
    if ((Verilated::gotFinish()) || (vbdGetkey() == 'q'))
      exit(0);
  }

  vbdClose();
  tfp->close();
  printf("Exiting\n");
  exit(0);
}
