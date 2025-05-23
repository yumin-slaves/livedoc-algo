cmake_minimum_required(VERSION 3.16)
project(LIVEDOC_ALGO)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(algorithm STATIC
    src/add.cpp
    # src/crdt.cpp
    # src/utils.cpp
)

# add_executable(test_crdt test/crdt_test.cpp)
# target_link_libraries(test_crdt algorithm)

# add_executable(benchmark_crdt benchmark/crdt_benchmark.cpp)
# target_link_libraries(benchmark_crdt algorithm)

add_executable(test_add test/add_test.cpp)
target_link_libraries(test_add algorithm)