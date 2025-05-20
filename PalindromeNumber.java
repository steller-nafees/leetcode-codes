//============================================================================
// 9. Palindrome Number - LeetCode
// Author: H M Nafees N Islam
// Institution: North South University (NSU), CSE
// Description: Checks whether a given integer is a palindrome
//============================================================================

/*
  بِسْمِ اللَّهِ الرَّحْمَـٰنِ الرَّحِيمِ
  Start with the name of Allah
*/

import java.util.*;

public class PalindromeNumber {

    public static boolean isPalindrome(int x)
    {
        String num = Integer.toString(x);
        boolean flag = true;
        for(int i=0; i<num.length()/2; i++)
        {
            if(num.charAt(i) != num.charAt(num.length() - 1 - i))
            {
                flag = false;
                break;
            }
            else
            {
                continue;
            }
        }
        return flag;

    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int x = sc.nextInt();

        if (isPalindrome(x))
            System.out.println("True");
        else
            System.out.println("False");

        sc.close();
    }
}

/*
  ## 💡 Solution Logic
  - Convert the number to a string.
  - Compare characters from both ends moving toward the center.
  - If all pairs match, it's a palindrome.

  ✅ Time Complexity: O(n)
  ✅ Space Complexity: O(1) (ignoring string conversion space)
*/

/*
  Alhamdulillah, problem solved!
  الحمد لله الذي بنعمته تتم الصالحات
*/
