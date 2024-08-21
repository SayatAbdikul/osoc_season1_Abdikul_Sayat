#ifndef ASSEMBLER_TOOL_H
#define ASSEMBLER_TOOL_H
#include <iostream>
#include <fstream>
#include <getopt.h>
#include <string>

class Assembler_tool {
public:
    std::string commands[8] = {"ADD", "SUB", "AND", "OR", "XOR", "SHL", "SHR", "CMP"};
    Assembler_tool();
    int Assemble(std::string instruction);
    std::string Disassemble(int instruction);
};

#endif