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
int climbStairs(int n) 
{
    if((0 == n)||(1 == n))
    {
        return 1;
    }

    int pre = 1, cur = 1;
    for(int i=2;i<=n;i++)
    {
        int temp = cur;
        cur = cur + pre;
        pre = temp;
    }
    
    return cur;
}