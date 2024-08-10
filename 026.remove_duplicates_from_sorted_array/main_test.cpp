#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> num1 = {1,1,2};
vector<int> num2 = {0,0,1,1,1,2,2,3,3,4};
vector<int> num3 = {3};

TEST(removeDuplicates, normal) {
  EXPECT_EQ(2, removeDuplicates(num1));
  EXPECT_EQ(5, removeDuplicates(num2));
  EXPECT_EQ(1, removeDuplicates(num3));
}


}