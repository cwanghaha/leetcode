#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(addBinary, normal) {
  EXPECT_EQ("100", addBinary("11", "1"));
  EXPECT_EQ("10101", addBinary("1010", "1011"));
  EXPECT_EQ("0", addBinary("0", "0"));
  EXPECT_EQ("1000", addBinary("1", "111"));
}



}