#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{


vector<int> num1 = {1,1,1,2,2,3};
vector<int> num2 = {0,0,1,1,1,1,2,3,3};
vector<int> num3 = {3};
vector<int> num4 = {3,3};
vector<int> num5 = {3,5};
vector<int> num6 = {3,3,3};

TEST(removeDuplicates, normal) {
  EXPECT_EQ(5, removeDuplicates(num1));
  EXPECT_EQ(7, removeDuplicates(num2));
  EXPECT_EQ(1, removeDuplicates(num3));
  EXPECT_EQ(2, removeDuplicates(num4));
  EXPECT_EQ(2, removeDuplicates(num5));
  EXPECT_EQ(2, removeDuplicates(num6));
}


}