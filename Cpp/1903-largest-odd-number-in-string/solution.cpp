class Solution {
public:
    string largestOddNumber(string num) {
        // Get the size of the string
        int n = num.size();

        // Loop backwards through the string
        for(int i = n; i >= 0; i--){

            // Get the char number value of the character at position i
            int last = num[i];

            // Check if the digit at position i is odd
            // This is done by converting the character to its integer value and checking the last bit
            if((last-'0') & 1){

                // If odd, return the substring from the start till the odd digit
                return num.substr(0, i+1);
            }
        }

        // If no odd digit is found, return an empty string
        return "";
    }
};