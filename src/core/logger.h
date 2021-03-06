//
// Created by Alex Ayers on 7/15/18.
//

#ifndef VM_LOGGER_H
#define VM_LOGGER_H

#include <string>

class Logger {
public:
    static Logger* getInstance();

    void log(std::string msg);

private:
    Logger() {};

    ~Logger();

    static Logger* instance;
};


#endif //VM_LOGGER_H
