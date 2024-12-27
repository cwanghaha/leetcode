#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> profits1 = {1,2,3};
vector<int> capital1 = {0,1,1};

vector<int> profits2 = {1,2,3};
vector<int> capital2 = {0,1,2};

TEST(findMaximizedCapital, normal) {
  EXPECT_EQ(4, findMaximizedCapital(2, 0, profits1, capital1));
  EXPECT_EQ(6, findMaximizedCapital(3, 0, profits2, capital2));
}


}