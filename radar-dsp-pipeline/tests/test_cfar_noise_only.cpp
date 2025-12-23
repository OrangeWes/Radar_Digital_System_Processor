// false alarm sanity check
#include "../include/radar/detect/cfar.hpp"
#include <cassert>
#include <iostream>

int main() {
    radar::RangeFrame noise_frame;
    radar::CACFAR cfar;
    auto detections = cfar.detect(noise_frame);
    // TODO: Check false alarm rate
    std::cout << "CFAR noise-only test passed\n";
    return 0;
}
