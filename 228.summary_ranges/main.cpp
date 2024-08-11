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
vector<string> summaryRanges(vector<int>& nums)
{
    vector<string> ret;

    int length = nums.size();
    if(0 == length)
    {
        return ret;
    }
    else if(1 == length)
    {
        ret.push_back(to_string(nums[0]));
        return ret;
    }

    int start = 0;
    for(int i=1;i<length;i++)
    {
        if(nums[i-1] == nums[i]-1)
        {
            if(i == length -1)  //the last one
            {
                string str = to_string(nums[start]);
                str += "->" + to_string(nums[i]);
                ret.push_back(str);
                break;
            }

            continue;
        }
        else
        {
            if(start == i-1)    //only one
            {
                ret.push_back(to_string(nums[start]));
            }
            else
            {
                //push back the string
                string str = to_string(nums[start]);
                str += "->" + to_string(nums[i-1]);
                ret.push_back(str);
            }

            //next
            start = i;
            if(i == length -1)
            {
                ret.push_back(to_string(nums[i]));
                break;
            }
        }
    }

    return ret;
}


// vector<string> summaryRanges(vector<int>& nums)
// {
//     vector<string> ret;

//     int length = nums.size();
//     if(0 == length)
//     {
//         return ret;
//     }
//     else if(1 == length)
//     {
//         ret.push_back(to_string(nums[0]));
//         return ret;
//     }
    

//     long start = 0, end = 0;
//     while(end < length-1)
//     {
//         long value = nums[end+1] - 1;
//         if(nums[end] == value)
//         {
//             end++;
//         }
//         else
//         {
//             if(1 <= (end - start))
//             {
//                 string str = to_string(nums[start]);
//                 str += "->";
//                 str += to_string(nums[end]);
//                 ret.push_back(str);
//             }
//             else
//             {
//                 ret.push_back(to_string(nums[start]));
//             }

//             start = end+1;
//             end++;
//         }
//     }

//     //end = length-1;
//     long value = nums[end] - 1;
//     if(nums[end-1] == value)
//     {
//         if(1 <= (end - start))
//         {
//             string str = to_string(nums[start]);
//             str += "->";
//             str += to_string(nums[end]);
//             ret.push_back(str);
//         }
//         else
//         {
//             ret.push_back(to_string(nums[start]));
//         }
//     }
//     else
//     {
//         ret.push_back(to_string(nums[start]));
//     }

//     return ret;
// }
