
// Initialize an index variable i to 0. This will be used to traverse the nums array.

// Start a loop that continues as long as i is within the bounds of the array.

// Within the loop, check if the current number, nums[i], meets the following conditions:

// It is a positive integer.
// It falls within the range of the array's length.
// It is not already in its correct position.
// If the conditions in step 3 are met, swap the number to its correct position within the array.

// After processing all elements in the array, use another loop to check if each element is in its expected position.

// If an element is not in its expected position, return the expected positive integer.

// If all elements are in their correct positions, return the next positive integer after the length of the array.

public class solution {

    public static void main(String[] args) {
        int[] arr = {1, 2, 0};
        int ans = firstMissingPositive(arr);
        System.out.println(ans);
    }

    public static int firstMissingPositive(int[] nums) {
        int i = 0;
        while (i < nums.length) {
            if (nums[i] > 0 && nums[i] <= nums.length && nums[i] != nums[nums[i] - 1]) {
                int correct = nums[i] - 1;
                int temp = nums[i];
                nums[i] = nums[correct];
                nums[correct] = temp;
            } else {
                i++;
            }
        }

        for (int index = 0; index < nums.length; index++) {
            if (nums[index] != index + 1) {
                return index + 1;
            }
        }
        
        return nums.length + 1;
    }
}



