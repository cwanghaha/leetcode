#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> input1 = {1,3,5,6};

TEST(searchInsert, normal) {
  EXPECT_EQ(2, searchInsert(input1, 5));
  EXPECT_EQ(1, searchInsert(input1, 2));
  EXPECT_EQ(4, searchInsert(input1, 7));
}


}