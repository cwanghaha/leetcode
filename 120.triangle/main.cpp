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
int minimumTotal(vector<vector<int>>& triangle)
{
    if(0 == triangle.size())
    {
        return 0;
    }

    int length = triangle.size();
    int val[length+1] = {0};

    for(int i=length-1;i>=0;i--)
    {
        for(int j=0;j<triangle[i].size();j++)
        {
            val[j] = min(val[j], val[j+1]) + triangle[i][j];
        }
    }

    return val[0];
}