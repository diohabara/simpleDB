#include "greet.h"
#include "gtest/gtest.h"

TEST(Greet, BelloBazel) {
  EXPECT_EQ(Greet::hello("Bazel"), 0);
  EXPECT_EQ(greet("Bazel"), "Hello Bazel");
}
