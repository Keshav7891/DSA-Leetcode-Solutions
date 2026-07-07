// Last updated: 07/07/2026, 09:09:34
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
    TreeNode help(TreeNode root){
        if(root == null){
            return null;
        }
        TreeNode left = help(root.left);
        TreeNode right = help(root.right);

        TreeNode temp = root.right;
        root.right = left;
        root.left = temp;

        return root;
    }
    public TreeNode invertTree(TreeNode root) {
        return help(root);
    }
}