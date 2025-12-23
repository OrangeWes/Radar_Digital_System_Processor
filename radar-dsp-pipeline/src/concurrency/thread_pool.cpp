#include "../../include/radar/concurrency/thread_pool.hpp"

ThreadPool::ThreadPool(size_t n) {
    for (size_t i = 0; i < n; ++i) {
        workers_.emplace_back([this]{ worker(); });
    }
}
ThreadPool::~ThreadPool() {
    stop_ = true;
    cond_.notify_all();
    for (auto& t : workers_) t.join();
}
void ThreadPool::enqueue(std::function<void()> task) {
    {
        std::unique_lock<std::mutex> lock(mutex_);
        tasks_.push(task);
    }
    cond_.notify_one();
}
void ThreadPool::worker() {
    while (!stop_) {
        std::function<void()> task;
        {
            std::unique_lock<std::mutex> lock(mutex_);
            cond_.wait(lock, [this]{ return stop_ || !tasks_.empty(); });
            if (stop_ && tasks_.empty()) return;
            task = std::move(tasks_.front());
            tasks_.pop();
        }
        task();
    }
}
