#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(simplifyPath, normal) {
  EXPECT_EQ("/home", simplifyPath("/home/"));
  EXPECT_EQ("/home/foo", simplifyPath("/home//foo/"));
  EXPECT_EQ("/home/user/Pictures", simplifyPath("/home/user/Documents/../Pictures"));
  EXPECT_EQ("/", simplifyPath("/../"));
  EXPECT_EQ("/.../b/d", simplifyPath("/.../a/../b/c/../d/./"));
}


}