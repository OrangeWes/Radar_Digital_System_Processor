// simple RAII timer for per-stage timing
#pragma once
#include <chrono>

class Stopwatch {
public:
    Stopwatch() : start_(std::chrono::high_resolution_clock::now()) {}
    ~Stopwatch() {}
    double elapsed() const {
        auto end = std::chrono::high_resolution_clock::now();
        return std::chrono::duration<double>(end - start_).count();
    }
private:
    std::chrono::high_resolution_clock::time_point start_;
};
