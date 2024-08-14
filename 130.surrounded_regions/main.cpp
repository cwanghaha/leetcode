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
void flipGrid(vector<vector<char>>& board, int i, int j)
{
    int m = board.size();
    int n = board[0].size();
    if((i<0)||(i>=m)||(j<0)||(j>=n)||('X'==board[i][j]))
    {
        return;
    }

    board[i][j] = '#';
    flipGrid(board, i-1, j);
    flipGrid(board, i+1, j);
    flipGrid(board, i, j-1);
    flipGrid(board, i, j+1);
}

void solve(vector<vector<char>>& board) 
{
    int m = board.size();
    int n = board[0].size();

    if(0 == m || 0 == n)
    {
        return;
    }

    for(int i=0;i<m;i++)
    {   
        if('O' == board[i][0])
        {
            flipGrid(board, i, 0);
        }
        if('O' == board[i][n-1])
        {
            flipGrid(board, i, n-1);
        }   
    }

    for(int j=0;j<n;j++)
    {
        if('O' == board[0][j])
        {
            flipGrid(board, 0, j);
        }
        if('O' == board[m-1][j])
        {
            flipGrid(board, m-1, j);
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if('#' == board[i][j])
            {
                board[i][j] = 'O';
            }
            else if('O' == board[i][j])
            {
                board[i][j] = 'X';
            }
        }
    }

    return;
}