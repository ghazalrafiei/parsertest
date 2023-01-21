#include <gtest/gtest.h>
#include "../two.cpp"
// #include "../Prime_Assignment.cpp"

// Demonstrate some basic assertions.
// Optional names without _
// TestSuiteName, TestName
TEST(TwoTest, PrintTwo) {
  EXPECT_EQ(ReturnTwo(4), 2);
}

// TEST(Prime, prime){
//  EXPECT_FALSE(is_prime(12));
//  }

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
