cmake_minimum_required(VERSION 3.16)

project(graph_plot CXX)

add_library(graph_plot STATIC graph_plot.cpp graph_plot.hpp)

#target_link_libraries(graph_plot PUBLIC python3.8)

target_include_directories(graph_plot PUBLIC /usr/include/python3.8)

target_compile_options(graph_plot PUBLIC -Wall -O2)

target_compile_features(graph_plot PUBLIC cxx_std_20)
