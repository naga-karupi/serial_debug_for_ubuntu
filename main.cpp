//include area
#include <iostream>
#include <string>
#include <chrono>
#include <signal.h>
#include <libserial/SerialStream.h>

//define area
#define OUTPUT(input) cout<<"RX: "<<input<<endl

#ifdef GP
#include "graph_plot/graph_plot.hpp"
#endif //GP

#ifdef SC
#include "serial_communication/serial_communication.hpp"
#endif //SC

#ifdef SG
#include "serial_graph/serial_graph.hpp"
#endif //SG

// prototype declaration

//using namespace
using namespace std;

//class definition
class loop_c{
    const int loop_sec;
    chrono::system_clock::time_point pre_time;

public:
    loop_c() = delete;
    loop_c(int _loop_sec): loop_sec(_loop_sec){
        pre_time = chrono::system_clock::now();
    }

    void operator()(){
        auto now_time = chrono::system_clock::now();
        auto time = now_time - pre_time;

        while(chrono::duration_cast<chrono::milliseconds>(time).count() <= loop_sec){
            now_time = chrono::system_clock::now();
            time = now_time - pre_time;
        }
    }
};


int main(){
    int loop_ms = 100;
    loop_c loop(loop_ms);

#ifdef GP

#endif //GP

#ifdef SC
    using namespace LibSerial;
    SerialStream serial;

// change area ================================================
    constexpr size_t RX_buff;
    string RX_buff;
    string str{"USB_NAME"};
//=============================================================


    serial_init(serial, str, BaudRate::BAUD_115200);
#endif //SC

#ifdef SG

#endif //SG

    while(1){
#ifdef SC

        OUTPUT(serial.read(RX_buff, RX_size));

#endif //SC

// free zone start ==========================================

// free zone end ============================================
        loop();
    }
}

//function definition
void signal_handler(int signum){
    printf("finish the program");
}