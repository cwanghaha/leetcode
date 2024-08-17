#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<vector<int>> input1  = {{2},{3,4},{6,5,7},{4,1,8,3}};
vector<vector<int>> input2  = {{-10}};


TEST(minimumTotal, normal) {
  EXPECT_EQ(11, minimumTotal(input1));
  EXPECT_EQ(-10, minimumTotal(input2));
}

}