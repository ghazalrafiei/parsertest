#include <gtest/gtest.h>
#include "../two.cpp"

// Demonstrate some basic assertions.
// Optional names without _
// TestSuiteName, TestName
TEST(TwoTest, PrintTwo) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  ASSERT_EQ(4, 4);
  // Expect equality.
  // EXPECT_EQ(1+1, 2);
  EXPECT_EQ(ReturnTwo(4), 2);
}