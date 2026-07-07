// Last updated: 07/07/2026, 09:09:59
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
    int help(TreeNode root){
        if(root == null){
            return 0;
        }
        int leftHeight = help(root.left);
        int rightHeight = help(root.right);

        if (root.left == null) {
            return rightHeight + 1;
        }

        if (root.right == null) {
            return leftHeight + 1;
        }

        return Math.max(leftHeight, rightHeight) + 1;
    }

    public int maxDepth(TreeNode root) {
        return help(root);
    }
}