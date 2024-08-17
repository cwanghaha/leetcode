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
int findKthLargest(vector<int>& nums, int k)
{
    int length = nums.size();
    if(0 == length)
    {
        return 0;
    }

    nth_element(nums.begin(), nums.begin()+k-1, nums.end(), greater<int>());

    return nums[k-1];
}