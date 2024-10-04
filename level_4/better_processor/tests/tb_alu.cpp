#include <verilated.h>
#include "VALU.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#define MAX_SIM_TIME 100
uint16_t instructions[] = {16807, 15089, 44249, 3114, 46978};
uint16_t ALU(uint x, uint y, uint select){
    switch (select) {
    case 0:
        return (x + y);
    case 1:
        return (x>y) ? x-y : 65536-y+x;
    case 2:
        return x & y;
    case 3:
        return x | y;
    case 4:
        return x ^ y;
    case 5:
        return (y>31) ? 0 : x << y;
    case 6:
        return (y>31) ? 0 : x >> y;
    case 7:
        return (x > y) ? 1 : (x < y) ? 2 : 0;
    default:
        std::cerr << "Invalid ALU operation" << std::endl;
        return 0;
    }
}
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VALU *dut = new VALU;
    Verilated::traceEverOn(true);

    VerilatedVcdC *trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open("trace.vcd");
    int sim_time = 0;
    int tests = 0, state=0;

    int x=0, y=0;
    for(uint j=0; j<10000; j++){
        x=rand()%65536;
        y=rand()%65536;
        for(int i=0; i<8; i++){
            dut->in_a = x;
            dut->in_b = y;
            dut->select = i;
            dut->eval();
            trace->dump(sim_time);
            sim_time++;
            if(dut->alu_out != ALU(x, y, i)) {
                std::cout<<"Error!!!\n";
                std::cout<<"dut->alu_out = "<<dut->alu_out<<" and ALU(x, y, i) = "<<ALU(x, y, i)<<"\n";
                std::cout<<"x is "<<x<<", y is "<<y<<", select is "<<i<<"\n";
                return 0;
            }
        }
    }

    trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
    return 0;
}
