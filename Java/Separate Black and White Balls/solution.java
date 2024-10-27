// URL:- https://leetcode.com/problems/separate-black-and-white-balls/description/

import java.util.*;
public class solution {
    static Scanner obj=new Scanner(System.in);
    public static void main(String args[]){
        run();
    }

    private static void run() {
        String str=obj.nextLine();
        long answer=minimumSteps(str);
        System.out.println(answer);
    }


    private static long minimumSteps(String s){
        int ans = 0;
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s.charAt(left) == '1') {
                if (s.charAt(right) == '0') {
                    ans += right - left;
                    left++;
                }
                right--;
            }
            else {
                if (s.charAt(right) == '1') right--;
                left++;
            }
        }
        return ans;
    }
}


// METHOD2:-
/*
int l = s.length();
        int j = l - 1;
        int i = 0;
        char arr[] = s.toCharArray();
        long res = 0;
        while(i<j){
            if(arr[j] == '0' && arr[i] == '1'){
                res += (j-i);
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else if(arr[i] == '0') i++;
            else if(arr[j] == '1') j--;
        }
        return res;
* */

// METHOD3:-
/*
long answer = 0;
        int counter = 0;
        for(char ch : s.toCharArray())
        {
            if(ch == '0')
            {
                answer += counter;
            }
            else
            {
                counter++;
            }
        }
        return answer;
* */