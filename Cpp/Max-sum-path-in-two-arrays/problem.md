# Maximum Sum Path in Two Sorted Arrays

## Problem Statement

Given two sorted arrays `arr1` and `arr2` of distinct integers, some elements may be common between the two arrays. We need to find the maximum sum of a path from the beginning of either array to the end of any array. The twist is that you can switch from one array to the other array only at common elements, and when you switch, the common element should be included only once in the result.

### Example 1:

**Input:**  
`arr1 = [2, 3, 7, 10, 12]`  
`arr2 = [1, 5, 7, 8]`

**Output:**  
`35`

**Explanation:**  
The optimal path is:  
1 + 5 + 7 (switch from `arr2` to `arr1` at 7) + 10 + 12 = **35**

### Example 2:

**Input:**  
`arr1 = [1, 2, 3]`  
`arr2 = [3, 4, 5]`

**Output:**  
`15`

**Explanation:**  
The optimal path is:  
1 + 2 + 3 (switch from `arr1` to `arr2` at 3) + 4 + 5 = **15**

---

## Constraints

- `1 <= arr1.size(), arr2.size() <= 10^4`
- `1 <= arr1[i], arr2[i] <= 10^5`

---