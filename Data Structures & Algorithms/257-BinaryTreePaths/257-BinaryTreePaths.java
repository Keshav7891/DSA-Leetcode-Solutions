// Last updated: 07/07/2026, 09:09:32
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

    void help(TreeNode root, String path, List<String> result){
        if(root == null){
            return;
        }
        if(root.left == null && root.right == null){
            path = path + root.val;
            result.add(path);
        }

        help(root.left, path + root.val + "->", result);
        help(root.right, path + root.val + "->", result);
    }

    public List<String> binaryTreePaths(TreeNode root) {
        List<String> result = new ArrayList<>();
        help(root, "", result);
        return result;
    }
}