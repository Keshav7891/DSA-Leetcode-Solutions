// Last updated: 21/06/2026, 13:11:30
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
17
18    boolean result = true;
19
20    int help(TreeNode root){
21        if(root == null){
22            return 0;
23        }
24
25        int left = help(root.left);
26        int right = help(root.right);
27
28        if(Math.abs(left - right) > 1){
29            result = false;
30        }
31
32        return Math.max(left, right) + 1;
33
34    }
35
36    public boolean isBalanced(TreeNode root) {
37        help(root);
38        return result;
39    }
40}