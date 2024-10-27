// This is the URL for the problem:- https://leetcode.com/problems/longest-happy-string/description/

import java.util.*;
public class solution {
    static Scanner obj = new Scanner(System.in);

    public static void main(String[] args) {
        run();
    }

    private static void run() {
        int a = obj.nextInt();
        int b = obj.nextInt();
        int c = obj.nextInt();

        String answer = longestDiverseString(a, b, c);
        System.out.println(answer);
    }

    private static String longestDiverseString(int a, int b, int c) {

        StringBuilder sb = new StringBuilder();

        while (a > 0 || b > 0 || c > 0) {
            // FOR A BEING THE MAX
            if (a >= b && a >= c) {
                if (sb.charAt(sb.length() - 1) == 'a' && sb.charAt(sb.length() - 2) == 'a' && sb.length() >= 2 ) {
                    // case where already 2 a's are there in the string-so we move for the next alphabet
                    if (b > 0) {
                        sb.append("b");
                        b--;
                    } else if (c > 0) {
                        sb.append("c");
                        c--;
                    } else {
                        break;  // case jab sirf a hi bacha hai, but pehle ke do bhi a hi the
                    }
                } else {
                    sb.append("a");  // Append 'a' if it's not violating the rule
                    a--;
                }
            }

            // FOR B BEING THE MAX
            else if (b >= a && b >= c) {
                if (sb.length() >= 2 && sb.charAt(sb.length() - 1) == 'b' && sb.charAt(sb.length() - 2) == 'b') {
                    // case where already 2 b's are there in the string-so we move for the next alphabet
                    if (a > 0) {
                        sb.append("a");
                        a--;
                    } else if (c > 0) {
                        sb.append("c");
                        c--;
                    } else {
                        break;  // case jab sirf b hi bacha hai, but pehle ke do bhi b hi the
                    }
                } else {
                    sb.append("b");  // Append 'b' if it's not violating the rule
                    b--;
                }
            }

            // FOR C BEING THE MAX
            else {
                if (sb.length() >= 2 && sb.charAt(sb.length() - 1) == 'c' && sb.charAt(sb.length() - 2) == 'c') {
                    // case where already 2 c's are there in the string-so we move for the next alphabet
                    if (b > 0) {
                        sb.append("b");
                        b--;
                    } else if (a > 0) {
                        sb.append("a");
                        a--;
                    } else {
                        break;  // case jab sirf c hi bacha hai, but pehle ke do bhi c hi the
                    }
                } else {
                    sb.append("c");  // Append 'c' if it's not violating the rule
                    c--;
                }
            }
        }

        return sb.toString();
    }
}
