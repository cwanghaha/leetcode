#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(canConstruct, normal) {
  EXPECT_EQ(false, canConstruct("a", "b"));
  EXPECT_EQ(false, canConstruct("aa", "ab"));
  EXPECT_EQ(true, canConstruct("aa", "aab"));
  EXPECT_EQ(false, canConstruct("aabb", "aab"));
  EXPECT_EQ(true, canConstruct("ba", "aab"));
}


}