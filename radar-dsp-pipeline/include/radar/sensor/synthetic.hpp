// synthetic I/Q generator
#pragma once
#include "sensor.hpp"

namespace radar {
class SyntheticSensor : public ISensor {
public:
    IQFrame next_frame() override;
};
}
