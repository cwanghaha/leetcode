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
string mapping[10] = {"",    "",    "abc",  "def", "ghi",
                            "jkl", "mno", "pqrs", "tuv", "wxyz"};

void solve(string digits, string curStr, int index, vector<string> &ret)
{
    if(index >= digits.length())
    {
        ret.push_back(curStr);
        return;
    }

    char num = digits[index]-'0';
    if(num<2||num>9)
    {
        return;
    }

    index++;
    string numStr = mapping[num];
    for(int i=0;i<numStr.length();i++)
    {
        string tempStr = curStr + numStr[i];
        solve(digits, tempStr, index, ret);
    }
}

vector<string> letterCombinations(string digits)
{
    vector<string> ret;

    if(0 == digits.length())
    {
        return ret;
    }

    solve(digits, "", 0, ret);

    return ret;
}