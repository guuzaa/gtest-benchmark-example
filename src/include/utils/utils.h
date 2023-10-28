#ifndef GTEST_BENCHMARK_DEMO_UTILS_H
#define GTEST_BENCHMARK_DEMO_UTILS_H

#include <string>
#include <vector>

std::string str_join(std::vector<std::string> &strs);

std::string str_join_int(std::vector<int> &ints);

std::string str_join_stream(std::vector<std::string> &strs);

std::string str_join_int_stream(std::vector<int> &ints);

long add(long a, long b);
size_t fib(size_t n);

void raw_for_loop(std::vector<int> nums);
void for_each_loop(std::vector<int> nums);

#endif  // GTEST_BENCHMARK_DEMO_UTILS_H
