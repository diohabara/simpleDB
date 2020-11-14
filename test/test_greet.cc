#include "greet.h"
#include "gtest/gtest.h"

TEST(Greet, BelloBazel) { EXPECT_EQ(Greet::hello("Bazel"), 0); }
