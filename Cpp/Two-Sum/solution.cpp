#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Create a map to store the indices of numbers encountered.
    unordered_map<int, int> num_indices;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // Check if the complement is already in the map.
        if (num_indices.find(complement) != num_indices.end()) {
            // Found a pair that adds up to the target.
            return {num_indices[complement], i};
        }
        
        // Add the current number and its index to the map.
        num_indices[nums[i]] = i;
    }
    
    // If no solution is found, return an empty vector.
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices of numbers that add up to " << target << ": [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
