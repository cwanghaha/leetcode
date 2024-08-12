#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> input1 = {1,2,3};
vector<int> output1 = {1,2,4};
vector<int> input2 = {4,3,2,1};
vector<int> output2 = {4,3,2,2};
vector<int> input3 = {9};
vector<int> output3 = {1,0};
vector<int> input4 = {9,9,9};
vector<int> output4 = {1,0,0,0};

TEST(plusOne, normal) {
  EXPECT_EQ(output1, plusOne(input1));
  EXPECT_EQ(output2, plusOne(input2));
  EXPECT_EQ(output3, plusOne(input3));
  EXPECT_EQ(output4, plusOne(input4));
}



}