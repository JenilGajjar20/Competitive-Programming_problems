using ll = long long;
const int M = 1000000007;

class Solution {
public:
    int netdiff[3][3];  // Stores net differences for each transition
    int dp[1001][2030][3]; 

    Solution() {
        netdiff[0][0] = 0;    // F vs F
        netdiff[0][1] = -1;   // F vs W -> Lose
        netdiff[0][2] = 1;    // F vs G -> Win
        netdiff[1][1] = 0;    // W vs W
        netdiff[1][2] = -1;   // W vs G -> Lose
        netdiff[1][0] = 1;    // W vs F -> Win
        netdiff[2][2] = 0;    // G vs G
        netdiff[2][0] = -1;   // G vs F -> Lose
        netdiff[2][1] = 1;    // G vs W -> Win
    }

    /**
     * Recursive function to calculate the number of "winning" sequences.
     * 
     * s     The modified input string (F, W, G replaced by a, b, c).
     * prev  The previous character in the sequence.
     * idx   Current index in the string `s`.
     * diff  Current score difference.
     * 
     * returns The number of ways to form a "winning" sequence modulo M.
     */
    ll ways(string& s, char prev, ll idx, ll diff) {
        if (idx >= s.length()) {  // Base case: reached end of string
            return diff <= 0;  // Sequence is "winning" if the score difference is <= 0
        }

        // Memoization check: Use stored result if available
        if (idx && dp[idx][diff + 1010][prev - 'a'] != -1) 
            return dp[idx][diff + 1010][prev - 'a'];

        // Recursive cases: Choose transitions based on `prev` character
        if (prev == 'a') {  // Previous was 'a' (F)
            return dp[idx][diff + 1010][prev - 'a'] = 
                ((ways(s, 'b', idx + 1, diff + netdiff[s[idx] - 'a'][1]) % M) + 
                 (ways(s, 'c', idx + 1, diff + netdiff[s[idx] - 'a'][2]) % M)) % M;
        } else if (prev == 'b') {  // Previous was 'b' (W)
            return dp[idx][diff + 1010][prev - 'a'] = 
                ((ways(s, 'a', idx + 1, diff + netdiff[s[idx] - 'a'][0]) % M) + 
                 (ways(s, 'c', idx + 1, diff + netdiff[s[idx] - 'a'][2]) % M)) % M;
        } else if (prev == 'c') {  // Previous was 'c' (G)
            return dp[idx][diff + 1010][prev - 'a'] = 
                ((ways(s, 'a', idx + 1, diff + netdiff[s[idx] - 'a'][0]) % M) + 
                 (ways(s, 'b', idx + 1, diff + netdiff[s[idx] - 'a'][1]) % M)) % M;
        }

        // Case where there is no 'prev' character specified
        return (((ways(s, 'a', idx + 1, diff + netdiff[s[idx] - 'a'][0]) % M) + 
                 (ways(s, 'b', idx + 1, diff + netdiff[s[idx] - 'a'][1]) % M)) % M + 
                 (ways(s, 'c', idx + 1, diff + netdiff[s[idx] - 'a'][2]) % M)) % M;
    }

    /**
     * Main function to count all winning sequences.
     * 
     * s Input string consisting of characters 'F', 'W', and 'G'.
     * 
     * returns Number of winning sequences modulo M.
     */
    int countWinningSequences(string s) {
        // Initialize dp array to -1 for memoization
        memset(dp, -1, sizeof(dp));

        // Transform string to internal representation: F -> 'a', W -> 'b', G -> 'c'
        for (auto &e : s) {
            if (e == 'F') e = 'a';
            else if (e == 'W') e = 'b';
            else e = 'c';
        }

        // Start recursive DP with initial diff of 1 (neutral)
        return ways(s, ' ', 0, 1);
    }
};
