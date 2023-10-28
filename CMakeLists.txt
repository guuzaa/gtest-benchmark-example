cmake_minimum_required(VERSION 3.10)

set(BUILD_SHARED_LIBS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(gtest-benchmark-demo VERSION 2023.10.28 LANGUAGES CXX)

# Includes.
set(UTILS_SRC_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/src/include)
set(UTILS_THIRD_PARTY_INCLUDE_DIR
        ${PROJECT_SOURCE_DIR}/third_party
)

include_directories(${UTILS_SRC_INCLUDE_DIR} ${UTILS_TEST_INCLUDE_DIR} ${UTILS_THIRD_PARTY_INCLUDE_DIR})
include_directories(BEFORE src) # This is needed for gtest.

add_subdirectory(src)
add_subdirectory(third_party)
add_subdirectory(test)
