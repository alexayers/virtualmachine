//
// Created by Alex Ayers on 7/15/18.
//

#ifndef VM_OPCODES_H
#define VM_OPCODES_H


// Arithmetic
const int ADD = 0;
const int SUB = 1;
const int MUL = 2;
const int DIV = 3;
const int MOD = 4;
const int ADDF = 5;
const int SUBF = 6;
const int DIVF = 7;
const int MULF = 8;
const int NEG = 9;
const int INC = 10;
const int DEC = 11;

// Bit shifting
const int SHL = 12;
const int SHR = 13;

// Data Transfer

const int MOV = 14;
const int MOVF = 15;
const int XCHG = 16;

// Flags

const int pushf = 17;
const int popf = 18;

// Logical

const int AND = 19;
const int OR = 20;
const int NOT = 21;
const int XOR = 22;

// Looping

const int LOOP = 23;
const int LOOPNZ = 24;
const int LOOPZ = 25;
const int LOOPE = 26;
const int LOOPNE = 27;

// processor

const int HALT = 28;

// stack

const int POP = 29;
const int PUSH = 30;
const int PUSHA = 31;
const int POPA = 32;

// tranfers (conditional)

const int JE = 33;
const int JNE = 34;
const int JL = 35;
const int JG = 36;
const int JLE = 37;
const int JGE = 38;

// transfer (unconditional)

const int JMP = 39;
const int CALL = 40;
const int RET = 41;
const int INT = 42;

// Conversion

const int CSI = 43;
const int CIS = 44;
const int CIF = 45;


#endif //VM_OPCODES_H
