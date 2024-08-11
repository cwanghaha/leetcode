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
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode ret(0);
    ListNode *pCur = &ret;

    int val = 0;
    while(val || (nullptr != l1) || (nullptr != l2))
    {
        val += (l1?l1->val:0)+(l2?l2->val:0);
        pCur->next = new ListNode(val%10);
        pCur = pCur->next;

        val = val/10;
        if(nullptr != l1)
        {
            l1 = l1->next;
        }
        if(nullptr != l2)
        {
            l2 = l2->next;
        }
    }

    return ret.next;
}