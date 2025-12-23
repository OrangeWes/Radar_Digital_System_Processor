// MPMC bounded queue (push/pop/try_push)
#pragma once
#include <queue>
#include <mutex>
#include <condition_variable>
#include <optional>

template<typename T>
class BoundedQueue {
public:
    explicit BoundedQueue(size_t capacity) : capacity_(capacity) {}
    bool try_push(const T& item) {
        std::unique_lock<std::mutex> lock(mutex_);
        if (queue_.size() >= capacity_) return false;
        queue_.push(item);
        cond_.notify_one();
        return true;
    }
    void push(const T& item) {
        std::unique_lock<std::mutex> lock(mutex_);
        cond_full_.wait(lock, [&]{ return queue_.size() < capacity_; });
        queue_.push(item);
        cond_.notify_one();
    }
    std::optional<T> pop() {
        std::unique_lock<std::mutex> lock(mutex_);
        if (queue_.empty()) return std::nullopt;
        T item = queue_.front();
        queue_.pop();
        cond_full_.notify_one();
        return item;
    }
private:
    std::queue<T> queue_;
    size_t capacity_;
    std::mutex mutex_;
    std::condition_variable cond_;
    std::condition_variable cond_full_;
};
