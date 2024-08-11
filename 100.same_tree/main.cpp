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
bool isSameTree(TreeNode* p, TreeNode* q)
{
    if((nullptr == p)&&(nullptr == q))  //both are null
    {
        return true;
    }

    if((nullptr == p)||(nullptr == q)||(p->val != q->val))   //only one is null
    {
        return false;
    }

    //neither is null
    return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
}