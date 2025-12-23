#include "../../include/radar/sensor/socket_rx.hpp"

namespace radar {
SocketRxSensor::SocketRxSensor(const std::string& address) : address_(address) {}
IQFrame SocketRxSensor::next_frame() {
    // TODO: Receive next frame from socket
    return IQFrame{};
}
}
