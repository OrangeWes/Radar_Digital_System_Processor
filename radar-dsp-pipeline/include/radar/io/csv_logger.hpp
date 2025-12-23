// detections -> CSV
#pragma once
#include "../types.hpp"
#include <string>
#include <vector>

namespace radar {
class CSVLogger {
public:
    CSVLogger(const std::string& filename);
    void log(const std::vector<Detection>& detections);
private:
    std::string filename_;
};
}
