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
vector<string> summaryRanges(vector<int>& nums)
{
    vector<string> ret;
    vector<int> range;
    vector<vector<int>> ranges;


    int length = nums.size();
    if(0 == length)
    {
        return ret;
    }

    range.push_back(nums[0]);
    for(int i=1;i<length;i++)
    {
        if(1 == nums[i] - range[range.size()-1])
        {
            range.push_back(nums[i]);
        }
        else
        {
            ranges.push_back(range);
            range.clear();
            range.push_back(nums[i]);
        }
    }
    ranges.push_back(range);

    for(int i=0;i<ranges.size();i++)
    {
        if(1 == ranges[i].size())
        {
            ret.push_back(to_string(ranges[i][0]));
        }
        else
        {
            string str = to_string(ranges[i][0]);
            str += "->";
            str += to_string(ranges[i][ranges[i].size()-1]);
            ret.push_back(str);
        }
    }

    return ret;
}