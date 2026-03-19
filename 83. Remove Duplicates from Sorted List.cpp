//============================================================================
// Platform      : LeetCode
// Problem Title : 83. Remove Duplicates from Sorted List
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : March 19, 2026
//
// Problem Statement:
//   Given the head of a sorted linked list, delete all duplicates such that each
//   element appears only once. Return the linked list sorted as well.
//
// Input:
//   The head of a sorted singly-linked list.
//
// Output:
//   Return the linked list with duplicates removed.
//
// Constraints:
//   - The linked list is sorted in non-decreasing order.
//   - The number of nodes in the list is in the range [0, 300].
//   - -100 ≤ Node.val ≤ 100
//
// Time Limit: 1 second
// Memory Limit: 256 MB
//============================================================================

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current = head;

        while(current != nullptr && current->next != nullptr) {
            if(current->val == current->next->val) {
                current->next = current->next->next;
            } else {
                current = current->next;
            }
        }
        return head;
    }
};

/*
  💡 Solution Logic:
  - Iterate through the linked list using a pointer `current`.
  - If current node's value equals the next node's value, skip the next node.
  - Otherwise, move `current` to the next node.
  - Continue until reaching the end of the list.
  - Return the modified head.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
