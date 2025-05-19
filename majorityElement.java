//============================================================================
// 169. Majority Element - LeetCode
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Finds the majority element in the array that appears > n/2 times
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

import java.util.*;

public class majorityElement
{
    public static int majorityElement(int[] nums)
    {
        //As majority items is more than n/2 times. just return
        //mid element after sort

        int n = nums.length;

        Arrays.sort(nums);
        int element = nums[n/2];
        return element;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0 ; i<arr.length ; i++)
        {
            arr[i] = sc.nextInt();
        }

        int element = majorityElement(arr);
        System.out.println(element);

        sc.close();
    }
}

/*
  ## 💡 Solution Logic
  - Sort the array.
  - The majority element (appearing more than n/2 times) will be at index `n/2`.

  ✅ Time Complexity: O(n log n) due to sorting
  ✅ Space Complexity: O(1) (excluding input storage)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
