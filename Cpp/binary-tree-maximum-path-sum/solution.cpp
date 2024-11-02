/**
 * Approach:
 * This solution aims to find the maximum path sum in a binary tree where a path is defined as a sequence 
 * of nodes connected by edges, and any node can only appear once in the sequence. The path does not need 
 * to pass through the root. The maximum path sum considers both positive and negative node values.
 * 
 * Key steps:
 * 1. We use Depth-First Search (DFS) to explore each node, calculating the maximum path sums for all 
 *    possible paths that include each node.
 * 2. For each node, we compute:
 *    - The maximum path sum including the node and both of its subtrees.
 *    - The maximum path sum including the node and only one of its subtrees.
 *    - The value of the node itself, which might be the maximum if including any subtree leads to a lower sum.
 * 3. We maintain a global variable `ans` to keep track of the highest path sum found across all nodes.
 * 4. The recursive function `rundfs` returns the maximum path sum that can be obtained from the current 
 *    node when choosing only one subtree (left or right), ensuring that we keep valid paths without breaking them.
 *
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    int ans; // Stores the maximum path sum encountered during recursion

public:
    int maxPathSum(TreeNode* root) {
        ans = -1001; // Initialize ans to a minimum possible value within constraints
        if (root == nullptr) { return 0; } // Edge case for an empty tree
        rundfs(root); // Begin recursive traversal to calculate path sums
        return ans; // Return the maximum path sum found
    }

    int rundfs(TreeNode* root) {
        int leftsum = 0; // Maximum path sum from the left subtree
        int rightsum = 0; // Maximum path sum from the right subtree

        // Calculate maximum path sum for the left subtree if it exists
        if (root->left) {
            leftsum = rundfs(root->left);
        }

        // Calculate maximum path sum for the right subtree if it exists
        if (root->right) {
            rightsum = rundfs(root->right);
        }

        // Calculate all possible path sums including the current node
        int thissum1 = leftsum + rightsum + root->val; // Path including both subtrees and current node
        int thissum2 = rightsum + root->val;           // Path including right subtree and current node
        int thissum3 = leftsum + root->val;            // Path including left subtree and current node

        // Update ans with the maximum of the current computed paths
        ans = max(ans, thissum1);
        ans = max(ans, thissum2);
        ans = max(ans, thissum3);
        ans = max(ans, root->val); // Also consider the case of the current node alone

        // Return the maximum sum of paths that includes the current node and one subtree (left or right)
        return max(max(leftsum, rightsum) + root->val, root->val);
    }
};
