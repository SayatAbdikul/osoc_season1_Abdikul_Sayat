#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include "Assembler_tool.h"
int getRange(int x, int y, int instruction) {
    if (x < 0 || y > 15 || x > y) {
        std::cerr << "Invalid bit range" << std::endl;
        return 0;
    }
    int mask = ((1 << (y - x + 1)) - 1) << x;
    return (instruction & mask) >> x;
}
Assembler_tool::Assembler_tool(){}
int Assembler_tool::AssembleGeneral(std::string instruction){
    std::string command = ""; 
    int i=0, x=0, y=0, p=0;
    while(instruction[i]!=' ') command += instruction[i], i++;
    while(instruction[i]==' ' || instruction[i]=='r') i++;
    while(instruction[i]!=' ') x+=(instruction[i]-'0')*pow(10, p), p++, i++;
    p=0;
    i+=2;
    while(instruction[i]!='\n' && instruction[i]!=' ' && i<instruction.length()) y+=(instruction[i]-'0')*pow(10, p), p++, i++;
    int result=0, select=0;
    for(int i=0; i<command.length(); i++) command[i] = toupper(command[i]);
    for(int i=0; i<8; i++) if(commands[i]==command) {select=i; break;}
    result += (x<<13);
    result += (y<<10);
    result += (select<<2);
    std::cout<<"from "<<instruction<<" to "<<result<<"\n";
    return result;
}
int Assembler_tool::AssembleImmediate(std::string instruction){
    std::string command = ""; 
    int i=0, x=0, y=0, p=0;
    while(instruction[i]!='i') command += instruction[i], i++;
    i++;
    while(instruction[i]==' ' || instruction[i]=='r') i++;
    while(instruction[i]!=' ') x+=(instruction[i]-'0')*pow(10, p), p++, i++;
    p=0;
    i+=2;
    while(instruction[i]!='\n' && instruction[i]!=' ' && i<instruction.length()) y+=(instruction[i]-'0')*pow(10, p), p++, i++;
    int result=0, select=0;
    for(int i=0; i<command.length(); i++) command[i] = toupper(command[i]);
    for(int i=0; i<8; i++) if(commands[i]==command) {select=i; break;}
    result += (x<<13);
    result += (y<<5);
    result += (select<<2);
    result += 1;
    std::cout<<"from "<<instruction<<" to "<<result<<"\n";
    return result;
}
int Assembler_tool::Assemble(std::string instruction){
    std::string command = ""; 
    int i=0, x=0, y=0, p=0;
    while(instruction[i]!=' ') command += instruction[i], i++;
    if(command[i-1]=='i') return AssembleImmediate(instruction);
    else return AssembleGeneral(instruction);
}
std::string Assembler_tool::DisassembleGeneral(int instruction){
    std::string command = "";
    command += commands[getRange(2, 4, instruction)]+" r";
    command += std::to_string(getRange(13, 15, instruction))+" r";
    command += std::to_string(getRange(10, 12, instruction));
    std::cout<<"from "<<instruction<<" to "<<command<<"\n";
    return command;
}

std::string Assembler_tool::DisassembleImmediate(int instruction){
    std::string command = "";
    command += commands[getRange(2, 4, instruction)]+"i r";
    command += std::to_string(getRange(13, 15, instruction))+" #";
    command += std::to_string(getRange(5, 12, instruction));
    std::cout<<"from "<<instruction<<" to "<<command<<"\n";
    return command;
}

std::string Assembler_tool::Disassemble(int instruction){
    if(getRange(0, 1, instruction)) return DisassembleImmediate(instruction);
    else return DisassembleGeneral(instruction);
}
