#include "serial_communication.hpp"
#include <iostream>

using namespace std;
using namespace LibSerial;

//config serial communication
void serial_init(SerialStream&serial, string&USB_name, BaudRate set_baudrate){
    try{
        serial.Open(USB_name);
    }
    catch(const OpenFailed& of){
        cerr<<"open failed"<<endl;
    }

    serial.SetBaudRate(set_baudrate);
    serial.SetCharacterSize(CharacterSize::CHAR_SIZE_8);
    serial.SetFlowControl(FlowControl::FLOW_CONTROL_HARDWARE);
    serial.SetParity(Parity::PARITY_NONE);
    serial.SetStopBits(StopBits::STOP_BITS_1);

    std::cout<<"test"<<std::endl;
}

void serial_end(SerialStream&serial){
    serial.Close();
}
