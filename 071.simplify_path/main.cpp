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
string simplifyPath(string path)
{
    string ret, temp;
    vector<string> strs;
    stringstream strStream(path);

    while(getline(strStream, temp, '/'))
    {
        if((temp == "")||(temp == "."))
        {
            continue;
        }
        else if(temp == "..")
        {
            if(true != strs.empty())
            {
                strs.pop_back();
            }
        }
        else 
        {
            strs.push_back(temp);
        }
    }

    for(auto str : strs)
    {
        ret += "/" + str;
    }

    return ret.empty() ? "/" : ret;
}