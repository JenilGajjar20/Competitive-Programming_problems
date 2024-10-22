// Problem URL:- https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/

import java.util.*;
public class Problem1545 {
    static Scanner obj = new Scanner(System.in);

    public static void main(String[] args) {
        run();
    }

    private static void run() {
        int n = obj.nextInt();                // this is the number of iterations of forming the string
        int k = obj.nextInt();                // this is the kth bit from the final formed string
        String s = "0";
        String patternString = formPatternString(s, n);
        char answer = patternString.charAt(k - 1);
        System.out.println(patternString);
        System.out.println(answer);
    }

    private static String formPatternString(String s, int n) {
        if (n == 0) {
            return s;                         // base case to stop recursion
        }

        StringBuilder sb = new StringBuilder(s);
        String sRev = sb.reverse().toString();
        char[] ch = sRev.toCharArray();

        // logic of inverting the reversed thing
        for (int i = 0; i < sRev.length(); i++) {
            if (ch[i] == '0') ch[i] = '1';
            else ch[i] = '0';
        }

        String invertedRev = new String(ch);
        sb.reverse();  // Reverse it back since we changed sb in the earlier step
        sb.append("1");
        sb.append(invertedRev);

        // recursive call with updated string and reduced iteration count
        return formPatternString(sb.toString(), n - 1);
    }
}
