//
// Created by Alex Ayers on 7/15/18.
//

#include "memory.h"
#include "logger.h"

Memory::Memory() {

}

Memory::~Memory() {

}

void Memory::maloc(int totalSize) {
    this->addresses.reserve(totalSize);
    Logger::getInstance()->log("Memory allocated " + to_string(totalSize));
}