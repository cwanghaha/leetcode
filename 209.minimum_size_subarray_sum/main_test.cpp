#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> num1 = {2,3,1,2,4,3};
vector<int> num2 = {1,4,4};
vector<int> num3 = {1,1,1,1,1,1,1,1};
vector<int> num4 = {8,6,7,8};

TEST(minSubArrayLen, normal) {
  EXPECT_EQ(1, minSubArrayLen(3, num4));
  EXPECT_EQ(2, minSubArrayLen(7, num1));
  EXPECT_EQ(1, minSubArrayLen(4, num2));
  EXPECT_EQ(0, minSubArrayLen(11, num3));
}


}