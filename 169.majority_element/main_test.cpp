#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

vector<int> nums1 = {3,2,3};
vector<int> nums2 = {2,2,1,1,1,2,2};

TEST(majorityElement, normal) {
  EXPECT_EQ(3, majorityElement(nums1));
  EXPECT_EQ(2, majorityElement(nums2));
}


}