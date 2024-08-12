#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TreeNode node1(4),node2(2),node3(6),node4(1),node5(3);

TEST(getMinimumDifference, normal) {
  node1.left = &node2;
  node1.right = &node3;
  node2.left = &node4;
  node2.right = &node5;
  EXPECT_EQ(1, getMinimumDifference(&node1));
}
    


}