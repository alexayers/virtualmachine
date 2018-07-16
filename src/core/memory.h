//
// Created by Alex Ayers on 7/15/18.
//

#ifndef VM_MEMORY_H
#define VM_MEMORY_H

#include <vector>

using namespace std;

class Memory {

public:
    Memory();

    ~Memory();

    void maloc(int totalSize);

    int getMemSize();

    int getAddress(int address);

    void setAddress(int address, int value);

private:
    vector<int> addresses;
};


#endif //VM_MEMORY_H
