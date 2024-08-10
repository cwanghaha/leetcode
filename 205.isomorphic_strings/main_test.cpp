#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(isIsomorphic, normal) {
  EXPECT_TRUE(isIsomorphic("egg", "add"));
  EXPECT_FALSE(isIsomorphic("foo", "bar"));
  EXPECT_TRUE(isIsomorphic("paper", "title"));
}


}