// reads complex samples frames from file
#pragma once
#include "sensor.hpp"
#include <string>

namespace radar {
class FileReplaySensor : public ISensor {
public:
    FileReplaySensor(const std::string& filename);
    IQFrame next_frame() override;
private:
    std::string filename_;
};
}
