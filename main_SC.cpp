//include area
#include <iostream>
#include <string>
#include <signal.h>

#include "general_purpose_lib/loop_class.hpp"
#include "serial_communication/serial_communication.hpp"

//define area
#define OUTPUT(input) cout<<"RX :"<<input<<endl

// prototype declaration

//using namespace
using namespace std;


int main(){
    int loop_ms = 100;
    loop_c loop(loop_ms);

        using namespace LibSerial;
    SerialStream serial;

// change area ================================================
    constexpr size_t RX_size = ;
    char RX_buff [] = "";
    string str{"USB_NAME"};
//=============================================================


    serial_init(serial, str, BaudRate::BAUD_115200);

    while(1){

        serial.read(RX_buff, RX_size);
        OUTPUT(RX_buff);

        loop();
    }
}

//function definition
void signal_handler(int signum){
    printf("stop this process");
}