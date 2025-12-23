// Doppler processing stage (CPI batching)
#pragma once
#include "../types.hpp"

namespace radar {
class DopplerFFT {
public:
    RDMap process(const std::vector<RangeFrame>& cpi);
};
}
