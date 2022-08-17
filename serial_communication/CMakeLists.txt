cmake_minimum_required(VERSION 3.16)

project(serial_communication CXX)

add_library(serial_communication STATIC serial_communication.cpp)

set(CMAKE_CXX_FLAGS "-Wall -O2")