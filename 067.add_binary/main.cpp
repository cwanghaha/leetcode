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
string addBinary(string a, string b)
{
    int i = a.length()-1;
    int j = b.length()-1;
    string ret;
    int sum = 0;

    for(;(i>=0)&&(j>=0);i--,j--)
    {
        sum += (a[i] - '0') + (b[j] - '0');
        ret += to_string(sum%2);
        sum /= 2;
    }

    while(i>=0)
    {
        sum += a[i] - '0';
        ret += to_string(sum%2);
        sum /= 2;
        i--;
    }

    while(j>=0)
    {
        sum += b[j] - '0';
        ret += to_string(sum%2);
        sum /= 2;
        j--;
    }

    if(1 == sum)
    {
        ret += to_string(sum);
    }

    reverse(ret.begin(), ret.end());
    return  ret;
}