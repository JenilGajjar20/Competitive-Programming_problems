#include<bits/stdc++.h>
using namespace std;

//structure of the TreeNode
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<int> sums; // vector that stores the sum values at each level
    deque<TreeNode*> dq; // deque used for bfs traversal of the tree

//bfs function that traverses the binary tree level wise and updates the desired value in each node
// this function uses the logic of (new_node_value = sum_of_val_at_current_level - sum_of_value_of_current_sibling(s)) 
    void bfs(TreeNode* root){
        dq.push_back(root);
        int lev = 0;

        while(!dq.empty()){
            int n = dq.size();
            while(n--){
                TreeNode* node = dq.front();
                int sibSum = 0;
                if(node->left){
                    sibSum += node->left->val; // left sibling value
                }
                if(node -> right){
                    sibSum += node->right->val; //right sibling value
                }
                if(node -> left){
                    node->left->val = sums[lev+1] - sibSum; //upating the left child node with new value
                    dq.push_back(node->left);
                }
                if(node->right){
                    node->right->val = sums[lev+1] - sibSum; // updating the right child node with desired value
                    dq.push_back(node->right);
                }
                dq.pop_front();
            }
            lev++; // increases or hops to the next level
        }
    }

// dfs traversal that helps us in calculating the sum of values at each level
    void dfs(TreeNode* root, int lev){
        if(root == nullptr) return;
        if(sums.size() > lev){
            sums[lev] += root->val; // if one of the values is already updated for current level
        }
        else{
            sums.push_back(root->val); //if this is the first value to be pushed inside the sums array for current level
        }
        dfs(root->left, lev+1); //now for the left child of the node
        dfs(root->right, lev+1); //dfs on the right child of the node
    }

    TreeNode* replaceValueInTree(TreeNode* root) {
        dfs(root, 0); //dfs function to update the sums vector with level wise total node value sum
        bfs(root);// bfs function that updates the value to thte desired output
        root->val = 0; //updating new root value externally 
        return root;
    }
};