//============================================================================
// Platform      : LeetCode
// Problem Title : 2149. Rearrange Array Elements by Sign
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : March 20, 2026
//
// Problem Statement:
//   You are given a 0-indexed integer array nums of even length consisting
//   of an equal number of positive and negative integers.
//
//   Rearrange the array such that:
//     - Every consecutive pair of integers have opposite signs.
//     - For all integers with the same sign, their relative order is preserved.
//     - The resulting array starts with a positive integer.
//
//   Return the rearranged array.
//
// Input:
//   A vector of integers nums (even length, equal positives and negatives).
//
// Output:
//   A vector of integers satisfying the required conditions.
//
// Constraints:
//   - 2 ≤ nums.length ≤ 2 * 10^5
//   - nums.length is even
//   - Equal number of positive and negative integers
//   - -10^5 ≤ nums[i] ≤ 10^5
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> newNums(n);
        int even = 0;
        int odd = 1;

        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                newNums[even] = nums[i];
                even += 2;
            } else {
                newNums[odd] = nums[i];
                odd += 2;
            }
        }
        return newNums;
    }
};

/*
  Solution Logic:
  - Since the array contains equal numbers of positive and negative integers,
    we can place positives at even indices (0, 2, 4, ...) and negatives at
    odd indices (1, 3, 5, ...).
  - Initialize two pointers:
      even = 0 → for positive numbers
      odd  = 1 → for negative numbers
  - Traverse the original array:
      - If the number is positive, place it at index `even` and increment even by 2.
      - If the number is negative, place it at index `odd` and increment odd by 2.
  - This ensures:
      ✔ Alternating signs
      ✔ Order preservation (stable placement)
      ✔ First element is positive

  Time Complexity: O(n)
  Space Complexity: O(n)
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
