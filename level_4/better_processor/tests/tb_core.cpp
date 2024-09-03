#include <verilated.h>
#include "VCore.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#include "BetterEmulator.h"
#define MAX_SIM_TIME 100
int instructions[] = {16807, 15089, 44249, 3114, 46978};
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VCore *dut = new VCore;
    Verilated::traceEverOn(true);
    VerilatedVcdC *trace = new VerilatedVcdC;
    dut->trace(trace, 99);
    trace->open("waveform.vcd");
    int sim_time = 0;
    int tests = 0, state=0;

    // Reset the DUT
    dut->clk = 0;
    dut->reset = 1;
    dut->eval(); // Evaluate once with reset active
    dut->clk = 1;
    dut->eval();
    dut->reset = 0; // Release reset
    dut->clk = 0;   // Prepare for next clock cycle

    BetterEmulator emulator;
    int i=0;
    //std::cout<<emulator.Evaluate(16807)<<" ddd\n";
    while(i<5){
        dut->clk = !(dut->clk);
        if(state==0) dut->instruction = instructions[i];
        dut->eval();
        trace->dump(sim_time);
        sim_time++;
        state++;
        int result = 0;
        if(state==6) result = emulator.Evaluate(instructions[i]);
        if(state==6 && result!=dut->d_out) {
            std::cout<<"Error!!!\n";
            std::cout<<"Emulator value "<<result<<"\n";
            std::cout<<"Verilog value "<<dut->d_out<<"\n";
            std::cout<<"Instruction "<<instructions[i]<<"\n";
            std::cout<<"Done "<<(dut->done==1)<<"\n";
        }
        //if(dut->done==1) std::cout<<state<<"dd\n";
        // if(state==6){
        //     std::cout<<"Emulator value "<<result<<"\n";
        //     std::cout<<"Verilog value "<<dut->d_out<<"\n";
        //     std::cout<<"Done "<<dut->done<<"\n";
        // }
        if(state==6) state=0, tests++, i++;
    }
    // while(sim_time < MAX_SIM_TIME){
    //     dut->clk = !(dut->clk);
    //     dut->eval();
    //     sim_time++;
    //     state++;
    //     if(state>2) state=0, tests++;
    // }

    std::cout << "Number of Tests: " << tests << "\n";
    trace->close();
    delete dut;
    return 0;
}
