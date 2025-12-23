// range processing stage
#pragma once
#include "fft.hpp"
#include "../types.hpp"

namespace radar {
class RangeFFT {
public:
    RangeFrame process(const IQFrame& frame);
};
}
