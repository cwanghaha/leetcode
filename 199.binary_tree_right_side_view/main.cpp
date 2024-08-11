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
vector<int> rightSideView(TreeNode* root)
{
    vector<int> ret;

    if(root==NULL)
    {
        return ret;
    }

    queue<TreeNode*> nodeQueue;

    nodeQueue.push(root);

    while(nodeQueue.size())
    {
        int length = nodeQueue.size();
        int val;
        for(int i=0;i<length;i++)
        {
            TreeNode* pCur = nodeQueue.front();
            nodeQueue.pop();

            if(0 == i) val = pCur->val;

            if(pCur->right) nodeQueue.push(pCur->right);
            if(pCur->left) nodeQueue.push(pCur->left);
        }

        ret.push_back(val);
    }

    return ret;
}


// void recursion(TreeNode *root, int level, vector<int> &res)
// {
//     if(root==NULL)
//     {
//         return;
//     }

//     //traversal right first, so if res.size()<level, just add on node, that is
//     //right node
//     if(res.size()<level) 
//     {
//         res.push_back(root->val);
//     }

//     recursion(root->right, level+1, res);
//     recursion(root->left, level+1, res);
// }

// vector<int> rightSideView(TreeNode* root)
// {
//     vector<int> res;
//     recursion(root, 1, res);

//     return res;
// }