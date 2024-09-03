#include <verilated.h>
#include "VFetchUnit.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#define MAX_SIM_TIME 100

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VFetchUnit *dut = new VFetchUnit;
    Verilated::traceEverOn(true);

    VerilatedVcdC *trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open("trace_fetch.vcd");
    int sim_time = 0;
    dut->reset = 0;
    dut->en_pc = 1;
    while(sim_time<MAX_SIM_TIME){
        dut->clk = !(dut->clk);
        dut->eval();
        trace->dump(sim_time);
        sim_time++;
        std::cout<<"instruction is "<<std::hex<<dut->instruction<<"\n";
    }

    trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
    return 0;
}
