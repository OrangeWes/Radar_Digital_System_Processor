// FFTW implementation (optional)
#pragma once
#include "fft.hpp"

namespace radar {
class FFT_FFTW : public FFT {
public:
    void compute(const std::vector<std::complex<float>>& in, std::vector<std::complex<float>>& out) override;
};
}
