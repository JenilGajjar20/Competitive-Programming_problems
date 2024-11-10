class Solution:
    def calculateMinimumHP(self, dungeon):
        # Get the number of rows and columns in the dungeon.
        num_rows = len(dungeon)
        num_cols = len(dungeon[0])
        
        # Create a 2D list to store the minimum initial health required.
        dp = [[float('-inf')] * num_cols for _ in range(num_rows)]
        
        def getMinimumHealth(i, j):
            # If the knight reaches the princess, return the minimum of 0 and the cell's value.
            if i == num_rows - 1 and j == num_cols - 1:
                return min(0, dungeon[i][j])
            
            # If the result for this cell is already calculated, return it.
            if dp[i][j] != float('-inf'):
                return dp[i][j]
            
            # Calculate the minimum health required when moving right and down.
            right_health = float('-inf')
            down_health = float('-inf')
            
            if j + 1 < num_cols:
                right_health = getMinimumHealth(i, j + 1)
            
            if i + 1 < num_rows:
                down_health = getMinimumHealth(i + 1, j)
            
            # Calculate the minimum health required to reach the princess from this cell.
            min_health = dungeon[i][j] + max(right_health, down_health)
            
            # Store the result in the DP table and return it.
            dp[i][j] = min(0, min_health)
            return dp[i][j]
        
        # Calculate the minimum initial health required to reach the princess from the starting cell.
        min_initial_health = abs(getMinimumHealth(0, 0)) + 1
        return min_initial_health
