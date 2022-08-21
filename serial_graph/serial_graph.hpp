#include "../serial_communication/serial_communication.hpp"
#include "../graph_plot/graph_plot.hpp"

#include <cstdint>

#pragma once

#ifndef NAGA_LIBS_SERIAL_GRAPH_HPP_HEADER_GUARD
#define NAGA_LIBS_SERIAL_GRAPH_HPP_HEADER_GUARD

void serial_plot(LibSerial::SerialStream&serial, const size_t RX_num);

#endif //NAGA_LIBS_SERIAL_GRAPH_HPP_HEADER_GUARD
