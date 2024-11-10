# Python Program for Medium Level Leetcode Problem: 593. Valid Square

import math
class Solution:
    def validSquare(self, p1: List[int], p2: List[int], p3: List[int], p4: List[int]) -> bool:
        
        # Function to calculate the Euclidean distance between two points:
        def distance(p1, p2):
            return math.sqrt((p2[0] - p1[0]) ** 2 + (p2[1] - p1[1]) ** 2)

        # Storing the four input points in a list:
        points = [p1, p2, p3, p4]

        # Initializing an empty list to store the distances between all pairs of points:
        distances = []

        # Calculating the distances between all pairs of points and add them to the distances list:
        for i in range(4):
            for j in range(i + 1, 4):
                distances.append(distance(points[i], points[j]))

        # Sorting the distances in ascending order:
        distances.sort()

        # Check if the distances form a valid square:
        return (
            # All sides are equal:
            distances[0] == distances[1] == distances[2] == distances[3] and
            
            # Diagonals are equal:
            distances[4] == distances[5] and 
            
            # Distances must be greater than zero (a valid square):
            distances[0] > 0
        )
