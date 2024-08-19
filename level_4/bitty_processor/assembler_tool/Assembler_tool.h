#include <iostream>
#include <fstream>
#include <getopt.h>
#include <string>

class Assembler_tool {
public:
    int instruction;
    void Assembler_tool();
    std::string Assemble(std::string instruction);
    int Disassemble(int instruction);
}