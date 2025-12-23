// FFT wrapper interface
#pragma once
#include <vector>
#include <complex>

namespace radar {
class FFT {
public:
    virtual ~FFT() = default;
    virtual void compute(const std::vector<std::complex<float>>& in, std::vector<std::complex<float>>& out) = 0;
};
}
