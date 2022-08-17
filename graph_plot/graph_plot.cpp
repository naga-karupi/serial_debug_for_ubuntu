#include "graph_plot.hpp"

namespace plt = matplotlibcpp;
using namespace std;

template<VEC ARI>
void line_graph(vector<ARI>&v){
    vector<int> x_line(v.size());
    
    plt::title("graph_plot")
    plt::figure_size(1200, 780);
    plt::plot(x_line, v);
    plt::show();
}

template<VEC ARI>
void bar_graph(vector<ARI>&v){
    plt::bar(v);
    plt::show();
}