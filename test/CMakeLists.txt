cmake_minimum_required(VERSION 3.10)

file(GLOB_RECURSE test_files */*test.cpp)

add_executable(
        utils_test
        ${test_files}
)

target_link_libraries(utils_test PRIVATE demo gtest gmock_main)

include(GoogleTest)

set_target_properties(utils_test
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/test"
        DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
        120
)


file(GLOB_RECURSE bench_files */*bench.cpp)

add_executable(
        utils_bench
        ${bench_files}
)

target_link_libraries(utils_bench PRIVATE demo benchmark)

set_target_properties(utils_bench
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bench"
        DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
        120
)
