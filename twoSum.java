//============================================================================
// Two Sum - LeetCode
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds two indices in an array such that their values sum up
//              to a target number.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

import java.util.*;

public class twoSum {

    public static int[] twoSum(int[] nums, int target)
    {
        int[] result = new int[2];
        for (int i = 0; i < nums.length - 1; i++)
        {
            for (int j = i + 1; j < nums.length; j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
        return result;
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
        int target = sc.nextInt();

        int[] result = twoSum(nums, target);
        System.out.println( result[0] + " " + result[1]);

        sc.close();
    }
}

/*
  ## 💡 Solution Logic
  - Traverse the array using two nested loops.
  - Check if nums[i] + nums[j] == target.
  - Return the indices if found.

  Time Complexity: O(n^2)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
