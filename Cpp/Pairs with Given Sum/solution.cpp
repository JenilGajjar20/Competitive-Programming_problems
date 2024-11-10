#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int findPairs(vector<int>& nums, int k) {
    // Create a hash set to store unique numbers from the array.
    unordered_set<int> unique_nums;
    
    // Create a hash set to store unique pairs.
    unordered_set<int> unique_pairs;
    
    // Initialize a counter for unique pairs.
    int count = 0;
    
    for (int num : nums) {
        // Calculate the complement required to make the sum k.
        int complement = k - num;
        
        // Check if the complement is in the unique_nums set.
        if (unique_nums.count(complement) && !unique_pairs.count(num)) {
            // Found a pair (num, complement) that sums up to k.
            // Increment the count and add the numbers to the unique_pairs set.
            count++;
            unique_pairs.insert(num);
            unique_pairs.insert(complement);
        }
        
        // Add the current number to the unique_nums set.
        unique_nums.insert(num);
    }
    
    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 5;

    int result = findPairs(nums, k);

    cout << "Number of unique pairs that sum to " << k << ": " << result << endl;

    return 0;
}
