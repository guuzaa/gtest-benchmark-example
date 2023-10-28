#include "utils/utils.h"

#include <vector>
#include "gtest/gtest.h"

TEST(UTILS, add) {
  ASSERT_EQ(add(1l, 2l), 1l + 2l);
  ASSERT_EQ(add(1l, 30l), 1l + 30l);
}

TEST(UTILS, fib) {
  std::vector<std::pair<size_t, size_t>> test_cases = {
      {0, 0}, {1, 1}, {2, 1}, {3, 2}, {4, 3}, {5, 5}, {6, 8}, {7, 13}, {21, 10946},
  };
  for (auto [input, expected] : test_cases) {
    ASSERT_EQ(fib(input), expected);
  }
}
