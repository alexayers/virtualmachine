cmake_minimum_required(VERSION 3.10)
project(virtualmachine)

set(CMAKE_CXX_STANDARD 11)

include_directories(src/core)
include_directories(src/device)

add_executable(virtualmachine
        src/core/cpu.cpp
        src/core/cpu.h
        src/core/logger.cpp
        src/core/logger.h
        src/core/memory.cpp
        src/core/memory.h
        src/core/opcodes.h
        src/core/virtualmachine.cpp
        src/core/virtualmachine.h
        src/device/audio.cpp
        src/device/audio.h
        src/device/device.cpp
        src/device/device.h
        src/device/disk.cpp
        src/device/disk.h
        src/main.cpp)
