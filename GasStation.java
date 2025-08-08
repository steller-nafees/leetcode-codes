//============================================================================
// 134. Gas Station - LeetCode
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Determines the starting gas station index to complete circuit.
//              Implements greedy logic with total and current gas tracking.
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

import java.util.*;

public class GasStation
{
    public static int canCompleteCircuit(int[] gas, int[] cost)
    {
        int totalGas = 0, totalCost = 0, currGas = 0, start = 0;
        for(int i : gas)
            totalGas += i;
        for(int i : cost)
            totalCost += i;

        if (totalGas < totalCost)
            return -1;

        for (int i = 0; i < gas.length; i++)
        {
            currGas += gas[i] - cost[i];

            if (currGas < 0)
            {
                start = i + 1;
                currGas = 0;
            }
        }
        return start;
    }

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] gas = new int[n];
        int[] cost = new int[n];

        for(int i=0; i<n; i++)
        {
            gas[i] = sc.nextInt();
        }
        for(int i=0; i<n; i++)
        {
            cost[i] = sc.nextInt();
        }

        int result = canCompleteCircuit(gas,cost);
        System.out.println(result);

        sc.close();
    }
}

/*
  ## 💡 Solution Logic
  - Traverse each station and calculate total gas and cost.
  - If at any point current gas goes negative, reset the start index.
  - If total gas < total cost, return -1 (not possible).
  - Otherwise, return the valid starting index.

  ✅ Time Complexity: O(n)
  ✅ Space Complexity: O(1)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
