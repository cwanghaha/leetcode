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
bool isIsomorphic(string s, string t)
{
    vector<int> indexS(256, 0);
    vector<int> indexT(256, 0);

    for(int i=0;i<s.size();i++)
    {
        if(indexS[s[i]] != indexT[t[i]])
        {
            return false;
        }

        indexS[s[i]] = i+1;
        indexT[t[i]] = i+1;
    }

    return true;
}