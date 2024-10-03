class Solution {
public:
    /**
     * This function finds the length of the shortest path that visits all the nodes
     * in a directed graph represented as an adjacency list. The graph is assumed to be
     * connected and undirected.
     *
     * @param graph A 2D vector representing the adjacency list of the graph,
     *              where graph[i] contains a list of nodes connected to node i.
     * @return The length of the shortest path that visits all nodes; 
     *         returns -1 if no such path exists (though in a connected graph, this shouldn't happen).
     */
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size(); // Get the number of nodes in the graph
        queue<pair<int, pair<int, int>>> q; // Queue to perform BFS
        set<pair<int, int>> s; // Set to keep track of visited states

        // Initialize the queue with each node, marking it as visited
        // with its respective bitmask, and set the distance to 0
        for(int i = 0; i < n; i++) {
            q.push({i, {1 << i, 0}}); // Start from each node
            s.insert({i, 1 << i}); // Mark the node as visited with the corresponding bitmask
        }

        int ans = (1 << n) - 1; // The target bitmask representing all nodes visited

        // Perform BFS
        while(!q.empty()) {
            int node = q.front().first; // Current node
            int mask = q.front().second.first; // Current visited nodes bitmask
            int dist = q.front().second.second; // Current path length

            q.pop();

            // Check if all nodes have been visited
            if(mask == ans) {
                return dist; // Return the distance if all nodes are visited
            }

            // Explore adjacent nodes
            for(auto x : graph[node]) {
                int t = mask | (1 << x); // Update the bitmask to include the adjacent node

                // Check if this state has already been visited
                if(s.find({x, t}) == s.end()) {
                    s.insert({x, t}); // Mark the state as visited
                    q.push({x, {t, dist + 1}}); // Push the new state to the queue with updated distance
                }
            }
        }

        return -1; // Return -1 if no path visiting all nodes is found (should not happen in connected graphs)
    }
};
