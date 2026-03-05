//============================================================================
// Platform      : LeetCode
// Problem Title : 21. Merge Two Sorted Lists
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 05, 2026
//
// Problem Statement:
//   You are given the heads of two sorted linked lists list1 and list2.
//   Merge the two lists into one sorted list. The list should be made by
//   splicing together the nodes of the first two lists.
//
// Example 1:
//   Input:  list1 = [1,2,4], list2 = [1,3,4]
//   Output: [1,1,2,3,4,4]
//
// Example 2:
//   Input:  list1 = [], list2 = []
//   Output: []
//
// Example 3:
//   Input:  list1 = [], list2 = [0]
//   Output: [0]
//
// Constraints:
//   - The number of nodes in both lists is in the range [0, 50].
//   - -100 ≤ Node.val ≤ 100
//   - Both list1 and list2 are sorted in non-decreasing order.
//   - Time Complexity Target: O(n + m) where n and m are lengths of the lists
//   - Space Complexity Target: O(1) extra space
//============================================================================

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode temp(0);         // Dummy node to simplify merging
        ListNode* tail = &temp;   // Pointer to build the new list

        while(list1 && list2) {
            if(list1->val < list2->val) {
                tail->next = list1;
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        // Attach remaining nodes from list1 or list2
        tail->next = list1 ? list1 : list2;

        return temp.next; // Return merged list starting from first real node
    }
};

/*
   💡 Solution Logic:

   - Use a dummy node to simplify edge cases (empty lists, head insertion).
   - Maintain a pointer `tail` to always point to the last node in the merged list.
   - Traverse both lists simultaneously:
     • Compare the current nodes of list1 and list2.
     • Append the smaller node to `tail`.
     • Move the pointer of the list from which the node was taken.
     • Advance `tail` to the newly added node.
   - After traversal, one list may still have nodes left.
     • Attach the remaining nodes directly to `tail`.
   - Return the node next to the dummy node as the head of the merged list.

   --------------------------------------------------
   ⏱ Time Complexity: O(n + m)
      - Each node is processed exactly once.
   📦 Space Complexity: O(1)
      - Only a constant number of pointers are used, no extra list allocation.
*/

/*
   Alhamdulillah, problem solved successfully!
*/
