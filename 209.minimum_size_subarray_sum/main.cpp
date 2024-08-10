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
int minSubArrayLen(int target, vector<int>& nums) {
    int l=0, r=0;
    int sum = 0;
    int length = INT_MAX;

    while(r < nums.size())
    {
        sum += nums[r++];
        while(sum >= target)
        {
            length = min(length, r-l);
            sum -= nums[l++];
        }
    }

    return length == INT_MAX? 0: length;
}