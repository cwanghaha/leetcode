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
TreeNode* invertTree(TreeNode* root)
{
    if(nullptr == root)
    {
        return nullptr;
    }

    TreeNode* temp = invertTree(root->left);
    root->left = invertTree(root->right);
    root->right = temp;

    return root;
}