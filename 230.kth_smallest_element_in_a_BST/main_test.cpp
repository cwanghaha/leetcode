#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{


TEST(kthSmallest, 1) {
  TreeNode node1(3),node2(1),node3(4),node4(2);
  node1.left = &node2;
  node1.right = &node3;
  node2.right = &node4;
  EXPECT_EQ(1, kthSmallest(&node1, 1));
}



TEST(kthSmallest, 2) {
  TreeNode node1(5),node2(3),node3(6),node4(2),node5(4),node6(1);
  node1.left = &node2;
  node1.right = &node3;
  node2.left = &node4;
  node2.right = &node5;
  node4.left = &node6;
  EXPECT_EQ(3, kthSmallest(&node1, 3));
}


}