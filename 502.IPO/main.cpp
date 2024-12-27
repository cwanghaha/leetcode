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
int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital)
{
    if(0==profits.size()||0==capital.size())
    {
        return 0;
    }

    int length = profits.size();
    vector<pair<int, int>> projects(length);

    for(int i=0;i<length;i++)
    {
        projects[i] = {capital[i], profits[i]};
    }

    sort(projects.begin(), projects.end());

    int i=0;
    priority_queue<int> maximumCapital;

    while(k--)
    {
        while(i<length&&projects[i].first <= w)
        {
            maximumCapital.push(projects[i].second);
            i++;
        }

        if(maximumCapital.empty())
        {
            break;
        }

        w+=maximumCapital.top();
        maximumCapital.pop();
    }

    return w;
}