class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // Create an unordered_map to store the cumulative sum and its frequency.
        unordered_map<int, int> mp;

        // Initialize variables to keep track of the cumulative sum and the answer.
        int sum = 0; // Cumulative sum
        int ans = 0; // Answer

        // Initialize the cumulative sum to 0 with a frequency of 1.
        mp[sum] = 1;

        // Iterate through the elements of the 'nums' vector.
        for (auto it : nums) {
            // Add the current element to the cumulative sum.
            sum += it;

            // Calculate the value we want to find in the map.
            int find = sum - k;

            // Check if 'find' exists in the map.
            if (mp.find(find) != mp.end()) {
                // If 'find' exists in the map, increment 'ans' by the frequency of 'find'.
                ans += mp[find];
            }

            // Increment the frequency of the current cumulative sum.
            mp[sum]++;
        }

        // Return the final answer.
        return ans;
    }
};
