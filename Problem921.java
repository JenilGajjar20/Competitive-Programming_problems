// Problem URL:- https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/

import java.util.*;
public class Problem921 {
    static Scanner obj=new Scanner(System.in);

    public static void main(String args[]){
        run();
    }

    private static void run(){
        String str=obj.nextLine();
        int ans=minAddToMakeValid(str);
        System.out.println(ans);
    }

    public static int minAddToMakeValid(String s) {
        int opening=0, closing=0;

        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='(')
            {
                opening++;
            }
            else
            {
                if(opening>0)
                {
                    opening--;
                }
                else
                    closing++;
            }
        }
        return opening +closing;
    }
}
