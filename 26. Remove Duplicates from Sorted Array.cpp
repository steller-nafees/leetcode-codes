//============================================================================
// Platform      : LeetCode
// Problem Title : 26. Remove Duplicates from Sorted Array
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 14, 2026
//
// Problem Statement:
//   Given an integer array nums sorted in non-decreasing order, remove the duplicates
//   in-place such that each unique element appears only once. The relative order
//   of the elements should be kept the same.
//
//   Return the number of unique elements k after removing duplicates.
//
// Example 1:
//   Input:  nums = [1,1,2]
//   Output: 2, nums = [1,2,_]
//
// Example 2:
//   Input:  nums = [0,0,1,1,1,2,2,3,3,4]
//   Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
//
// Constraints:
//   - 0 ≤ nums.length ≤ 3 * 10^4
//   - -10^4 ≤ nums[i] ≤ 10^4
//   - nums is sorted in non-decreasing order
//   - Time Complexity Target: O(n)
//   - Space Complexity Target: O(1)
//============================================================================

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int k = 1; // Index for placing unique elements
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[k - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

/*
   💡 Solution Logic:

   - Use a two-pointer approach:
     • `k` keeps track of the index where the next unique number should be placed.
     • Traverse the array with another pointer `i`.
     • If nums[i] is different from the last unique element (nums[k-1]), 
       place nums[i] at nums[k] and increment k.

   - After traversal, the first k elements of nums are unique.

   --------------------------------------------------
   ⏱ Time Complexity:  O(n)
      - Traverse the array once.

   📦 Space Complexity: O(1)
      - No extra space used beyond a few variables.
*/

/*
   Alhamdulillah, problem solved successfully!
*/
