#include "matplotlibcpp.h"
#include <vector>
#include <concepts> 

#pragma once

#ifndef NAGA_LIBS_GRAPH_PLOT_HPP_HEADER_GUARD
#define NAGA_LIBS_GRAPH_PLOT_HPP_HEADER_GUARD

template<class T>
concept VEC = std::is_arithmetic<T>::value;

template<VEC ARI>
void line_graph(std::vector<ARI>&);

template<VEC ARI>
void bar_graph(std::vector<ARI>&v);

#endif //NAGA_LIBS_GRAPH_PLOT_HPP_HEADER_GUARD