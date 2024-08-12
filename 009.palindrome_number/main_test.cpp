#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(isPalindrome, normal) {
  EXPECT_TRUE(isPalindrome(121));
  EXPECT_FALSE(isPalindrome(-121));
  EXPECT_FALSE(isPalindrome(10));
  EXPECT_TRUE(isPalindrome(0));
  EXPECT_TRUE(isPalindrome(-0));
}


}