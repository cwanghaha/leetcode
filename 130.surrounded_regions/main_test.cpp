#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<vector<char>> input1 = 
{{'X','X','X','X'},
 {'X','O','O','X'},
 {'X','X','O','X'},
 {'X','O','X','X'}};

vector<vector<char>> output1 = 
{{'X','X','X','X'},
 {'X','X','X','X'},
 {'X','X','X','X'},
 {'X','O','X','X'}};

TEST(solve, normal) {
  solve(input1);
  EXPECT_EQ(output1, input1);
}


}