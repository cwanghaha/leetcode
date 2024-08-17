#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<vector<int>> input1 = {{1,3,1},{1,5,1},{4,2,1}};
vector<vector<int>> input2 = {{1,2,3},{4,5,6}};

TEST(minPathSum, normal) {
  EXPECT_EQ(7, minPathSum(input1));
  EXPECT_EQ(12, minPathSum(input2));
}


}