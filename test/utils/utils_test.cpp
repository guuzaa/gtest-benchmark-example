#include "utils/utils.h"

#include "gtest/gtest.h"

TEST(UTILS, add) {
  ASSERT_EQ(add(1l, 2l), 1l + 2l);
  ASSERT_EQ(add(1l, 30l), 1l + 30l);
}
