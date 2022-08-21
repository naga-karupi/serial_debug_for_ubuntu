#include "matplotlib-cpp/matplotlibcpp.h"
#include <vector>
#include <concepts> 

#include <iostream>

#pragma once

#ifndef NAGA_LIBS_GRAPH_PLOT_HPP_HEADER_GUARD
#define NAGA_LIBS_GRAPH_PLOT_HPP_HEADER_GUARD

template<class T>
concept VEC = std::is_arithmetic<T>::value;

namespace plt = matplotlibcpp;

template<VEC ARI>
void bar_graph(std::vector<ARI>&v){
    plt::bar(v);
    plt::show();
}

template<VEC ARI>
void line_graph(std::vector<ARI>&v){
    std::vector<int> x_line(v.size());
    for(auto i = 0LU; i < v.size(); i++) x_line[i] = i;

    plt::figure_size(1200, 780);
    plt::legend();
    plt::plot(x_line, v);
    plt::show();
}

#endif //NAGA_LIBS_GRAPH_PLOT_HPP_HEADER_GUARD