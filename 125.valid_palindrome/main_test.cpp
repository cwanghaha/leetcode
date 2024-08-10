#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(isPalindrome, normal) {
  EXPECT_TRUE(isPalindrome("A man, a plan, a canal: Panama"));
  EXPECT_FALSE(isPalindrome("race a car"));
  EXPECT_TRUE(isPalindrome(" "));
}


}