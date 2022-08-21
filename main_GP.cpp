//include area
#include <iostream>
#include <string>
#include <signal.h>

#include "general_purpose_lib/loop_class.hpp"
#include "graph_plot/graph_plot.hpp"

//define area
#define OUTPUT(input) cout<<"RX :"<<input<<endl

//using namespace
using namespace std;


int main(){
    int loop_ms = 100;
    loop_c loop(loop_ms);
    std::vector<int> v(10, 2);

    bar_graph(v);
    line_graph(v);
}

//function definition
void signal_handler(int signum){
    printf("stop this process");
}
