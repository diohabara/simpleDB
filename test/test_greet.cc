#include "gtest/gtest.h"
#include "greet.h"

TEST(Greet, BelloBazel) {
  EXPECT_EQ(Greet::hello("Bazel"), 0);
}
