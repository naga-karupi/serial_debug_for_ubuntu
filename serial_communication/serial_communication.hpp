#include <libserial/SerialStream.h>
#include <string>

#pragma once

#ifndef NAGA_LIBS_SERIAL_COMMUNICATION_HPP_HEADER_GUARD
#define NAGA_LIBS_SERIAL_COMMUNICATION_HPP_HEADER_GUARD

void serial_init(LibSerial::SerialStream& serial,  std::string&USB_name, LibSerial::BaudRate set_baudrate);
void serial_end(LibSerial::SerialStream&serial);

#endif // NAGA_LIBS_SERIAL_COMMUNICATION_HPP_HEADER_GUARD
