cmake_minimum_required(VERSION 3.16)

project(main CXX)

add_subdirectory(general_purpose_lib)

if(GP)
    add_subdirectory(graph_plot)
    add_executable(main main_GP.cpp)
    target_link_libraries(main general_purpose)
    target_link_libraries(main graph_plot)
    target_link_libraries(main python3.8)
    target_include_directories(main PUBLIC /usr/include/python3.8)
endif()

if(SC)
    add_subdirectory(serial_communication)
    add_executable(main main_SC.cpp)
    target_link_libraries(main general_purpose)
    target_link_libraries(main serial_communication)
    target_link_libraries(main serial)
endif()

if(SG)
    add_subdirectory(serial_graph)
    add_executable(main main_SG.cpp)
    target_link_libraries(main general_purpose)
    target_link_libraries(main serial_graph)
endif()

target_compile_features(main PUBLIC cxx_std_20)

target_compile_options(main PUBLIC -Wall -O2)
