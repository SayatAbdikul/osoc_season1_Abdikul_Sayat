#include <iostream>
#include <vector>
#include <cstdint>  
#include "BetterEmulator.h"

uint16_t getRange(int x, int y, uint16_t instruction) {
    if (x < 0 || y > 15 || x > y) {
        std::cerr << "Invalid bit range" << std::endl;
        return 0;
    }
    uint16_t mask = ((1 << (y - x + 1)) - 1) << x;
    return (instruction & mask) >> x;
}
int max_size = 65536;
uint16_t ALU_internall(uint x, uint y, uint select){
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
extern "C" int ALU(int x, int y, int select) {
    return ALU_internall(x, y, select);
}

BetterEmulator::BetterEmulator() : registers_(8), done(false), reg_inst(0), reg_c(0), reg_s(0) {
    //registers_ = {1, 2, 3, 4, 5, 6, 7, 8};
}

uint16_t BetterEmulator::Evaluate(uint16_t instruction) {
    int select = getRange(2, 4, instruction);
    int Rx = getRange(13, 15, instruction);
    int Ry = getRange(10, 12, instruction);
    // std::cout<<"Rx "<<Rx<<"\n";
    // std::cout<<"Ry "<<Ry<<"\n";
    // std::cout<<"Select "<<select<<"\n";
    reg_c = ALU(registers_[Rx], registers_[Ry], select);
    reg_inst = instruction;
    reg_s = registers_[Rx];
    registers_[Rx] = reg_c;
    return reg_c;
}

uint16_t BetterEmulator::GetRegisterValue(uint16_t reg_num) const {
    if (reg_num >= registers_.size()) {
        std::cerr << "Invalid register number" << std::endl;
        return 0;
    }
    return registers_[reg_num];
}
