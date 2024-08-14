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
int rob(vector<int>& nums)
{
    int length = nums.size();
    if(1 == length)
    {
        return nums[0];
    }

    int pre = nums[0];
    int cur = max(nums[0], nums[1]);
    for(int i=2;i<length;i++)
    {
        int temp = cur;
        cur = max(cur, pre+nums[i]);
        pre = temp;
    }

    return cur;
}