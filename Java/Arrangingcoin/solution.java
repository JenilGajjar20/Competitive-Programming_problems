 /* first of all we will accept the no of coins from the users.
  Then we will pass into the arrangeCoins functions.
  We have to build a stair like the top most stair should only have one coin 
  and the bottom most stair should have n coins.
  so first we will delete one coin from the user entered coins and we will build the first stair.
  for the second stair we will delete two coins and increase the stair no to two.
  we will continue like this till the user has less no of coins than no of stair required to build.
 */
import java.util.Scanner;

class Solution {
 
    public static void main(String[] args) {
        Scanner sn=new Scanner(System.in);
        System.out.println("Please enter the number of coins");
        int n=sn.nextInt();
       int ans= arrangeCoins(n);
       System.out.println("The stair obtained by arraning coins is :"+ ans);
    }
    
    public static  int arrangeCoins(int n) 
    {
        int stair=0;
        int count=1;
        while(n>=count)
        {
            n=n-count;
            stair++;
            count++;
        }
        return stair;

    }
}