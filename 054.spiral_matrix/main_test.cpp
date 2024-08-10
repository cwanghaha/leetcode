#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
vector<int> output1 = {1,2,3,6,9,8,7,4,5};
vector<vector<int>> matrix2 = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
vector<int> output2 = {1,2,3,4,8,12,11,10,9,5,6,7};
vector<vector<int>> matrix3 = {{1,2}};
vector<int> output3 = {1,2};
vector<vector<int>> matrix4 = {{1},{4}};
vector<int> output4 = {1,4};


TEST(spiralOrder, normal) {
  EXPECT_EQ(output1, spiralOrder(matrix1));
  EXPECT_EQ(output2, spiralOrder(matrix2));
  EXPECT_EQ(output3, spiralOrder(matrix3));
  EXPECT_EQ(output4, spiralOrder(matrix4));
}



}