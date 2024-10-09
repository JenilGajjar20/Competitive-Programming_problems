#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int n = s.length();
        int hash[26] = {0};
        int maxi = 0, max_fr = 0;
        
        while (r < n) {
            hash[s[r] - 'A']++;
            max_fr = max(max_fr, hash[s[r] - 'A']);
            
            if (r - l + 1 - max_fr > k) {
                hash[s[l] - 'A']--;
                l++;
            } else {
                maxi = max(maxi, r - l + 1);
            }
            r++;
        }
        
        return maxi;
    }
};

int main() {
    Solution solution;
    string s;
    int k;
    
    // Taking input
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the value of k: ";
    cin >> k;
    
    // Calling the characterReplacement function and printing the result
    int result = solution.characterReplacement(s, k);
    cout << "The length of the longest substring after replacement: " << result << endl;
    
    return 0;
}
