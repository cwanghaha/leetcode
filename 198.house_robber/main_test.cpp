#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{
vector<int> input1 = {1,2,3,1};
vector<int> input2 = {2,7,9,3,1};
vector<int> input3 = {1,2,3,1};

TEST(rob, normal) {
  EXPECT_EQ(4, rob(input1));
  EXPECT_EQ(12, rob(input2));
}


}