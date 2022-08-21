cmake_minimum_required(VERSION 3.16)

project(general_purpose CXX)

add_library(general_purpose STATIC loop_class.cpp)

target_compile_options(general_purpose PUBLIC -O2 -Wall)

target_compile_features(general_purpose PUBLIC cxx_std_20)
