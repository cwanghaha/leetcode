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
int removeDuplicates(vector<int>& nums)
{
    int index = 2;
    int length = nums.size();

    if(2 >= length)
    {
        return length;
    }

    for(int i=2;i<length;i++)
    {
         if(nums[i] != nums[index-2])
        {
            nums[index++] = nums[i];
        }
    }

    return index;
}