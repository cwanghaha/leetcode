#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(climbStairs, normal) {
  EXPECT_EQ(2, climbStairs(2));
  EXPECT_EQ(3, climbStairs(3));
  EXPECT_EQ(5, climbStairs(4));
}


}