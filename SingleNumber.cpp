//============================================================================
// 136. Single Number - LeetCode (Local Version)
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Find the single element in an array where every other element appears twice.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Type aliases
using ll = long long;
using ull = unsigned long long;

// Debug (disabled in submission)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n';
#else
    #define debug(x)
#endif

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int value : nums)
        {
            ans = ans ^ value;
        }
        return ans;
    }
};

int main()
{
    FAST_IO;

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.singleNumber(nums);
    cout << result << '\n';

    return 0;
}

/*
  ## 💡 Solution Logic
  XOR properties:
  - a ^ a = 0
  - a ^ 0 = a
  - XOR is commutative and associative.
  So, all duplicate numbers cancel out, and only the single number remains.

  Time Complexity: O(n)
  Space Complexity: O(1)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
