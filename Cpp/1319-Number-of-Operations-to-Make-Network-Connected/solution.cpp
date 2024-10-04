class Solution {
private:
    // DFS to explore all connected components starting from the given source node 'src'.
    void dfs(vector<vector<int>> &adj, vector<bool> &visited, int src)
    {
        visited[src] = true;  // Mark the current node as visited
        // Explore all the adjacent nodes of the current node
        for(int i : adj[src])
            if(!visited[i])   // If the adjacent node is not visited, do a DFS on it
                dfs(adj, visited, i);
    }

public:
    // Function to calculate the minimum number of operations to make the network connected
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        // If there are less than n-1 connections, it is impossible to connect all computers
        if(connections.size() < n - 1)
            return -1;
        
        // Build the adjacency list for the undirected graph
        vector<vector<int>> adj(n);
        for(auto v : connections)
        {
            // Since it's an undirected graph, add both directions
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        
        // Create a visited array to keep track of which nodes have been visited during DFS
        vector<bool> visited(n, false);
        int components = 0; // This will store the number of connected components

        // Perform DFS for each unvisited node to count the number of connected components
        for(int i = 0; i < n; i++)
            if(!visited[i])  // If the node is not visited, it's a new component
            {
                dfs(adj, visited, i);  // Perform DFS starting from this node
                components++;          // Increase the number of components
            }
        
        // The minimum number of operations needed to connect the network is (components - 1)
        return components - 1;
    }
};
