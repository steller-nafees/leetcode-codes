//============================================================================
// 53. Maximum Subarray - LeetCode
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Implements Kadane’s Algorithm to find the maximum subarray sum
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

import java.util.*;

public class MaximumSubArray
{
    public static int maxSubArray(int[] nums)
    {
        int maxSum = Integer.MIN_VALUE, currSum = 0;
        for (int value : nums)
        {
            currSum += value;
            maxSum = Math.max(maxSum, currSum);
            if (currSum < 0)
                currSum = 0;
        }
        return maxSum;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++)
        {
            nums[i] = sc.nextInt();
        }

        int result = maxSubArray(nums);
        System.out.println(result);

        sc.close();
    }
}

/*
  ## 💡 Solution Logic
  - Loop through the array.
  - Use `currSum` to track the current subarray sum.
  - Reset it if it drops below 0.
  - Track the maximum with `maxSum`.

  ✅ Time Complexity: O(n)
  ✅ Space Complexity: O(1)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
