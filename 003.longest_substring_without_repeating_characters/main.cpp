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
int lengthOfLongestSubstring(string s) {
    int left=0, right=0;
    int length = 0;
    unordered_set<char> subStr;

    while(right<s.size())
    {
        if(0 == subStr.count(s[right]))
        {
            subStr.insert(s[right++]);
            length = max(length, right-left);
        }
        else
        {
            while(0 != subStr.count(s[right]))
            {
                subStr.erase(s[left++]);
            }
        }
    }

    return length == 0 ? 0 : length;
}