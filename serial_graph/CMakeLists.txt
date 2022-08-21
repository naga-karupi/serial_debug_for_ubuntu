cmake_minimum_required(VERSION 3.16)

project(serial_graph CXX)

add_library(serial_graph STATIC serial_graph.cpp)

set(CMAKE_CXX_FLAGS "-Wall -O2")