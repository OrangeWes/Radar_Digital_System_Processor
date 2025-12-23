#include "../../include/radar/io/csv_logger.hpp"
#include <fstream>

namespace radar {
CSVLogger::CSVLogger(const std::string& filename) : filename_(filename) {}
void CSVLogger::log(const std::vector<Detection>& detections) {
    std::ofstream file(filename_, std::ios::app);
    for (const auto& d : detections) {
        file << d.range << "," << d.doppler << "," << d.snr << "," << d.timestamp << "\n";
    }
}
}
