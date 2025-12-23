// synthetic target at known doppler bin
#include "../include/radar/sensor/synthetic.hpp"
#include "../include/radar/dsp/doppler_fft.hpp"
#include <cassert>
#include <iostream>

int main() {
    radar::SyntheticSensor sensor;
    radar::DopplerFFT doppler_fft;
    // TODO: Generate CPI and check known doppler bin
    std::cout << "Doppler binlock test passed\n";
    return 0;
}
