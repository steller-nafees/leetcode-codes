//============================================================================
// Platform      : LeetCode
// Problem Title : 20. Valid Parentheses
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Computer Science And Engineering
// Date          : March 04, 2026
//
// Problem Statement:
//   Given a string s containing just the characters:
//       '(', ')', '{', '}', '[' and ']'
//   determine if the input string is valid.
//
//   An input string is valid if:
//     1. Open brackets must be closed by the same type of brackets.
//     2. Open brackets must be closed in the correct order.
//     3. Every close bracket has a corresponding open bracket of the same type.
//
// Example 1:
//   Input:  s = "()"
//   Output: true
//
// Example 2:
//   Input:  s = "()[]{}"
//   Output: true
//
// Example 3:
//   Input:  s = "(]"
//   Output: false
//
// Example 4:
//   Input:  s = "([])"
//   Output: true
//
// Example 5:
//   Input:  s = "([)]"
//   Output: false
//
// Constraints:
//   - 1 ≤ s.length ≤ 10^4
//   - s consists only of characters: ()[]{}
//   - Time Complexity Target: O(n)
//   - Space Complexity Target: O(n)
//============================================================================

class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 

        for(int i=0;i < (int) s.length();i++)
        {
            if(i==0 && (s[i] == ')' || s[i] == '}' || s[i] == ']'))
            {
                st.push(s[i]);
                break;
            }
            else
            {
                if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                {
                    st.push(s[i]);
                }
                else
                {
                    
                    if(!st.empty() && ((st.top() == '(' && s[i] == ')') || 
                    (st.top() == '{' && s[i] == '}') || 
                    (st.top() == '[' && s[i] == ']')))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                } 
            }

        }
        return st.empty();
    }
};

/*
   💡 Solution Logic:

   - This problem can be solved using a stack data structure.

   - Idea:
     • Whenever we see an opening bracket: '(', '{', '['
       → push it into the stack.
     • Whenever we see a closing bracket:
       → check if the stack is not empty AND
         the top of the stack matches the corresponding opening bracket.
       → If it matches, pop it.
       → Otherwise, return false.

   - Special Case:
     • If the first character itself is a closing bracket,
       it cannot be valid, so the loop breaks and the result becomes false.

   - After processing the entire string:
     • If the stack is empty → all brackets matched correctly → return true.
     • If the stack is not empty → some brackets are unmatched → return false.

   --------------------------------------------------
   ⏱ Time Complexity:  O(n)
      - We traverse the string once.

   📦 Space Complexity: O(n)
      - In worst case, all characters are opening brackets
        and stored in the stack.
*/

/*
   Alhamdulillah, problem solved successfully!
*/
