#include <iostream>
#include <chrono>
#include "test/add.hpp"

int main() {
    int a = 100000, b = 200000;
    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < 10000000; ++i) {
        volatile int result = algorithm::add(a, b);  // volatile로 최적화 방지
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count();

    std::cout << "[BENCHMARK] 1천만 회 add 수행 시간: " << elapsed << "ms\n";
    return 0;
}
