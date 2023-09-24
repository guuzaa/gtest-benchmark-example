#ifndef GTEST_BENCHMARK_DEMO_UTILS_H
#define GTEST_BENCHMARK_DEMO_UTILS_H

#include <string>
#include <vector>

std::string str_join(std::vector<std::string> &strs);

std::string str_join_int(std::vector<int> &ints);

std::string str_join_stream(std::vector<std::string> &strs);

std::string str_join_int_stream(std::vector<int> &ints);

long add(long a, long b);

#endif  // GTEST_BENCHMARK_DEMO_UTILS_H
