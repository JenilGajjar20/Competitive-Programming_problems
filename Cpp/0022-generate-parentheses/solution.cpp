class Solution {
    // Helper function for generating valid parentheses combinations
    void parenthesisHelper(int n, int open, int close, string s, vector<string> &v){
        // If the string has reached the desired length (2 * n), add it to the result vector
        if(s.size() == 2 * n){
            v.push_back(s);
            return;
        }
        // If we can still add open parentheses, recursively call with an added open parenthesis
        if(open < n){
            parenthesisHelper(n, open + 1, close, s + '(', v);
        }
        // If we can add a closing parenthesis without violating the balance, recursively call with a close parenthesis
        if(close < open){
            parenthesisHelper(n, open, close + 1, s + ')', v);
        }
    }
public:
    // Main function for generating valid parentheses combinations
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        // Start the recursive process with no open or close parentheses
        parenthesisHelper(n, 0, 0, s, ans);
        return ans;
    }
};
