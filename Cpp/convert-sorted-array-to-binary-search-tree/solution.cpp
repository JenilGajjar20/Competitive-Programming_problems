#include <iostream>
#include <vector>
using namespace std;

// Definiton for a Binary tree node
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }

private:
    TreeNode *sortedArrayToBST(vector<int> &nums, int left, int right)
    {
        // Check if the left is greater than right
        if (left > right)
            return nullptr;

        // Finding the middle element
        int mid = (left + right) / 2;

        // Create a root node
        TreeNode *root = new TreeNode(nums[mid]);

        // Recursively build the left and right subtree
        root->left = sortedArrayToBST(nums, left, mid - 1);
        root->right = sortedArrayToBST(nums, mid + 1, right);

        return root;
    }
};

// Helper function to print the BST
void inOrderTraversal(TreeNode *root)
{
    if (root == nullptr)
        return;

    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

int main()
{
    int n;
    cout << "Enter size of nums: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> nums[i];
    }

    Solution solution;
    TreeNode *root = solution.sortedArrayToBST(nums);

    inOrderTraversal(root);

    return 0;
}