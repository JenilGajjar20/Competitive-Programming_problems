class Solutio {
public:
    // Function to check if a substring of 'str' from index 's' to 'e' is a palindrome
    bool isPalindrome(string &str, int s, int e) {
        e -= 1;
        while (s < e) {
            if (str[s] != str[e])
                return false;
            s++;
            e--;
        }
        return true;
    }

    // Function to find the longest palindromic substring in the given string 's'
    string longestPalindrome(string s) {
        for (int i = s.length(); i > 0; i--) {
            for (int j = 0; j <= s.length() - i; j++) {
                if (isPalindrome(s, j, j + i)) {
                    return s.substr(j, i);
                }
            }
        }
        return "";
    }
};
