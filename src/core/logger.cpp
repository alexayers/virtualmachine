//
// Created by Alex Ayers on 7/15/18.
//

#include "logger.h"
#include <iostream>

Logger* Logger::instance = NULL;

Logger* Logger::getInstance() {

    if (!instance) {
        instance = new Logger;
    }

    return instance;

}

void Logger::log(string msg) {
    cout << msg << "\n";
}