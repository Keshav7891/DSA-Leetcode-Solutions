// Last updated: 21/06/2026, 13:20:11
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
23
24        if (root.left == null) {
25            return rightHeight + 1;
26        }
27
28        if (root.right == null) {
29            return leftHeight + 1;
30        }
31
32        return Math.max(leftHeight, rightHeight) + 1;
33    }
34
35    public int maxDepth(TreeNode root) {
36        return help(root);
37    }
38}