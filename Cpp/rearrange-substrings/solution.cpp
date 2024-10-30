class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        long long ans = 0;
        int n = word1.size(), m = word2.size();
        
        // Frequency vector for tracking characters in word1's substrings
        vector<int> v(26, 0);
        // Frequency vector for required characters in word2
        vector<int> req(26, 0);

        // Fill `req` with frequencies of characters in word2
        for (auto &e : word2) req[e - 'a']++;

        int i = 0, start = 0;
        for (; i < n; i++) {
            // Add current character in the window
            v[word1[i] - 'a']++;
            bool done = true;

            // Check if the current window has all characters required by `req`
            for (int j = 0; j < 26; j++) {
                if (v[j] < req[j]) {
                    done = false;
                    break;
                }
            }

            // Shrink the window from the left while it still contains `word2` requirements
            while (done) {
                ans += (1ll * n - i); // Count substrings ending at `i` with start at `start`
                v[word1[start] - 'a']--;
                start++;

                // Check if the window is still valid after shrinking
                done = true;
                for (int j = 0; j < 26; j++) {
                    if (v[j] < req[j]) {
                        done = false;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};