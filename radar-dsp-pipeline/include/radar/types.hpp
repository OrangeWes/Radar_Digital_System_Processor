// IQFrame, RangeFrame, RDMap, Detection, timestamps
#pragma once
#include <vector>
#include <complex>
#include <cstdint>

namespace radar {
struct IQFrame {
    std::vector<std::complex<float>> samples;
    uint64_t timestamp;
};
struct RangeFrame {
    std::vector<float> bins;
    uint64_t timestamp;
};
struct RDMap {
    std::vector<std::vector<float>> map;
    uint64_t timestamp;
};
struct Detection {
    float range;
    float doppler;
    float snr;
    uint64_t timestamp;
};
}
