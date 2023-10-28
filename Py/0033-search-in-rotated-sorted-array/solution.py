class Solution:
    def search(self, nums: List[int], target: int) -> int:
        # Initialize low and high pointers for binary search
        low = 0
        high = len(nums) - 1

        # Run the binary search loop
        while low <= high:
            # Calculate the midpoint index
            mid = (low + high) // 2

            # Check if the middle element is the target
            if nums[mid] == target:
                return mid

            # Check if the left half is sorted
            if nums[low] <= nums[mid]:
                # Check if the target is in the sorted left half
                if nums[low] <= target <= nums[mid]:
                    # Update high to search in the left half
                    high = mid - 1
                else:
                    # Update low to search in the right half
                    low = mid + 1
            else:
                # Check if the target is in the sorted right half
                if nums[mid] <= target <= nums[high]:
                    # Update low to search in the right half
                    low = mid + 1
                else:
                    # Update high to search in the left half
                    high = mid - 1

        # Return -1 if the target is not found
        return -1
