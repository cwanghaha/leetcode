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
bool hasCycle(ListNode *head)
{
    unordered_set<ListNode *> address;

    if((NULL == head)||(NULL == head->next))
    {
        return false;
    }

    while(NULL != head->next)
    {
        if(0 != address.count(head))
        {
            return true;
        }

        address.insert(head);
        head = head->next;
    }

    return false;
}