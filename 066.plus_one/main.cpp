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
vector<int> plusOne(vector<int>& digits)
{
    int n = digits.size();

    if(9 > digits[n-1])
    {
        digits[n-1]++;
        return digits;
    }

    int one = 1;
    for(int i=n-1;i>=0;i--)
    {
        digits[i] += one;
        if(digits[i] >= 10)
        {
            digits[i] = 0;
            one = 1;
        }
        else
        {
            one = 0;
        }
        
    }

    if(0 == digits[0])
    {
        digits[0] = 1;
        digits.push_back(0);
    }

    return digits;
}