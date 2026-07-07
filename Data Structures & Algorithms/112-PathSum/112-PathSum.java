// Last updated: 07/07/2026, 09:09:54
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
    void help(TreeNode root, Boolean[] result, int currSum, int targetSum){
        if(root==null){
            return;
        }

        currSum = currSum + root.val;

        if(root.left == null && root.right == null){
            if(currSum == targetSum){
                result[0] = true;
            }
        }

        help(root.left, result, currSum, targetSum);
        help(root.right, result, currSum, targetSum);
    }

    public boolean hasPathSum(TreeNode root, int targetSum) {
        Boolean[] result = {false};
        help(root, result, 0, targetSum);
        return result[0];
    }
}