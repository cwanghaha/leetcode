#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<vector<int>> intervals1 = {{1,3},{2,6},{8,10},{15,18}};
vector<vector<int>> output1 = {{1,6},{8,10},{15,18}};
vector<vector<int>> intervals2 = {{1,4},{4,5}};
vector<vector<int>> output2 = {{1,5}};
vector<vector<int>> intervals3 = {{1,3}};
vector<vector<int>> output3 = {{1,3}};
vector<vector<int>> intervals4 = {{1,6},{2,4},{8,10},{15,18}};
vector<vector<int>> output4 = {{1,6},{8,10},{15,18}};

TEST(merge, normal) {
  EXPECT_EQ(output1, merge(intervals1));
  EXPECT_EQ(output2, merge(intervals2));
  EXPECT_EQ(output3, merge(intervals3));
  EXPECT_EQ(output4, merge(intervals4));
}


}