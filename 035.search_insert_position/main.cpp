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
int searchInsert(vector<int>& nums, int target)
{
    if(0==nums.size())
    {
        return 0;
    }

    int l = 0;
    int r = nums.size() - 1;

    while(l<r)
    {
        int m = l + (r - l)/2;

        if(nums[m] == target)
        {
            return m;
        }
        else if(nums[m] > target)
        {
            r = m-1;
        }
        else
        {
            l = m + 1;
        }
    }

    return nums[l]<target?l+1:l;
}