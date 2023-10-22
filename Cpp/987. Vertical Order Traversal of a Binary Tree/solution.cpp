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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        map<int,map<int,multiset<int>>> mp;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        int len;
        pair<TreeNode*,pair<int,int>>  curr;
        TreeNode* node;
        int hd,lv;
        while(!q.empty()){
            curr=q.front();
            q.pop();
            node=curr.first;
            hd=curr.second.first;
            lv=curr.second.second;
            mp[hd][lv].insert(node->val);
            if(node->left)
                q.push({node->left,{hd-1,lv+1}});
            if(node->right)
                q.push({node->right,{hd+1,lv+1}});
        }
        for(auto i:mp){
            vector<int>temp;
            for(auto j:i.second)
                for(auto k:j.second)
                    temp.push_back(k);
            res.push_back(temp);
        }
        return res;
    }
};