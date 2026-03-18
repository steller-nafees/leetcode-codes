//============================================================================
// Platform      : LeetCode 
// Problem Title : 27. Remove Element
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : March 18, 2026 
//
// Problem Statement:
//   Given an integer array nums and an integer val, remove all occurrences
//   of val in nums in-place. The order of the elements may be changed.
//   Then return the number of elements in nums which are not equal to val.
//
//   Consider the number of elements in nums which are not equal to val be k.
//   To get accepted, you need to do the following:
//     - Change the array nums such that the first k elements contain elements
//       not equal to val.
//     - The remaining elements are not important.
//     - Return k.
//
// Input:
//   - nums: integer array
//   - val : integer value to remove
//
// Output:
//   - Return integer k (count of elements not equal to val)
//
// Constraints:
//   - 0 ≤ nums.length ≤ 100
//   - 0 ≤ nums[i] ≤ 50
//   - 0 ≤ val ≤ 100
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        
        int k = 0;

        for(int i=0; i<size ; i++)
        {
            if(nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};

/*
  💡 Solution Logic:
  - Use a two-pointer approach.
  - Initialize k = 0 to track the position for valid elements.
  - Traverse the array:
      • If nums[i] is not equal to val:
          → Place it at index k
          → Increment k
  - This effectively shifts all valid elements to the front.
  - Elements beyond k are ignored.
  - Return k as the count of remaining elements.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
