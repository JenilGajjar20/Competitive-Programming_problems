class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int ind = upper_bound(letters.begin(), letters.end(), target) - letters.begin();
        return (ind != letters.size()) ? letters[ind] : letters[0];
    }
};