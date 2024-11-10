class Solution
{
public:
  // Adjacency list to represent the tree
  vector<vector<int>> adj;

  // count[i] will store the number of nodes in the subtree rooted at node i
  vector<int> count;

  // ans[i] will store the sum of distances from node i to all other nodes
  vector<int> ans;

  // First DFS to calculate the count of nodes in each subtree and
  // the sum of distances for node 0
  void dfs1(int v, int par)
  {
    // Start by assuming node v is the only node in its subtree
    count[v] = 1;

    // Traverse through all adjacent nodes of v
    for (auto u : adj[v])
    {
      // Skip the parent node to prevent going back in recursion
      if (u == par)
        continue;

      // Recursively perform DFS for child node u
      dfs1(u, v);

      // After DFS, add the number of nodes in u's subtree to v's count
      count[v] += count[u];

      // Add the sum of distances of u's subtree to v's answer
      // Also add the count of nodes in u's subtree to account for the
      // direct distance from v to all nodes in u's subtree
      ans[v] += ans[u] + count[u];
    }
  }

  // Second DFS to calculate the answer for all nodes using the result from node 0
  void dfs2(int v, int par, int n)
  {
    // If we are not at the root, adjust the answer for node v based on its parent's answer
    if (par != -1)
    {
      // ans[v] = ans[par] - count[v] + (n - count[v])
      // The distance sum for v is derived from its parent's distance sum by:
      // 1. Subtracting the contribution of the subtree rooted at v (count[v])
      // 2. Adding the contribution of all other nodes not in v's subtree (n - count[v])
      ans[v] = ans[par] - count[v] + (n - count[v]);
    }

    // Traverse through all adjacent nodes of v
    for (auto u : adj[v])
    {
      // Skip the parent node to prevent going back in recursion
      if (u == par)
        continue;

      // Recursively perform DFS for child node u
      dfs2(u, v, n);
    }
  }

  // Main function to calculate the sum of distances in a tree
  vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
  {
    // Resize adjacency list, count, and answer vectors for n nodes
    adj.resize(n);
    count.resize(n, 0);
    ans.resize(n);

    // Build the adjacency list from the given edges
    for (auto i : edges)
    {
      adj[i[0]].push_back(i[1]);
      adj[i[1]].push_back(i[0]);
    }

    // First DFS to calculate the subtree node count and distance sum for node 0
    dfs1(0, -1);

    // Second DFS to calculate the distance sum for all other nodes
    dfs2(0, -1, n);

    // Return the final result
    return ans;
  }
};
