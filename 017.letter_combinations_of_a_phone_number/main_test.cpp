#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{
vector<string> output1 = {"ad","ae","af","bd","be","bf","cd","ce","cf"};
vector<string> output2 = {};
vector<string> output3 = {"a","b","c"};

TEST(isValid, normal) {
  EXPECT_EQ(output1, letterCombinations("23"));
  EXPECT_EQ(output2, letterCombinations(""));
  EXPECT_EQ(output3, letterCombinations("2"));
}


}