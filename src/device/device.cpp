//
// Created by Alex Ayers on 7/15/18.
//

#include "device.h"

Device::Device() {


}

Device::~Device() {

}

string Device::getName() {
    return name;
}

void Device::setName(string name) {
    this->name = name;
}