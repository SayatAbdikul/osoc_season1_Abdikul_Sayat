#include <iostream>
#include "BetterEmulator.h"
using namespace std;
int main(int argc, char **argv){
    BetterEmulator emulator;
    cout<<emulator.memory.size();
    for(int i=0; i<30; i++){
        emulator.Evaluate();
    }
}