cmake_minimum_required(VERSION 3.16)

project(serial_communication CXX)

add_library(serial_communication STATIC serial_communication.cpp)

target_compile_options(serial_communication PUBLIC -O2 -Wall)

target_compile_features(serial_communication PUBLIC cxx_std_20)
