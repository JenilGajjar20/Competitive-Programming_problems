class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        // Another approach: Using an unordered_set for efficient lookups

        // Get the size of the input vector
        int n = nums.size();

        // If there are no elements in the input vector, the longest consecutive subsequence is 0
        if(n == 0)
            return 0;

        // Create an unordered_set to store the unique elements from nums
        unordered_set<int> st;

        // Insert all elements from nums into the unordered_set
        for(int x: nums)
            st.insert(x);

        // Initialize a variable to store the maximum consecutive subsequence length
        int ans = 0;

        // Iterate through the elements in the unordered_set
        for(int it: st) {
            // Check if the current element is the start of a consecutive subsequence
            if(st.find(it - 1) == st.end()) {
                int cnt = 1; // Initialize a counter for the current subsequence
                int x = it;  // Initialize x as the current element

                // Continue counting consecutive elements
                while(st.find(x + 1) != st.end()) {
                    cnt++;
                    x += 1;
                }

                // Update the maximum consecutive subsequence length if necessary
                ans = max(ans, cnt);
            }
        }

        // Return the maximum consecutive subsequence length found
        return ans;
    }
};
