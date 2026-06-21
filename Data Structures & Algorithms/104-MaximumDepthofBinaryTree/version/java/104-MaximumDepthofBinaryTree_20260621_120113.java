// Last updated: 21/06/2026, 12:01:13
1/**
2 * Definition for a binary tree node.
3 * public class TreeNode {
4 *     int val;
5 *     TreeNode left;
6 *     TreeNode right;
7 *     TreeNode() {}
8 *     TreeNode(int val) { this.val = val; }
9 *     TreeNode(int val, TreeNode left, TreeNode right) {
10 *         this.val = val;
11 *         this.left = left;
12 *         this.right = right;
13 *     }
14 * }
15 */
16class Solution {
17    int help(TreeNode root){
18        if(root == null){
19            return 0;
20        }
21        int leftHeight = help(root.left);
22        int rightHeight = help(root.right);
23        return Math.max(leftHeight, rightHeight) + 1;
24    }
25
26    public int maxDepth(TreeNode root) {
27        return help(root);
28    }
29}