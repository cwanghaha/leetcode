#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> input1 = {3,2,1,5,6,4};
vector<int> input2 = {3,2,3,1,2,4,5,5,6};

TEST(findKthLargest, normal) {
  EXPECT_EQ(5, findKthLargest(input1, 2));
  EXPECT_EQ(4, findKthLargest(input2, 4));
}


}