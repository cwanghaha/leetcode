#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(isSubsequence, normal) {
  EXPECT_TRUE(isSubsequence("ace", "abcde"));
  EXPECT_TRUE(isSubsequence("abc", "ahbgdc"));
  EXPECT_FALSE(isSubsequence("axc", "ahbgdc"));
  EXPECT_FALSE(isSubsequence("axc", "ax"));
  EXPECT_FALSE(isSubsequence(" ", "ax"));
  EXPECT_FALSE(isSubsequence("aaaaaa", "bbaaaa"));
}
    



}