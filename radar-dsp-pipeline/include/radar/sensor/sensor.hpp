// ISensor interface (next_frame())
#pragma once
#include "radar/types.hpp"

namespace radar {
class ISensor {
public:
    virtual ~ISensor() = default;
    virtual IQFrame next_frame() = 0;
};
}
