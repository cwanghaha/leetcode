#ifndef __MAIN_H__
#define __MAIN_H__

#include <cstdint>

#include <stack>
#include <vector>
#include <queue>
#include <bitset>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* sortList(ListNode* head);

#endif