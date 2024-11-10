#include <iostream>
#include <vector>
#include <unordered_set>

int findDuplicate(std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        if (seen.count(num) > 0) {
            return num; // Found a duplicate
        }
        seen.insert(num);
    }

    return -1; // No duplicate found
}

int main() {
    std::vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = findDuplicate(nums);
    
    if (duplicate != -1) {
        std::cout << "Duplicate number: " << duplicate << std::endl;
    } else {
        std::cout << "No duplicate found." << std::endl;
    }

    return 0;
}
