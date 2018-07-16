//
// Created by Alex Ayers on 7/14/18.
//
#include <iostream>
using namespace std;
#include "virtualmachine.h"
#include "../device/audio.h"
#include "logger.h"


VirtualMachine::VirtualMachine() {
    memory.maloc(1024);
    Logger::getInstance()->log("Computer started");
}

VirtualMachine::~VirtualMachine() {

}
