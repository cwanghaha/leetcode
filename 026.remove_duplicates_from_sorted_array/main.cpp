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
int removeDuplicates(vector<int>& nums) {
    int index=0;

    for(int i=1;i<nums.size();i++)
    {
        if(nums[i] != nums[index])
        {
            nums[++index] = nums[i];
        }
    }

    return index+1;
}