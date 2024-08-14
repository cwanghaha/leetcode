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
bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    int m = matrix.size();
    int n = matrix[0].size();

    if(0==m||0==n)
    {
        return false;
    }

    int l=0;
    int r = m*n-1;
    while(l<r)
    {
        int pos = l + (r - l)/2;

        if(matrix[pos/n][pos%n] == target)
        {
            return true;
        }
        else if(matrix[pos/n][pos%n] > target)
        {
            r = pos-1;
        }
        else
        {
            l = pos + 1;
        }
    }

    return matrix[l/n][l%n]==target;
}