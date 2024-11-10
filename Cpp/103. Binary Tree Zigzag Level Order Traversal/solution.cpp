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
    /* In this we will traverse the tree in level order and in reverse level order
    And we will make bool variables that tells whetherwe have to store normally or
    in reverse order in a array.
    */
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight=1;
        int len,index;
        TreeNode* curr;
        while(!q.empty()){
            len=q.size();
            vector<int> temp(len);
            for(int i=0;i<len;i++){
                curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                // for normal or reverse insertion
                index=leftToRight?i:len-i-1;
                temp[index]=curr->val;
            }
            leftToRight=!leftToRight;
            res.push_back(temp);
        }
        return res;
    }
};