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
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
{
    if(0 == preorder.size())
    {
        return nullptr;
    }

    int val = preorder[0];
    TreeNode *treeNode = new TreeNode(val);

    int index;
    for(int i=0;i<inorder.size();i++)
    {
        if(val == inorder[i])
        {
            index = i;
        }
    }
    
    vector<int> leftPreorder(preorder.begin()+1, preorder.begin()+index+1);
    vector<int> rightPreorder(preorder.begin()+index+1, preorder.end());
    vector<int> leftInorder(inorder.begin(), inorder.begin()+index);
    vector<int> rightInorder(inorder.begin()+index+1, inorder.end());

    treeNode->left = buildTree(leftPreorder, leftInorder);
    treeNode->right = buildTree(rightPreorder, rightInorder);

    return treeNode;
}