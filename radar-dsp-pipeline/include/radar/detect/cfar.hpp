// CA-CFAR implementation
#pragma once
#include "../types.hpp"
#include <vector>

namespace radar {
class CACFAR {
public:
    std::vector<Detection> detect(const RangeFrame& frame);
};
}
