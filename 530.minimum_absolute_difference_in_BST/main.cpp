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
int min_diff = INT_MAX;
int val = -1;
int getMinimumDifference(TreeNode* root)
{
    if(nullptr == root)
    {
        return min_diff;
    }

    getMinimumDifference(root->left);

    if(val != -1)
    {
        min_diff = min(min_diff, root->val - val);
    }
    val = root->val;
    
    getMinimumDifference(root->right);

    return min_diff;
}


// int getMinimumDifference(TreeNode* root)
// {
//     int min_left = INT_MAX, min_right = INT_MAX;
//     int ret;

//     if((nullptr == root->left)&&(nullptr == root->right))
//     {
//         ret = INT_MAX;
//         return ret;
//     }
    
//     if(root->left)
//     {
//         ret = getMinimumDifference(root->left);
//         min_left = min(ret, root->val - root->left->val);
//     }

//     if(root->right)
//     {
//         ret = getMinimumDifference(root->right);
//         min_right = min(ret, root->right->val - root->val);
//     }

//     ret = min(min_left, min_right);
//     return ret;
// }