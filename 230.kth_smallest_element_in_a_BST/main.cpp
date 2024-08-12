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
void helper(TreeNode* root, int k, int &index, int &ret)
{
    if(nullptr == root)
    {
        return;
    }

    if(index == k)
    {
        return;
    }

    helper(root->left, k, index, ret);
    (index)++;
    if(index == k)
    {
        ret = root->val;
        return;
    }
    helper(root->right, k, index, ret);
}

int kthSmallest(TreeNode* root, int k)
{
    int index = 0;
    int ret;

    helper(root, k, index, ret);

    return ret;
}