cmake_minimum_required(VERSION 3.16)

project(graph_prot CXX)

add_library(graph_plot STATIC graph_plot.cpp)
target_link_libraries(graph_plot python3.8)

set(CMAKE_CXX_FLAGS "-Wall -O2")

