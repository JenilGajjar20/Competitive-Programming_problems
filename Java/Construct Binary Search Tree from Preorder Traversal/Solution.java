/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode bstFromPreorder(int[] preorder) {
        if (preorder.length == 0) return null;
        return constructBST(preorder, 0, preorder.length - 1);
    }
    TreeNode constructBST(int[] arr, int start, int end) {
        if (start > end) return null;
        int mid = start;
        while (mid <= end && arr[mid] <= arr[start])
            mid++;
        TreeNode cur = new TreeNode(arr[start]);
        cur.left = constructBST(arr, start + 1, mid - 1);
        cur.right = constructBST(arr, mid, end);
        return cur;
    }
}

// Upper Bound method (Better)

class Solution {
    public TreeNode bstFromPreorder(int[] preorder) {
        if (preorder.length == 0) return null;
        AtomicInteger i = new AtomicInteger(0);
        return constructBST(preorder, i, Integer.MAX_VALUE);
    }
    TreeNode constructBST(int[] arr, AtomicInteger i, int ub) {
        if (i.get() == arr.length || arr[i.get()] > ub) return null;
        TreeNode cur = new TreeNode(arr[i.get()]);
        i.set(i.get() + 1);
        cur.left = constructBST(arr, i, cur.val);
        cur.right = constructBST(arr, i, ub);
        return cur;
    }
}
// Intution: in bst, left node is less than the root node, so UB = val of this node
// for the right node, val could be anything more that this val, so UB is same as the parents ub
// The index keeps increasing as the preorder is Root -> Left -> right so we can keep placing everything till arr[i] < ub but cur.left = (recursive call) comes back when this condition fails, ie, just when the arr val is more that the cur.val and from there the index keep increasing for the right recursive call