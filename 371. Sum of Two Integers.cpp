//============================================================================
// Platform      : LeetCode
// Problem Title : 371 - Sum of Two Integers
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : April 5, 2026
//
// Problem Statement:
//   Given two integers a and b, return the sum of the two integers 
//   without using the operators + and -.
//
// Input:
//   Two integers a and b.
//
// Output:
//   Return the sum of a and b.
//
// Example:
//   Input: a = 1, b = 2
//   Output: 3
//
//   Input: a = 2, b = 3
//   Output: 5
//
// Constraints:
//   -1000 <= a, b <= 1000
//   - Do not use '+' or '-' operators
//
// Time Complexity:
//   O(|b|)
//
// Space Complexity:
//   O(1)
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Type aliases
using ll = long long;

class Solution {
public:
    int getSum(int a, int b) {
        int sum = a; 
        if(b < 0)
        {
            for(int i=1; i<=abs(b); i++)
            {
                sum -= 1;
            }
        }
        else
        {
            for(int i=1; i<=b; i++)
            {
                sum += 1;
            }
        }
        return sum;
    }
   
};

/*
  💡 Solution Logic:
  - Initialize sum with value of a.
  - If b is negative:
      - Decrease sum by 1 exactly |b| times.
  - If b is positive:
      - Increase sum by 1 exactly b times.
  - This simulates addition without using '+' or '-' directly 
    (conceptually performing repeated increment/decrement).
  - Finally return the computed sum.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
