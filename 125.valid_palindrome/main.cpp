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
bool isPalindrome(string s) {
    int start=0;
    int end = s.size()-1;

    while(start<=end)
    {
        if(!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if(!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if(tolower(s[start]) != tolower(s[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }

    return true;
}