class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2; // Initialize k to 2, allowing at most two duplicates

        // If the array size is less than or equal to 2, return its size (no duplicates to remove)
        if (nums.size() <= 2) return nums.size();
        
        // Iterate through the array starting from the third element (index 2)
        for (int i = 2; i < nums.size(); i++) {
            // Check if the current number is different from the number at index k-2
            if (nums[i] != nums[k - 2]) {
                // If different, assign the current number to the position indexed by k
                nums[k] = nums[i];
                k++; // Increment k to point to the next position
            }
        }

        // Return the new length of the array with allowed duplicates
        return k;       
    }
};
