//
// Created by Alex Ayers on 7/14/18.
//

#include <vector>
#include "memory.h"
#include "cpu.h"
#include "../device/device.h"

#ifndef VM_VIRTUALMACHINE_H
#define VM_VIRTUALMACHINE_H



class VirtualMachine {

public:

    VirtualMachine();

    ~VirtualMachine();


private:

    Device devices[4];

    CPU cpu;

    Memory memory;

};


#endif //VM_VIRTUALMACHINE_H
