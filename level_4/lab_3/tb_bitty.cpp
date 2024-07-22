#include <verilated.h>
#include "VControlUnit.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#define MAX_SIM_TIME 400


int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VControlUnit *dut = new VControlUnit;

    VerilatedVcdC *trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(trace, 99);
    trace->open("trace.vcd");
    int instruction = 48140, sim_time = 0;
    dut->instruction = instruction;
    dut->clk = 0;
    dut->instruction = instruction;
    dut->reset = 0;
    dut->en_s = 0;
    dut->en_c = 0;
    dut->en_i = 0;
    dut->en_0 = 0;
    dut->en_1 = 0;
    dut->en_2 = 0;
    dut->en_3 = 0;
    dut->en_4 = 0;
    dut->en_5 = 0;
    dut->en_6 = 0;
    dut->en_7 = 0;
    while(sim_time < MAX_SIM_TIME){
        dut->eval();
        trace->dump(sim_time);
        int d_out = dut->d_out, done=dut->done;
        int x = 0, y = 0;
        if(d_out != 65535 || !done){
            std::cout<<"Error on sim_time "<<sim_time<<" \n";
            std::cout<<"d_out is "<<d_out<<"\n";
            std::cout<<"done is "<<done<<"\n";
            break;
        }
    sim_time++;
    }
}