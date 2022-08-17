cmake_minimum_required(VERSION 3.16)

project(main CXX)

set(CMAKE_CXX_FLAGS "-Wall -O2 -std=c++2a")

if(GP)
    set(CMAKE_CXX_FLAGS "-DGP")
    add_subdirectory(graph_plot)
    add_executable(main main.cpp)
    target_link_libraries(main graph_plot)
    target_link_libraries(main python3.8)
endif()

if(SC)
    set(CMAKE_CXX_FLAGS "-DSC")
    add_subdirectory(serial_communication)
    add_executable(main main.cpp)
    target_link_libraries(main serial_communication)
    target_link_libraries(main serial)
endif()

if(SG)
    set(CMAKE_CXX_FLAGS "-DSG")
    add_subdirectory(serial_graph)
    add_executable(main main.cpp)
    target_link_libraries(main serial_graph)
endif()

