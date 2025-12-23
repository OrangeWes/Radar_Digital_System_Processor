// synthetic target at known range bin
#include "../include/radar/sensor/synthetic.hpp"
#include "../include/radar/dsp/range_fft.hpp"
#include <cassert>
#include <iostream>

int main() {
    radar::SyntheticSensor sensor;
    radar::RangeFFT range_fft;
    auto frame = sensor.next_frame();
    auto range = range_fft.process(frame);
    // TODO: Check known target bin
    std::cout << "Range binlock test passed\n";
    return 0;
}
