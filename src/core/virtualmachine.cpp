//
// Created by Alex Ayers on 7/14/18.
//
#include <iostream>
using namespace std;
#include "virtualmachine.h"
#include "../device/audio.h"
#include "logger.h"


VirtualMachine::VirtualMachine() {
    memory.allocateMemory(1024);
    Logger::getInstance()->log("Computer started");
}

VirtualMachine::~VirtualMachine() {

}

bool VirtualMachine::loadProgram(vector<int> &program) {

    if (program.size() < memory.getMemSize()) {
        for (int i = 0; i < program.size(); i++) {
            memory.setAddress(i, program[i]);
        }
    }
}