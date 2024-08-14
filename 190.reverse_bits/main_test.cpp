#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(reverseBits, normal) {
  EXPECT_EQ(964176192, reverseBits(43261596));
  EXPECT_EQ(3221225471 , reverseBits(4294967293));
  EXPECT_EQ(0, reverseBits(0));
  EXPECT_EQ(0xffffffff, reverseBits(0xffffffff));
}



}