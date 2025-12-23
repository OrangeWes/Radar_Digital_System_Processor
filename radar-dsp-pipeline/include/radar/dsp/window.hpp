// Hann/Hamming window functions
#pragma once
#include <vector>

namespace radar {
std::vector<float> hann_window(size_t N);
std::vector<float> hamming_window(size_t N);
}
