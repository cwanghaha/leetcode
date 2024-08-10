#include <iostream>
#include <stack>

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
bool isValid(string s)
{
    stack<char> mStack;

    for (int i = 0; i < s.size(); i++)
    {
        if (('(' == s[i]) || ('[' == s[i]) || ('{' == s[i]))
        {
            mStack.push(s[i]);
        }
        else if (')' == s[i])
        {
            if (0 == mStack.size())
            {
                return false;
            }
            else
            {
                if ('(' == mStack.top())
                {
                    mStack.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        else if (']' == s[i])
        {
            if (0 == mStack.size())
            {
                return false;
            }
            else
            {
                if ('[' == mStack.top())
                {
                    mStack.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        else if ('}' == s[i])
        {
            if (0 == mStack.size())
            {
                return false;
            }
            else
            {
                if ('{' == mStack.top())
                {
                    mStack.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }

    return mStack.empty();
}