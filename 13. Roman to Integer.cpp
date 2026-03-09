//============================================================================
// Platform      : LeetCode
// Problem Title : 13. Roman to Integer
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : March 09, 2026
//
// Problem Statement:
//   Given a roman numeral string s, convert it to an integer.
//   Roman numerals are represented by the symbols I, V, X, L, C, D, and M.
//   Symbols are usually written largest to smallest from left to right, 
//   except for six subtraction cases:
//       - I can be placed before V and X to make 4 and 9.
//       - X can be placed before L and C to make 40 and 90.
//       - C can be placed before D and M to make 400 and 900.
//
// Input:
//   A string s representing a valid Roman numeral (1 ≤ s.length ≤ 15).
//
// Output:
//   Return the integer representation of s.
//
// Constraints:
//   - 1 ≤ s.length ≤ 15
//   - s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
//   - It is guaranteed that s is a valid Roman numeral in the range [1, 3999].
//
// Time Limit: 1 second
// Memory Limit: 256 MB
//============================================================================

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        vector<pair<char,int>> chart = {{'I',1}, {'V',5}, {'X',10}, {'L',50}, 
                                        {'C',100},{'D',500}, {'M',1000}}; 
        int ans = 0; 
        int n = s.size();
        for(int i=0; i<n; i++)
        {
            int curr = 0 ,  next = 0; 
            for(auto p : chart)
            {
                if(s[i] == p.first)
                {
                    curr = p.second;
                    break;
                }
            }
            // next element
            if(i+1 < n)
            {
                for(auto p : chart)
                {
                    if(s[i+1] == p.first)
                    {
                        next = p.second;
                        break;
                    }
                }
            }

            if(curr < next)
            {
                ans += (next - curr);
                i++;
                continue;
            }

            ans += curr;
        }
        return ans;
    }
};

/*
  💡 Solution Logic:
  - Maintain a map of Roman symbols to their integer values.
  - Iterate through the string s:
      - Compare current symbol's value with the next symbol's value.
      - If current < next, this is a subtraction case, add (next - current) to answer and skip next symbol.
      - Otherwise, just add current value.
  - Return the accumulated integer.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
