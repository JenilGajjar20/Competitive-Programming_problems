// Node class representing each node in the Trie
class Node {
    private:
        // Array to hold links for the two possible bits (0 or 1)
        Node* links[2];
    public:
        // Check if there is a child node for the given bit
        bool containsKey(int bit) {
            return links[bit] != NULL; // Return true if the link exists
        }
        
        // Link a new node for the specified bit
        void putBit(int bit, Node* node) {
            links[bit] = node; // Set the link at the specified bit
        }
        
        // Retrieve the child node for the specified bit
        Node* getNode(int bit) {
            return links[bit]; // Return the linked node
        }
};

// Trie class for inserting numbers and finding maximum XOR values
class Trie {
    private:
        Node* root; // Root node of the Trie
    public:
        // Constructor to initialize the Trie
        Trie() {
            root = new Node(); // Create the root node
        }
        
        // Insert a number into the Trie
        void insert(int num) {
            Node* curr = root; // Start from the root
            // Process each of the 32 bits of the number
            for (int i = 31; i >= 0; i--) {
                // Extract the bit at the i-th position
                int bit = (num >> i) & 1; // Right shift and AND with 1
                // If there is no link for this bit, create a new node
                if (!curr->containsKey(bit)) {
                    Node* newNode = new Node(); // Create a new node
                    curr->putBit(bit, newNode); // Link the new node
                }
                curr = curr->getNode(bit); // Move to the child node
            }
        }
        
        // Find the maximum XOR of a given number with the numbers in the Trie
        int findMaxXOR(int nums) {
            Node* curr = root; // Start from the root
            int maxi = 0; // Variable to hold the maximum XOR value
            // Process each of the 32 bits of the given number
            for (int i = 31; i >= 0; i--) {
                int bit = (nums >> i) & 1; // Extract the bit at the i-th position
                // Check for the opposite bit to maximize XOR
                if (curr->containsKey(1 - bit)) {
                    maxi = (1 << i) | maxi; // Set the i-th bit in maxi
                    curr = curr->getNode(1 - bit); // Move to the opposite node
                } else {
                    curr = curr->getNode(bit); // Move to the current node
                }
            }
            return maxi; // Return the maximum XOR value found
        }
};

// Solution class to maximize XOR for each query
class Solution {
public:
    vector<int> maximizeXor(vector<int>& nums, vector<vector<int>>& queries) {
        Trie trie; // Create a new Trie instance
        // Sort the input numbers
        sort(nums.begin(), nums.end());
        // Vector to hold sorted queries along with their original indices
        vector<pair<pair<int, int>, int>> qrs;
        int q = queries.size();
        
        // Prepare queries with their maximum value and associated number
        for (int i = 0; i < q; i++) {
            int xi = queries[i][0]; // Number for XOR operation
            int m = queries[i][1]; // Maximum allowed value
            int idx = i; // Original index of the query
            qrs.push_back({{m, xi}, idx}); // Store as a pair
        }
        
        // Sort queries based on maximum value
        sort(qrs.begin(), qrs.end());
        vector<int> ans(q, 0); // Vector to hold results for each query
        int k = 0; // Index to track how many numbers are added to the Trie

        // Traverse through sorted queries
        for (int i = 0; i < q; i++) {
            int m = qrs[i].first.first; // Maximum value for the current query
            int x = qrs[i].first.second; // Number to maximize XOR with
            int ind = qrs[i].second; // Original index for the answer

            // Insert numbers into the Trie while they are less than or equal to m
            while (k < nums.size() && nums[k] <= m) {
                trie.insert(nums[k]); // Insert number into the Trie
                k++; // Move to the next number
            }

            // Find the maximum XOR or return -1 if no numbers are in the Trie
            if (k == 0) ans[ind] = -1; // If no numbers are added, return -1
            else ans[ind] = trie.findMaxXOR(x); // Find max XOR with x
        }
        return ans; // Return the final answers for all queries
    }
};
