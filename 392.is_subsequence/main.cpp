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
bool isSubsequence(string s, string t) {
    if(s.size() > t.size())
    {
        return false;
    }

    int pos = 0;
    for(int i=0;i<s.size();i++)
    {
        pos = t.find(s[i], pos);
        if(-1 == pos)
        {
            return false;
        }
        else
        {
            pos++;
        }
    }

    return true;
}