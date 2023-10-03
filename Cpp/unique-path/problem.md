Unique Paths in Grid
You are tasked with solving a problem related to a robot navigating through an m x n grid. The robot starts at the top-left corner, which is represented as grid[0][0], and its goal is to reach the bottom-right corner, represented as grid[m - 1][n - 1]. The robot can only move in two directions: right or down.

Task
Write a function that takes two integers, m and n, as input and returns the number of unique paths the robot can take to reach the bottom-right corner.

Example
Example 1:
Input:
m = 3
n = 7
Output:
28
Explanation:
In this example, the robot is on a 3 x 7 grid, and there are 28 unique paths it can take to reach the bottom-right corner.

Example 2:
Input:
m = 3
n = 2
Output:
3
Explanation:
In this example, the robot is on a 3 x 2 grid, and there are 3 unique paths it can take to reach the bottom-right corner:

Right -> Down -> Down
Down -> Down -> Right
Down -> Right -> Down
Constraints
1 <= m, n <= 100
Note
The test cases are generated in such a way that the answer will always be less than or equal to 2 \* 10^9.

Hints
To solve this problem, you may consider using dynamic programming or combinatorial math.

Dynamic Programming Approach
You can create a 2D array to store the number of unique paths to each cell in the grid. Initialize the top row and leftmost column with 1 since there is only one way to reach any cell in those rows/columns (by moving only right or down). Then, iterate through the grid and compute the number of unique paths for each cell based on the paths from the cell above and the cell to the left. The value in the bottom-right corner will represent the total number of unique paths.

Combinatorial Math Approach
Alternatively, you can solve this problem using combinatorial math. The number of unique paths from the top-left corner to the bottom-right corner can be calculated using combinations. You can use the formula for combinations (n choose k) to calculate the result
