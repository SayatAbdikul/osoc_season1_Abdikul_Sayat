#include <verilated.h>
#include "VALU.h"          
#include "verilated_vcd_c.h"
#include <iostream>
#define MAX_SIM_TIME 400



int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    VALU *dut = new VALU;

    VerilatedVcdC *trace = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(trace, 99);
    trace->open("trace.vcd");
    // Initial values
    dut->carry_in = 0;
    dut->in_a = 10;
    dut->in_b = 3;
    dut->select = 0;
    dut->mode = 0;
    int sim_time=0;
    std::cout<<"arithmetical operations test starts here\n";
    while(sim_time<MAX_SIM_TIME){
        int select = sim_time%16;
        dut->select = select;
        bool success=0;
        dut->eval();
        trace->dump(sim_time);
        int out = dut->alu_out, a=dut->in_a, b=dut->in_b;
        switch(select){
            case 0:
                success = (out == a);
                break;
            case 1:
                success = (out == (a | b));
                break;
            case 2:
                success = (out == a | (~b));
                break;
            case 3:
                success = (out == 65535);
                break;
            case 4:
                success = (out == (a | (a & ~b)));
                break;
            case 5:
                success = (out == (a | b) + (a & ~b));
                break;
            case 6:
                success = (out == a - b - 1);
                break;
            case 7:
                success = (out == (a & ~b) - 1);
                break;
            case 8:
                success = (out == a + (a & b));
                break;
            case 9:
                success = (out == a + b);
                break;
            case 10:
                success = (out ==  (a | (~b)) + (a & b));
                break;
            case 11:
                success = (a & b) - 1;
                break;
            case 12:
                success = (out == a + a);
                break;
            case 13:
                success = (out == (a | b) + a);
                break;
            case 14:
                success = (a | (~b)) + a;
                break;
            case 15:
                success = (out == a - 1);
                break;
        }
        if(!success){
            std::cout<<"error on operation "<<select<<";\n out="<<out<<"\n";
            break;
        }
        sim_time++;
    }
    dut->carry_in = 0;
    dut->in_a = 10;
    dut->in_b = 3;
    dut->select = 0;
    dut->mode = 1;
    std::cout<<"logical operations test starts here\n";
    while(sim_time<MAX_SIM_TIME*2){
        int select = sim_time%16;
        const int p = 65536;
        dut->select = select;
        bool success=0;
        dut->eval();
        trace->dump(sim_time);
        int out = dut->alu_out, a=dut->in_a, b=dut->in_b;
        switch(select){
            case 0:
                success = (out == p+~a);
                break;
            case 1:
                success = (out == p+~(a | b));
                break;
            case 2:
                success = (out == ((~a) & b));
                break;
            case 3:
                success = (out == 0);
                break;
            case 4:
                success = (out == p+~(a & b));
                break;
            case 5:
                success = (out == p+~b);
                break;
            case 6:
                success = (out == (a ^ b));
                break;
            case 7:
                success = (out == (a & (~b)));
                break;
            case 8:
                success = out == (~a) | b;
                break;
            case 9:
                success = (out == p+~(a ^ b));
                break;
            case 10:
                success = (out == b);
                break;
            case 11:
                success = out == (a & b);
                break;
            case 12:
                success = (out == 1);
                break;
            case 13:
                success = (out == p+(a | ~b));
                break;
            case 14:
                success = (a | b);
                break;
            case 15:
                success = (out == a);
                break;
        }
        if(!success){
            std::cout<<success<<"\n";
            std::cout<<"error on operation "<<select<<";\n out="<<out<<"\n";
            break;
        }
        sim_time++;
    }
    // Cleanup
    trace->close();
    delete dut;
    delete trace;

    return 0;
}
