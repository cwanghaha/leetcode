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
int maxSubArray(vector<int>& nums)
{
    int length = nums.size();

    if(0 == length)
    {
        return 0;
    }

    int max_so_far = INT_MIN, max_ending_here = 0;

    for(int i=0;i<length;i++)
    {
        max_ending_here = max_ending_here + nums[i];
        max_so_far = max(max_so_far, max_ending_here);
        max_ending_here = max(max_ending_here, 0);
    }

    return max_so_far;
}