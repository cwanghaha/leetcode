#include <iostream>

#include "main.h"
#include "gtest/gtest.h"

using namespace std;

namespace{

TEST(hasCycle, 1) {
    ListNode node0(3), node1(2), node2(0), node3(4);
    ListNode *head1 = &node0;
    node0.next = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node1;
    EXPECT_TRUE(hasCycle(head1));
}

TEST(hasCycle, 2) {
    ListNode node0(1), node1(2);
    ListNode *head1 = &node0;
    node0.next = &node1;
    node1.next = &node0;
    EXPECT_TRUE(hasCycle(head1));
}

TEST(hasCycle, 3) {
    ListNode node0(1);
    ListNode *head1 = &node0;
    node0.next = NULL;
    EXPECT_FALSE(hasCycle(head1));
}


}