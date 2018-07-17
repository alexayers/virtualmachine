//
// Created by Alex Ayers on 7/16/18.
//

enum Operand {
    REGISTER = 0,
    OFFSET = 1,
    IMMEDIATE = 2
};

struct Instruction {
    int opcode;
    Operand destinationType;
    int destination;
    Operand sourceType;
    int source;
};