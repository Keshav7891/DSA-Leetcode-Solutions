// Last updated: 07/07/2026, 09:09:56
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

    boolean result = true;

    int help(TreeNode root){
        if(root == null){
            return 0;
        }

        int left = help(root.left);
        int right = help(root.right);

        if(Math.abs(left - right) > 1){
            result = false;
        }

        return Math.max(left, right) + 1;

    }

    public boolean isBalanced(TreeNode root) {
        help(root);
        return result;
    }
}