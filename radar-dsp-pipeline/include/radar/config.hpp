// config struct + defaults
#pragma once
#include <string>

namespace radar {
struct Config {
    size_t fft_size = 256;
    size_t cpi_size = 8;
    float detection_threshold = 12.0f;
    std::string input_file = "";
    bool use_synthetic = true;
};
}
