//============================================================================
// Platform      : LeetCode
// Problem Title : Add Two Numbers
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : February 16, 2026
//
// Problem Statement:
//   You are given two non-empty linked lists representing two non-negative integers.
//   The digits are stored in reverse order, and each of their nodes contains a
//   single digit. Add the two numbers and return the sum as a linked list.
//
// Input:
//   Two linked lists l1 and l2.
//   - Number of nodes in each list: [1, 100]
//   - 0 ≤ Node.val ≤ 9
//   - No leading zeros except the number 0 itself.
//
// Output:
//   Return the head of the resulting linked list.
//
// Constraints:
//   - Time limit: As per LeetCode
//   - Memory limit: As per LeetCode
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution Class (LeetCode Format)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp = new ListNode(0);
        ListNode* current = temp;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int sum = carry;

            if (l1 != nullptr)
            {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != nullptr)
            {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            current = current->next;
        }

        return temp->next;
    }
};

/*
  💡 Solution Logic:
  - Use a dummy node to simplify result list construction.
  - Traverse both linked lists simultaneously.
  - Add corresponding digits along with carry.
  - Create new nodes for (sum % 10).
  - Update carry = sum / 10.
  - Continue until both lists and carry are exhausted.
  - Return dummy->next as the result head.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
