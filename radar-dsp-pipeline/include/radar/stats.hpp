// counters, histograms, timers (atomic-friendly)
#pragma once
#include <atomic>
#include <vector>
#include <chrono>

namespace radar {
struct Stats {
    std::atomic<size_t> frames_processed{0};
    std::atomic<size_t> detections{0};
    std::vector<size_t> histogram;
    std::chrono::duration<double> total_time{0};
};
}
