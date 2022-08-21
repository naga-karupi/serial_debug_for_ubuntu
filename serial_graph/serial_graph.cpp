#include "serial_graph.hpp"

using namespace std;
using namespace LibSerial;

void serial_plot(SerialStream&serial, const size_t RX_num){
    vector<uint8_t> v(0, RX_num);
    for (auto &i: v){
        char tmp;
        serial>>tmp;

        i = tmp;
    }

    line_graph(v);
}
