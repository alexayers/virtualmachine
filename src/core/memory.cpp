//
// Created by Alex Ayers on 7/15/18.
//

#include "memory.h"
#include "logger.h"

Memory::Memory() {

}

Memory::~Memory() {

}

void Memory::allocateMemory(int totalSize) {
    addresses.reserve(totalSize);
    Logger::getInstance()->log("Memory allocated " + std::to_string(totalSize));
}

int Memory::getAddress(int address) {
    return addresses[address];
}

void Memory::setAddress(int address, int value) {
    addresses[address] = value;
}

int Memory::getMemSize() {
    return addresses.size();
}