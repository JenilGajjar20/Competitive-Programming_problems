/*
 * To run this program in a local environment the required libraries must be imported
 * import java.util.List;
 * import java.util.Collections;
 * import java.util.ArrayList;
 * 
 * If this code is executed in an online coding environment such as Leetcode,
 * then there is no need to import the libraries.
 * 
 * Problem Statement no. 315 in Leetcode
 */
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
class solution 
{
    // Defining a TreeNode class to represent the nodes in the binary search tree (BST)

    public class TreeNode
    {
        int val;            // Value of the node
        int count = 1;      // Number of nodes in the subtree rooted at this node
        TreeNode left;      // Left child of the node
        TreeNode right;     // Right child of the node
            
        // Constructor to create a new TreeNode with a given value
        TreeNode(int val)
        {
            this.val = val;
        }
    }
    
    // Function to insert a value into the BST and to return the count of smaller values

    public int insert_BST(TreeNode root, int val)
    {
        int sum = 0;

        // Looping until a suitable place is found for the new value

        while(true)
        {
            if(val <= root.val)
            {
                root.count++;           // Incrementing the count of nodes in the left subtree
                if(root.left != null)
                    root = root.left;   // Moving to the left child
                
                else
                    {
                        root.left = new TreeNode(val); // Creating a new left child with the value
                        break;
                    }
            }
            else
            {
                sum+= root.count;       // Adding the count of nodes in the left subtree to the sum
                
                if(root.right != null)
                    root = root.right; // Moving to the right child
                
                else
                    {
                        root.right = new TreeNode(val); // Creating a new right child with the value
                        break;
                    }
            }
        }
        return sum;         // Returning the sum of smaller values
    }

    // Function to count smaller values for each element in the input array

    public List<Integer> countSmaller(int[] nums) 
    {
        List<Integer> ans = new ArrayList<>();

        // Checking for edge cases

        if(nums == null || nums.length ==0)
            return ans;

        // Creating a TreeNode to represent the last element in the array

        TreeNode root = new TreeNode(nums[nums.length-1]);
        ans.add(0);             // The last element has no smaller values

        // Traversing the input array in reverse order and insert elements into the BST

        for(int i = nums.length-2; i >=0; i--)
        {
            int count = insert_BST(root, nums[i]);
            ans.add(count);         // Adding the count of smaller values to the result list
        }
        Collections.reverse(ans);   // Reversing the list to match the original order
        return ans;                 // Returning the list of counts of smaller values for each element        
    }

    // main function is not required in coding platforms
    // It is required to run in local machines
    public static void main(String[] args) 
    {
        solution solution = new solution();
    
        // Test case: an example input array

        int[] nums = {5, 2, 6, 1};
        List<Integer> result = solution.countSmaller(nums);
    
        // Displaying the results
        
        System.out.println("Counts of smaller elements to the right of each element:");
        for (int count : result) {
                System.out.print(count + " ");
        }
    }
}