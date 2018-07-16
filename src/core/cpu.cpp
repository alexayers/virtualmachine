//
// Created by Alex Ayers on 7/15/18.
//

#include "cpu.h"
#include "logger.h"
#include <iostream>
using namespace std;

CPU::CPU() {
    for (int i = 0; i < (sizeof(flags)/sizeof(*flags)); i++) {
        flags[i] = 0;
    }

    for (int i = 0; i < (sizeof(reg_int)/sizeof(*reg_int)); i++) {
        reg_int[i] = 0;
    }

    for (int i = 0; i < (sizeof(reg_float)/sizeof(*reg_float)); i++) {
        reg_float[i] = 0;
    }

}

CPU::~CPU() {

}