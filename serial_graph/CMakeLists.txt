cmake_minimum_required(VERSION 3.16)

project(serial_graph CXX)

add_library(serial_graph STATIC serial_graph.cpp)

target_link_libraries(serial_graph graph_plot)
target_link_libraries(serial_graph serial_communication)
target_link_libraries(serial_graph python3.8)

target_include_directories(serial_graph PUBLIC /usr/include/python3.8)

target_compile_features(serial_graph PUBLIC cxx_std_20)

target_link_options(serial_graph PUBLIC -Wall -O2)
