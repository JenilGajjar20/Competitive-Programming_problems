class Solution {
public:
    // TC: O(n)
    // Sc: O(1)
    void rotate(vector<int>& nums, int k) {
        // Get the size of the 'nums' vector
        int n = nums.size();

        // Adjust 'k' to handle cases where 'k' is larger than 'n'
        // This ensures the rotation wraps around if 'k' is larger than 'n'
        k = k % n;

        // Reverse the first part of the vector (0 to n-k-1)
        reverse(nums.begin(), nums.begin() + (n - k));

        // Reverse the second part of the vector (n-k to n-1)
        reverse(nums.begin() + (n - k), nums.end());

        // Reverse the entire vector
        reverse(nums.begin(), nums.end());
    }
};
