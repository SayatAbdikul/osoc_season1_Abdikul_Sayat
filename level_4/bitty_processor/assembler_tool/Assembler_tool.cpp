#include <iostream>
#include <string>
#include <cmath>
#include "Assembler_tool.h"
int getRange(int x, int y, int instruction) {
    if (x < 0 || y > 15 || x > y) {
        std::cerr << "Invalid bit range" << std::endl;
        return 0;
    }
    int mask = ((1 << (y - x + 1)) - 1) << x;
    return (instruction & mask) >> x;
}
Assembler_tool::Assembler_tool(): instruction(0){}

Assembler_tool::Assemble(std::string instruction){
    std::string command = ""; 
    int i=0, x=0, y=0, p=0;
    while(instruction[i]!=' ') command += instruction[i], i++;
    while(instruction[i]==' ') i++;
    while(instruction[i]!=',') x+=(instruction[i]-'0')*pow(10, p), p++, i++;
    p=0;
    i+=2;
    while(instruction[i]!='\n' && instruction[i]!=' ' && i<instruction.length()) y+=(instruction[i]-'0')*pow(10, p), p++, i++;
    int result, select=0;
    std::string commands[] = {"ADD", "SUB", "AND", "OR", "XOR", "SHL", "SHR", "CMP"};
    for(int i=0; i<8; i++) if(commands[i]==command) {select=i; break;}
    result += (x<<13);
    result += (y<<10);
    result += (select<<2);
    result += reset;
    return result;
}
Assembler_tool::Disassemble(int instruction){
    
}