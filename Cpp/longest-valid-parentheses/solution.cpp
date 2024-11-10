/*
 * Approach:
 * 
 * The solution uses a dynamic programming approach combined with a stack to find the length of the longest valid parentheses substring.
 * 
 * 1. **Dynamic Programming Array (`dp`)**: 
 *    - We maintain a `dp` array where `dp[i]` represents the length of the longest valid parentheses substring that starts at index `i`.
 *    - The size of the `dp` array is `n + 1`, where `n` is the length of the input string, initialized to zero at the last index.
 *
 * 2. **Stack for Indices**: 
 *    - A stack is used to store the indices of closing parentheses `')'`. This helps in efficiently finding the corresponding opening parentheses `'('`.
 *
 * 3. **Reverse Traversal**:
 *    - We traverse the string from right to left (from the end to the beginning). For each character:
 *      - If it is a closing parenthesis `')'`, its index is pushed onto the stack and `dp[i]` is set to `0` since it cannot be a starting point for a valid substring.
 *      - If it is an opening parenthesis `'('`, we check if there is a matching closing parenthesis in the stack:
 *        - If the stack is empty, it indicates there are no matching closing parentheses, so we set `dp[i]` to `0`.
 *        - If there is a matching closing parenthesis, we pop the index from the stack and calculate the length of the valid substring:
 *          - The length is computed as `j - i + 1`, where `j` is the index of the matching `')'`.
 *          - We then update `dp[i]` to be the length of this valid substring plus the length of valid parentheses starting after the matching closing parenthesis.
 *
 * 4. **Finding the Maximum Length**:
 *    - Finally, we iterate through the `dp` array to find and return the maximum value, which represents the length of the longest valid parentheses substring.
 */

class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size(); 
        vector<int> dp(n + 1);
        dp[n] = 0; 
        vector<int> st;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == ')') {
                st.push_back(i);
                dp[i] = 0; // No valid substring starts with a closing parenthesis
            } else {
                if (st.empty()) {
                    // No matching closing parenthesis, so set dp[i] to 0
                    dp[i] = 0; 
                    continue;
                }
                int j = st.back(); // Get the index of the matching closing parenthesis
                st.pop_back();
                int l = j - i + 1; // Calculate the length of the valid substring
                dp[i] = l + dp[j + 1]; 
            }
        }
        
        int ans = 0;
        for (int item : dp) {
            // Update ans with the maximum value found in dp
            ans = max(ans, item); 
        }
        return ans;
    }
};
