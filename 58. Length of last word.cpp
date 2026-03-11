//============================================================================
// Platform      : LeetCode 
// Problem Title : 58 - Length of Last Word
// Author        : H M Nafees N Islam
// Institution   : North South University (NSU), Department of CSE
// Date          : March 12, 2026
//
// Problem Statement:
//   Given a string s consisting of words and spaces, return the length of the
//   last word in the string.
//
//   A word is defined as a maximal substring consisting of non-space characters only.
//
// Input:
//   A string s consisting of words and spaces.
//
// Output:
//   Return the length of the last word in the string.
//
// Constraints:
//   - 1 ≤ s.length ≤ 10^4
//   - s consists of English letters and spaces ' '.
//   - There will be at least one word in s.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        /*stringstream ss(s); 
        string word;
        vector<string> words;

        while(getline(ss,word,' '))   
        {
            if(word != "") words.push_back(word);
        }
        int ans  = (words.back()).size();
        return ans;*/

        int ans = 0; 
        
        for(int i=s.size() - 1; i>=0; i--)
        {
            if(s[i] == ' ') 
            {
                if(ans > 0) break;
                continue;
            }
            else ans++;

            
        }
        return ans;
    }
};

/*
  💡 Solution Logic:
  - Traverse the string from the end toward the beginning.
  - Ignore trailing spaces at the end of the string.
  - Once a non-space character is found, start counting characters.
  - Continue counting until a space is encountered again.
  - The counted characters represent the length of the last word.
  - Return the final count as the answer.
*/

/*
  Alhamdulillah, problem solved successfully!
  الحمد لله الذي بنعمته تتم الصالحات
*/
