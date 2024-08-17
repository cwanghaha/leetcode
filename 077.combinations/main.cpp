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
vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> result;
    int i = 0;
    vector<int> p(k, 0);
    while (i >= 0) {
        p[i]++;
        if (p[i] > n) --i;
        else if (i == k - 1) result.push_back(p);
        else {
            ++i;
            p[i] = p[i - 1];
        }
    }
    return result;
}

#if 0
void solve(int n, vector<int> &curComb, int k, vector<vector<int>> &ret)
{
    if(curComb.size() == k)
    {
        ret.push_back(curComb);
        return;
    }

    int start;
    if(0 == curComb.size())
    {
        start = 1;
    }
    else
    {
        start = curComb.back() + 1;
    }

    for(int i=start;i<=n;i++)
    {
        vector<int> temp(curComb);
        temp.push_back(i);
        solve(n, temp, k, ret);
    }
}

vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> ret;

    if(0==n||0==k)
    {
        return ret;
    }

    vector<int> temp;
    solve(n, temp, k, ret);

    return ret;
}
#endif