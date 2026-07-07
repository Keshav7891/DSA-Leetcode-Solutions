// Last updated: 07/07/2026, 09:09:35
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
    public int countNodes(TreeNode root) {
        if(root == null){
            return 0;
        }
        Queue<TreeNode> q = new ArrayDeque<>();
        q.offer(root);
        int result = 1;
        while(q.isEmpty() == false){
            int size = q.size();
            for(int i=0;i<q.size();i++){
                TreeNode curr = q.poll();
                if(curr.left == null){
                    break;
                }
                if(curr.left != null){
                    result++;
                    q.offer(curr.left);
                }
                if(curr.right != null){
                    result++;
                    q.offer(curr.right);
                }
            }
        }
        return result;
    }
}