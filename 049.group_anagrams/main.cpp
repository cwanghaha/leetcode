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
vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    vector<vector<string>> ret;
    unordered_map<string, vector<string>> group;

    for(auto str: strs)
    {
        string word = str;
        sort(word.begin(), word.end());
        group[word].push_back(str);
    }

    for(auto mp: group)
    {
        ret.push_back(mp.second);
    }

    return ret;
}