//
// Created by Alex Ayers on 7/15/18.
//

#ifndef VM_MEMORY_H
#define VM_MEMORY_H

#include <vector>

class Memory {

public:
    Memory();

    ~Memory();

    void allocateMemory(int totalSize);

    int getMemSize();

    int getAddress(int address);

    void setAddress(int address, int value);

private:
    std::vector<int> addresses;
};


#endif //VM_MEMORY_H
