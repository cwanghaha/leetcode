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
void eraseIslands(vector<vector<char>>& grid, int i, int j)
{
    if((i<0)||(i>=grid.size())||(j<0)||(j>=grid[0].size())||('0' == grid[i][j]))
    {
        return;
    }

    grid[i][j] = '0';
    eraseIslands(grid, i, j-1);
    eraseIslands(grid, i, j+1);
    eraseIslands(grid, i-1, j);
    eraseIslands(grid, i+1, j);
}

int numIslands(vector<vector<char>>& grid)
{
    int m = grid.size();
    int n = grid[0].size();
    int islands = 0;

    if((0 == m)||(0 == n))
    {
        return 0;
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if('1' == grid[i][j])
            {
                islands++;
                eraseIslands(grid, i, j);
            }
        }
    }

    return islands;
}