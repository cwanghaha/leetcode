#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{
vector<int> input1 = {1,-2,3,-2};
vector<int> input2 = {5,-3,5};
vector<int> input3 = {-3,-2,-3};

TEST(maxSubarraySumCircular, normal) {
  EXPECT_EQ(3, maxSubarraySumCircular(input1));
  EXPECT_EQ(10, maxSubarraySumCircular(input2));
  EXPECT_EQ(-2, maxSubarraySumCircular(input3));
}


}