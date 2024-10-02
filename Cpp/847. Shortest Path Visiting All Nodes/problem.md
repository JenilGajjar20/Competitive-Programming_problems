## 847 Shortest Path Visiting All Nodes

You are given an undirected, connected graph with `n` nodes labeled from `0` to `n - 1`. You are given an array garph were `graph[i]` is a list of all nodes connected with node `i` by an egde.

Return *length of the shortest path that visits every node*. You may start and stop at any node, you may revisit nodes multipile time, and you may reuse edges.

**Example 1:**

![alt text](<Screenshot 2024-10-02 at 12.42.30 PM.png>)

 **Input :** graph  = `[[1,2,3], [0], [0], [0]]`

 **Output** = `4`

**Explanation**: One Possible path is `[1, 0, 2, 0, 3]`
### Function Signature

```cpp
class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph);
};
