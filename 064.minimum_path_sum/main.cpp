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
int minPathSum(vector<vector<int>>& grid)
{
    int m = grid.size();
    int n = grid[0].size();

    if(0==m||0==n)
    {
        return 0;
    }

    int ret[m][n];

    memset(ret, 0, m*n*sizeof(int));


    ret[0][0] = grid[0][0];
    for(int i=1;i<m;i++)
    {
        ret[i][0] = ret[i-1][0] + grid[i][0];
    }

    for(int i=1;i<n;i++)
    {
        ret[0][i] = ret[0][i-1] + grid[0][i];
    }

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            ret[i][j] = min(ret[i-1][j], ret[i][j-1]) + grid[i][j];
        }
    }

    return ret[m-1][n-1];
}