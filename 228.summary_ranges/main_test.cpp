#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> num1 = {0,1,2,4,5,7};
vector<string> output1 = {"0->2","4->5","7"};
vector<int> num2 = {0,2,3,4,6,8,9};
vector<string> output2 = {"0","2->4","6","8->9"};
vector<int> num3 = {-2, -1 ,1,2,4,5,7};
vector<string> output3 = {"-2->-1","1->2","4->5","7"};
vector<int> num4 = {-2};
vector<string> output4 = {"-2"};
vector<int> num5 = {-2147483648,-2147483647,2147483647};
vector<string> output5 = {"-2147483648->-2147483647", "2147483647"};

TEST(summaryRanges, normal) {
  EXPECT_EQ(output1, summaryRanges(num1));
  EXPECT_EQ(output2, summaryRanges(num2));
  EXPECT_EQ(output3, summaryRanges(num3));
  EXPECT_EQ(output4, summaryRanges(num4));
  EXPECT_EQ(output5, summaryRanges(num5));
}
    


}