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
vector<vector<int>> merge(vector<vector<int>>& intervals)
{
    if(1 == intervals.size())
    {
        return intervals;
    }

    vector<vector<int>> ret;

    sort(intervals.begin(), intervals.end());

    ret.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++)
    {
        vector<int> &cur = ret.back();
        if(cur[1] < intervals[i][0]) //not overlap
        {
            ret.push_back(intervals[i]);
        }
        else    //overlap
        {
            cur[1] = max(cur[1], intervals[i][1]);
        }
    }

    return ret;
}