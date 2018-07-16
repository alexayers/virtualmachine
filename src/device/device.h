//
// Created by Alex Ayers on 7/15/18.
//

#ifndef VM_DEVICE_H
#define VM_DEVICE_H

#include <string>

using namespace std;

class Device {
public:
    Device();

    ~Device();

    string getName();

    void setName(string name);

protected:
    string name;
private:

};


#endif //VM_DEVICE_H
