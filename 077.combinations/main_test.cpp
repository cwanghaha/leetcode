#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<vector<int>> output1 = {{1,2},{1,3},{1,4},{2,3},{2,4},{3,4}};
vector<vector<int>> output2 = {{1}};

TEST(combine, normal) {
  EXPECT_EQ(output1, combine(4, 2));
  EXPECT_EQ(output2, combine(1, 1));
}


}