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
bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<char> row[9], col[9], box[9];

    for(int r=0;r<9;r++)
    {
        for(int c=0;c<9;c++)
        {
            if('.' == board[r][c])
            {
                continue;
            }

            char value = board[r][c];
            int boxIndex = (r/3)*3+c/3;
            if((0 != row[r].count(value))||(0 != col[c].count(value))||(0 != box[boxIndex].count(value)))
            {
                return false;
            }

            row[r].insert(value);
            col[c].insert(value);
            box[boxIndex].insert(value);
        }
    }

    return true;
}