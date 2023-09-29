#include "utils/utils.h"

#include <algorithm>
#include <sstream>

std::string str_join(std::vector<std::string> &strs) {
  std::string ret;
  for (auto str : strs) {
    ret += str + " ";
  }
  return ret;
}

std::string str_join_int(std::vector<int> &ints) {
  std::string ret;
  for (auto item : ints) {
    ret += std::to_string(item) + " ";
  }
  return ret;
}

std::string str_join_stream(std::vector<std::string> &strs) {
  std::ostringstream ret;
  for (auto str : strs) {
    ret << str << ' ';
  }
  return ret.str();
}

std::string str_join_int_stream(std::vector<int> &ints) {
  std::ostringstream ret;
  for (auto item : ints) {
    ret << item << ' ';
  }
  return ret.str();
}

long add(long a, long b) { return a + b; }

void raw_for_loop(std::vector<int> nums) {
  for (auto &num : nums) {
    num++;
  }
}

void for_each_loop(std::vector<int> nums) {
  std::for_each(nums.begin(), nums.end(), [](int &num) { num++; });
}
