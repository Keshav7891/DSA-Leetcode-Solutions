// Last updated: 07/07/2026, 09:09:26
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
    public int sumOfLeftLeaves(TreeNode root) {
        if(root.left == null && root.right == null){
            return 0;
        }
        Queue<TreeNode> q = new ArrayDeque<>();
        q.offer(root);
        int result = 0;
        while(q.isEmpty() == false){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode curr = q.poll();
                if(curr.left != null){
                    if (curr.left.left == null && curr.left.right == null) {
                        result += curr.left.val;
                    } else {
                        q.offer(curr.left);
                    }
                }
                if(curr.right != null){
                    q.offer(curr.right);
                }
            }
        }    
        return result;
    }
}