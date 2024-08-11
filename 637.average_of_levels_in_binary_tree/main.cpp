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
vector<double> averageOfLevels(TreeNode* root)
{
    vector<double> ret;
    queue<TreeNode*> nodeQueue;

    nodeQueue.push(root);

    while(nodeQueue.size())
    {
        int length = nodeQueue.size();
        double val = 0;
        for(int i=0;i<length;i++)
        {
            TreeNode* pCur = nodeQueue.front();
            nodeQueue.pop();
            val += pCur->val;
            
            if(pCur->left)
            {
                nodeQueue.push(pCur->left);
            }
            if(pCur->right)
            {
                nodeQueue.push(pCur->right);
            }
        }

        val = val/length;
        ret.push_back(val);
    }
    
    return ret;
}