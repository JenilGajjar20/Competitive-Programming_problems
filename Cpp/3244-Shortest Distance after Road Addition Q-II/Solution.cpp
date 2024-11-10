class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int size, vector<vector<int>>& queries) {
        // Set to store all possible positions in a range (1 to size).
        set<int> positions;
        
        // Initialize the set with values from 1 to size.
        for (int i = 0; i < size; ++i)
            positions.insert(i + 1);
        
        // Vector to store the results of each query.
        vector<int> result;
        
        // Process each query in the queries vector.
        for (int i = 0; i < queries.size(); ++i) {
            // Extract the start and end range from the current query.
            int start = queries[i][0];
            int end = queries[i][1];
            
            // Iterate over the set to remove values that fall within the range (start, end).
            while (true) {
                // Find the first position greater than the start.
                auto iterator = positions.upper_bound(start);
                
                // If no valid position exists or the current position is greater than or equal to the end, stop.
                if (iterator == positions.end() || *iterator >= end)
                    break;
                
                // Erase the position from the set if it falls in the range.
                positions.erase(*iterator);
            }
            
            // After processing the query, store the current size of the set minus 1.
            result.push_back(positions.size() - 1);
        }
        
        // Return the results after processing all queries.
        return result;
    }
};
