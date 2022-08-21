//include area
#include <iostream>
#include <string>
#include <signal.h>

#include "serial_graph/serial_graph.hpp"

//define area
#define OUTPUT(input) cout<<"RX :"<<input<<endl

//using namespace
using namespace std;

int main(){
// change area ================================================
    constexpr size_t RX_num = 0;
    string str{"USB_NAME"};
//=============================================================

    LibSerial::SerialStream serial;

    serial_init(serial, str, LibSerial::BaudRate::BAUD_115200);
    serial_plot(serial, RX_num);
}