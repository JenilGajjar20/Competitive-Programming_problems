// the URL of the Problem:- https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/

import java.util.*;
public class solution {
    static Scanner obj = new Scanner(System.in);

    public static void main(String args[]) {
        run();
    }

    private static void run() {
        String str = obj.nextLine();  // takes the input String consisting mainly of [ and ]
        int ans = minSwaps(str);
        System.out.println(ans);
    }

    private static int minSwaps(String s) {
        Stack<Character> stack = new Stack<>();
        int answer = 0;
        int imbalance = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '[') {
                stack.push(s.charAt(i));
            } else {
                if (!stack.isEmpty() && stack.peek() == '[') {
                    stack.pop();
                } else {
                    imbalance++;
                }
            }
        }

        answer = (imbalance + 1) / 2;
        return answer;
    }
}
