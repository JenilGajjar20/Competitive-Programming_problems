# 3244 Shortest Distance after Road Addition Queries - II

## Problem Overview

You are given an integer `n` and a 2D integer array `queries`.

There are `n` cities numbered from `0` to `n-1`. Initially, there is a road from city `i` to city `i+1` for all `0 <= i < n-1`.

`queries[i] = [ui, vi]` represents the addition of a new unidirectional road from city `ui` to city `vi`. After each query, you need to find the length of the shortest path from city 0 to city n - 1.

There are no two queries such that `queries[i][0] < queries[j][0] < queries[i][1]queries[j][1]`.

**Example 1:**
 **Input :**  `n` = 5, graph  = `[[2,5], [0,2], [0,4]]`

 **Output** = `[3,2,1]`

**Explanation**: ![alt text](<Screenshot 2024-10-02 at 1.08.38 PM.png>)

### Function Signature
```cpp
class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        
    }
};
