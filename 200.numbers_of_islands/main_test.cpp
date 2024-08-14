#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{
vector<vector<char>> input1 = 
{ {'1','1','1','1','0'},
  {'1','1','0','1','0'},
  {'1','1','0','0','0'},
  {'0','0','0','0','0'}};

vector<vector<char>> input2 = 
{ {'1','1','0','0','0'},
  {'1','1','0','0','0'},
  {'0','0','1','0','0'},
  {'0','0','0','1','1'}};

TEST(numIslands, normal) {
  EXPECT_EQ(1, numIslands(input1));
  EXPECT_EQ(3, numIslands(input2));
}


}