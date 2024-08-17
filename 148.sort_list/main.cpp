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
ListNode* merge(ListNode* l1, ListNode* l2)
{
    ListNode l(0);
    ListNode *p = &l;

    while(nullptr != l1&&nullptr != l2)
    {
        if(l1->val<l2->val)
        {
            p->next = l1;
            l1 = l1->next;
        }
        else
        {
            p->next = l2;
            l2 = l2->next;
        }

        p = p->next;
    }

    if(nullptr != l1)
    {
        p->next = l1;
    }

    if(nullptr != l2)
    {
        p->next = l2;
    }

    return l.next;
}

ListNode* sortList(ListNode* head)
{
    if(nullptr == head||nullptr == head->next)
    {
        return head;
    }

    ListNode *fast = head, *slow = head, *prev = nullptr;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    //break the chain
    prev->next = nullptr;

    ListNode *l1 = sortList(head);  //left
    ListNode *l2 = sortList(slow);  //right

    return merge(l1, l2);
}