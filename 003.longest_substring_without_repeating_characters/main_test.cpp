#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(lengthOfLongestSubstring, normal) {
  EXPECT_EQ(3, lengthOfLongestSubstring("abcabcbb"));
  EXPECT_EQ(1, lengthOfLongestSubstring("bbbbb"));
  EXPECT_EQ(3, lengthOfLongestSubstring("pwwkew"));
}


}