//
// Created by Alex Ayers on 7/15/18.
//

#ifndef VM_CPU_H
#define VM_CPU_H

enum flag {
    COMPARISON = 0,
    TRAP = 1,
    INTERRUPT = 2,
    ERROR = 3,
    NEGATIVE = 4
};

enum reg {
    AX = 0, //  accumlator register
    BX = 1, //  Base register
    CX = 2, //  Count register
    DX = 3, //  Data register
    IX = 4, //  Interrupt register
    IP = 5, //  Instruction pointer
    CS = 6, //  Code Segment
    DS = 7, //  Data Segment
    BP = 8, //  Base Pointer Integer
    BPS = 9,
    BPF = 10
};

enum reg_float {
    FAX = 0,
    FBX = 1,
    FCX = 2,
    FDX = 3
};

class CPU {
public:

    CPU();

    ~CPU();
private:

    int flags[5];

    int reg_int[11];

    float reg_float[4];
};


#endif //VM_CPU_H
