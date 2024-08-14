#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<vector<int>> input1 = 
{{ 1, 3, 5, 7},
 {10,11,16,20},
 {23,30,34,60}};

vector<vector<int>> input2 = {{1,1}};

TEST(searchMatrix, normal) {
  EXPECT_TRUE(searchMatrix(input1, 3));
  EXPECT_FALSE(searchMatrix(input1, 13));
  EXPECT_FALSE(searchMatrix(input2, 2));
}


}