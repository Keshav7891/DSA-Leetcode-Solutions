// Last updated: 21/06/2026, 14:14:57
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
17    TreeNode help(TreeNode root){
18        if(root == null){
19            return null;
20        }
21        TreeNode left = help(root.left);
22        TreeNode right = help(root.right);
23
24        TreeNode temp = root.right;
25        root.right = left;
26        root.left = temp;
27
28        return root;
29    }
30    public TreeNode invertTree(TreeNode root) {
31        return help(root);
32    }
33}