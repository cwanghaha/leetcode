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
bool isPalindrome(int x)
{
    if(x < 0)
    {
        return false;
    }

    long reverse = 0;
    long copyX = x;

    int temp;
    while(copyX != 0)
    {
        temp = copyX%10;
        reverse = reverse*10 + temp;
        copyX /= 10;
    }

    return (reverse == x);
}