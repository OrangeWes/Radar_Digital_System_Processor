// bounded queue correctness
#include "../include/radar/concurrency/bounded_queue.hpp"
#include <cassert>
#include <iostream>

int main() {
    BoundedQueue<int> q(2);
    assert(q.try_push(1));
    assert(q.try_push(2));
    assert(!q.try_push(3));
    auto v1 = q.pop();
    assert(v1 && *v1 == 1);
    auto v2 = q.pop();
    assert(v2 && *v2 == 2);
    auto v3 = q.pop();
    assert(!v3);
    std::cout << "BoundedQueue test passed\n";
    return 0;
}
