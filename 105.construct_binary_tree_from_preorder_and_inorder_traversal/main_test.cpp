#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{
vector<int> preorder = {3,9,20,15,7};
vector<int> inorder  = {9,3,15,20,7};

TEST(buildTree, normal) {
  EXPECT_TRUE(buildTree(preorder, inorder));


}

}