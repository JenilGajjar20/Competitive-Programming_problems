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
public:
    bool isBST(TreeNode* root, long min, long max){
        
        if(root == NULL) return true;

        if(root->val<max && root->val>min && isBST(root->left, min, root->val) && isBST(root->right, root->val, max))         
        return true;

        else return false;
    }
    bool isValidBST(TreeNode* root) {
        if(root->left == NULL && root->right == NULL) return true; 

        return isBST(root, -2147483649, 2147483648);
    }
};
