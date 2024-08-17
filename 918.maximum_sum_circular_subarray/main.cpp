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
int maxSubarraySumCircular(vector<int>& nums)
{
    int length = nums.size();
    if(0 == length)
    {
        return 0;
    }

    int total = 0;
    int allMax = INT_MIN, curMax = 0;
    int allMin = INT_MAX, curMin = 0;
    for(int i=0;i<length;i++)
    {
        curMax = max(curMax+nums[i], nums[i]);
        allMax = max(allMax, curMax);
        curMin = min(curMin+nums[i], nums[i]);
        allMin = min(allMin, curMin);
        total += nums[i];
    }

    return allMax>0?max(allMax, total-allMin):allMax;
}