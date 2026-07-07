// Last updated: 07/07/2026, 09:10:02
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

    boolean help(TreeNode root1, TreeNode root2){
        if(root1 == null && root2 == null){
            return true;
        }

        if(root1 != null && root2 == null){
            return false;
        }else if(root1 == null && root2 != null){
            return false;
        }else if(root1.val != root2.val){
            return false;
        }

        boolean left = help(root1.left, root2.left);
        boolean right = help(root1.right, root2.right);

        return left && right;
    }

    public boolean isSameTree(TreeNode p, TreeNode q) {
        return help(p,q);
    }
}