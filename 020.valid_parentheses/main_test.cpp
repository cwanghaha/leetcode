#include <iostream>
#include "gtest/gtest.h"

using namespace std;

extern bool isValid(string s);

namespace{

TEST(isValid, normal) {
  EXPECT_TRUE(isValid("d(sdf)d"));
  EXPECT_TRUE(isValid("sdf(asdf)"));
  EXPECT_TRUE(isValid("(s)[sdf]dsdf{sdf}"));
}
    
TEST(isValid, unmatch) {
  EXPECT_FALSE(isValid("]"));
  EXPECT_FALSE(isValid("("));
  EXPECT_FALSE(isValid("[()"));
  EXPECT_FALSE(isValid("(){[]"));
}

TEST(isValid, nest) {
  EXPECT_TRUE(isValid("asd{sdfg[sd(s[adg{sdfgr}e]f)sdf]sdfg}"));

  EXPECT_FALSE(isValid("{asdf[(dfg})sdf]}"));
  EXPECT_FALSE(isValid("sfh{sfh[sfd}fgh]sdfh"));
  EXPECT_FALSE(isValid("adf(sfh[sdfh]{sfh)sdfh}sh"));
}


}