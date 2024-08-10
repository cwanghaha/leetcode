#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<string> strs1 = {"eat","tea","tan","ate","nat","bat"};
vector<vector<string>> output1 = {{"bat"},{"tan", "nat"},{"eat","tea", "ate"}};
vector<string> strs2 = {" "};
vector<vector<string>> output2 = {{" "}};
vector<string> strs3 = {"a"};
vector<vector<string>> output3 = {{"a"}};

TEST(groupAnagrams, normal) {
  EXPECT_EQ(output1, groupAnagrams(strs1));
  EXPECT_EQ(output2, groupAnagrams(strs2));
  EXPECT_EQ(output3, groupAnagrams(strs3));
}

}