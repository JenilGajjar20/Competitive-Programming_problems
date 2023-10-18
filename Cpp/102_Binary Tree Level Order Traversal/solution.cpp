/*
📌 102. Binary Tree Level Order Traversal
🔗 Link to the problem: https://leetcode.com/problems/binary-tree-level-order-traversal/

🧑‍💻 PROBLEM LEVEL:  Medium

📝 PROBLEM STATEMENT:
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

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

class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        // Initialize a vector to store the final levelOrder result:
        vector<vector<int>> result;

        // Return an empty result if the root node is nullptr (empty tree):
        if (!root)
            return result;

        // Initializing a double-ended queue to perform level-order traversal:
        deque<TreeNode *> queue;

        // Add the root node to the queue so that it's not empty initially:
        queue.push_back(root);

        // Do the traversal until the queue is empty (all levels processed):
        while (!queue.empty())
        {
            // Get the current number of nodes in the queue,
            // which represents the number of nodes at the current working level
            int queue_len = queue.size();

            // Initialize a vector to store the values of nodes at the current level:
            vector<int> level;

            // Itirate through each node at the current level:
            for (int i = 0; i < queue_len; i++)
            {
                // front node from the queue:
                TreeNode *current = queue.front();
                queue.pop_front();

                // Add the value of the current node to the level vector:
                level.push_back(current->val);

                // If there is a left child, add it to the queue:
                if (current->left)
                {
                    queue.push_back(current->left);
                }

                // If there is a right child, add it to the queue:
                if (current->right)
                {
                    queue.push_back(current->right);
                }
            }

            // Add the level (values of nodes at the current level) to the result vector:
            result.push_back(level);
        }

        // Return the result, which now contains the level-order traversal of the binary tree:
        return result;
    }
};
