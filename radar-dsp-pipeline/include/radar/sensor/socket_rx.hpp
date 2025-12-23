// (optional) ZMQ/TCP/UDP receiver
#pragma once
#include "sensor.hpp"

namespace radar {
class SocketRxSensor : public ISensor {
public:
    SocketRxSensor(const std::string& address);
    IQFrame next_frame() override;
private:
    std::string address_;
};
}
