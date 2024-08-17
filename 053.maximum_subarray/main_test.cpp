#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{
vector<int> input1 = {-2,1,-3,4,-1,2,1,-5,4};
vector<int> input2 = {1};
vector<int> input3 = {5,4,-1,7,8};

TEST(maxSubArray, normal) {
  EXPECT_EQ(6, maxSubArray(input1));
  EXPECT_EQ(1, maxSubArray(input2));
  EXPECT_EQ(23, maxSubArray(input3));
}


}