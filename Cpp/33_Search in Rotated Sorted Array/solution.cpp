// CPP Solution for the described problem statement:

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        // size of the input vector 'nums'
        int numsSize = nums.size();

        // Initializing 'start' to the beginning of the vector
        int start = 0;

        // and 'end' to the end of the vector
        int end = numsSize - 1;

        // Continue the loop until 'start' is less than or equal to 'end
        while (start <= end)
        {
            // Optimal way to calculate the mid index
            int mid = start + (end - start) / 2;

            // If the target is equal to the element at the middle index
            if (target == nums[mid])
            {
                return mid; // Return the index of the target integer
            }

            // Checking if the left half of the array is sorted
            if (nums[start] <= nums[mid])
            {
                // if target is within the left sorted half
                if (target < nums[mid] && target >= nums[start])
                {
                    end = mid - 1; // Adjust 'end' to search the left half
                }
                else
                {
                    start = mid + 1; // Adjust 'start' to search the right half
                }
            }

            // Check if the right half of the array is sorted
            else
            {
                if (target > nums[mid] && target <= nums[end])
                {
                    start = mid + 1; // Adjust 'start' to search the right sorted half
                }
                else
                {
                    end = mid - 1; // Adjust 'end' to search the left sorted half
                }
            }
        }
        // Return -1 if the target integer is not found
        return -1;
    }
};
