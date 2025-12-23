#include "../../include/radar/sensor/file_replay.hpp"

namespace radar {
FileReplaySensor::FileReplaySensor(const std::string& filename) : filename_(filename) {}
IQFrame FileReplaySensor::next_frame() {
    // TODO: Read next frame from file
    return IQFrame{};
}
}
