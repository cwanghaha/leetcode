#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
GTEST_API_ int main(int argc, char **argv)
{
    printf("Running main() from %s\n", __FILE__);
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

/*****************************************************************************/
/*****************************************************************************/
/*****************************************************************************/
TreeNode* findNode(vector<int>& nums, int l, int r)
{
    if(l > r)
    {
        return nullptr;
    }

    int m = l +(r-l)/2;
    TreeNode* node = new TreeNode(nums[m]);
    node->left = findNode(nums, l, m-1);
    node->right = findNode(nums, m+1, r);

    return node;
}

TreeNode* sortedArrayToBST(vector<int>& nums)
{
    if(0 == nums.size())
    {
        return nullptr;
    }

    TreeNode *root = findNode(nums, 0, nums.size()-1);

    return root;
}