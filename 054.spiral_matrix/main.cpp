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
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    if (1 == matrix.size())
    {
        return matrix[0];
    }

    int left = 0, top = 0;
    int right = matrix[0].size();
    int bottom = matrix.size();
    int num = right * bottom;
    int curDir = 0;
    int curRow = 0, curCol = 0;
    vector<int> ret;
    vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    for (int i = 0; i < num;)
    {
        if ((left <= curCol) && (curCol < right) && (top <= curRow) && (curRow < bottom))
        {
            ret.push_back(matrix[curRow][curCol]);
            curRow += dirs[curDir % 4][0];
            curCol += dirs[curDir % 4][1];
            i++;
        }
        else
        {
            curRow -= dirs[curDir % 4][0];
            curCol -= dirs[curDir % 4][1];
            switch (curDir % 4)
            {
            case 0:
                top += 1;
                break;
            case 1:
                right -= 1;
                break;
            case 2:
                bottom -= 1;
                break;
            case 3:
                left += 1;
                break;
            default:
                break;
            }

            // change direction
            curDir++;
            curRow += dirs[curDir % 4][0];
            curCol += dirs[curDir % 4][1];
        }
    }

    cout << top << ' ' << bottom << ' ' << left << ' ' << right << endl;
    cout << curRow << ' ' << curCol << endl;
    return ret;
}