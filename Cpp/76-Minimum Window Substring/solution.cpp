class Solution {
public:
    std::string minWindow(std::string source, std::string target) {
        // Map to keep track of the characters in the current window
        std::map<char, int> windowCount;
        // Map to keep track of the characters in the target string
        std::map<char, int> targetCount;
        int matchedChars = 0; // Number of unique characters matched in the current window
        int minLength = INT_MAX; // Length of the minimum window found
        int startIndex = 0; // Starting index of the minimum window
        int left = 0, right = 0; // Two pointers for the sliding window

        // Populate the targetCount map with characters and their frequencies from the target string
        for (auto &ch : target) {
            targetCount[ch]++;
        }

        // Expand the right end of the window
        while (right < source.size()) {
            // If the character at the right pointer is part of the target
            if (targetCount[source[right]] > 0) {
                matchedChars--;
            }
            // Decrement the count of the current character in the window
            windowCount[source[right]]++;
            right++;

            // Contract the left end of the window when all target characters are matched
            while (matchedChars == 0) {
                // Update the minimum window if a smaller one is found
                if (right - left < minLength) {
                    startIndex = left;
                    minLength = right - left;
                }
                // Remove the character at the left pointer from the window
                windowCount[source[left]]--;
                if (targetCount[source[left]] > 0 && windowCount[source[left]] < targetCount[source[left]]) {
                    matchedChars++;
                }
                left++; // Move the left pointer to the right
            }
        }

        // Return the minimum window substring, or an empty string if not found
        if (minLength != INT_MAX) {
            return source.substr(startIndex, minLength);
        }
        return "";
    }
};