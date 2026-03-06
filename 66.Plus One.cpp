//============================================================================
// Platform      : LeetCode
// Problem Title : 66. Plus One
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 06, 2026
//
// Problem Statement:
//   You are given a large integer represented as an integer array digits,
//   where each digits[i] is the ith digit of the integer. The digits are 
//   ordered from most significant to least significant in left-to-right order.
//   The large integer does not contain any leading 0's.
//
//   Increment the large integer by one and return the resulting array of digits.
//
// Example 1:
//   Input:  digits = [1,2,3]
//   Output: [1,2,4]
//
// Example 2:
//   Input:  digits = [4,3,2,1]
//   Output: [4,3,2,2]
//
// Example 3:
//   Input:  digits = [9,9,9]
//   Output: [1,0,0,0]
//
// Constraints:
//   - 1 ≤ digits.length ≤ 10^4
//   - 0 ≤ digits[i] ≤ 9
//   - digits does not contain leading zeros
//   - Time Complexity Target: O(n)
//   - Space Complexity Target: O(1) extra space (or O(n) if a new digit is inserted)
//============================================================================

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();

        // Traverse the digits from least significant to most significant
        for(int i = size - 1; i >= 0; i--) 
        {
            digits[i] += 1;   // Add 1 to the current digit

            // If no carry is generated, we can return the result immediately
            if(digits[i] < 10)
            {
                return digits;
            }

            // Carry over to the next digit
            digits[i] = 0;
        }

        // Special case: If all digits were 9, we need an extra digit at the front
        digits.insert(digits.begin(), 1);

        return digits;
    }
};

/*
   Solution Logic:

   - Start adding 1 from the last digit (least significant digit).
   - If adding 1 causes the digit to become 10:
       • Set the current digit to 0
       • Carry over the 1 to the next left digit
   - Continue until we either process all digits or there is no carry
   - If all digits were 9, insert 1 at the beginning of the array

   --------------------------------------------------
   Time Complexity:  O(n)
      - We traverse the array at most once.

   Space Complexity: O(1) extra
      - Only in the case where all digits are 9 do we use O(n) space for insertion.
*/

/*
   Alhamdulillah, problem solved successfully!
*/
