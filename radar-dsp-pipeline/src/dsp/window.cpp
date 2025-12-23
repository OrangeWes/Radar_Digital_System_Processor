#include "../../include/radar/dsp/window.hpp"
#include <cmath>

namespace radar {
std::vector<float> hann_window(size_t N) {
    std::vector<float> w(N);
    for (size_t n = 0; n < N; ++n)
        w[n] = 0.5f * (1.0f - std::cos(2.0f * M_PI * n / (N - 1)));
    return w;
}
std::vector<float> hamming_window(size_t N) {
    std::vector<float> w(N);
    for (size_t n = 0; n < N; ++n)
        w[n] = 0.54f - 0.46f * std::cos(2.0f * M_PI * n / (N - 1));
    return w;
}
}
