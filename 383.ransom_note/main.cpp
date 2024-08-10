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
bool canConstruct(string ransomNote, string magazine)
{
    int pos;
    if(magazine.size() < ransomNote.size())
    {
        return false;
    }

    for(int i=0;i<ransomNote.size();i++)
    {
        pos = magazine.find(ransomNote[i], 0);
        if(-1 == pos)
        {
            return false;
        }
        else
        {
            magazine.erase(pos, 1);
        }
    }

    return true;
}