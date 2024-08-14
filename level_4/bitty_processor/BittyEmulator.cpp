#include <iostream>
#include <vector>
#include <cstdint>  
#include "BittyEmulator.h"

uint16_t getRange(int x, int y, uint16_t instruction) {
    if (x < 0 || y > 15 || x > y) {
        std::cerr << "Invalid bit range" << std::endl;
        return 0;
    }
    uint16_t mask = ((1 << (y - x + 1)) - 1) << x;
    return (instruction & mask) >> x;
}

extern "C" int ALU(int x, int y, int select) {
    switch (select) {
    case 0:
        return x + y;
    case 1:
        return x - y;
    case 2:
        return x & y;
    case 3:
        return x | y;
    case 4:
        return x ^ y;
    case 5:
        return x << y;
    case 6:
        return x >> y;
    case 7:
        return (x > y) ? 1 : (x < y) ? 2 : 0;
    default:
        std::cerr << "Invalid ALU operation" << std::endl;
        return 0;
    }
}

BittyEmulator::BittyEmulator() : registers_(8), done(false), reg_inst(0), reg_c(0), reg_s(0) {
    registers_[0] = 15;
    registers_[1] = 7;
    registers_[2] = 12;
    registers_[3] = 1;
    registers_[4] = 9;
    registers_[5] = 2;
    registers_[6] = 22;
    registers_[7] = 7;
}

uint16_t BittyEmulator::Evaluate(uint16_t instruction) {
    int select = getRange(2, 4, instruction);
    int Rx = getRange(13, 15, instruction);
    int Ry = getRange(10, 12, instruction);
    reg_c = ALU(registers_[Rx], registers_[Ry], select);
    reg_inst = instruction;
    reg_s = registers_[Rx];
    registers_[Rx] = reg_c;
    return reg_c;
}

uint16_t BittyEmulator::GetRegisterValue(uint16_t reg_num) const {
    if (reg_num >= registers_.size()) {
        std::cerr << "Invalid register number" << std::endl;
        return 0;
    }
    return registers_[reg_num];
}
