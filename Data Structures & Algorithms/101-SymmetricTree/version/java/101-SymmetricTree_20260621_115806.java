// Last updated: 21/06/2026, 11:58:06
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
18    boolean help(TreeNode root1, TreeNode root2){
19        if(root1 == null && root2 == null){
20            return true;
21        }
22
23        if(root1 != null && root2 == null){
24            return false;
25        }else if(root1 == null && root2 != null){
26            return false;
27        }else if(root1.val != root2.val){
28            return false;
29        }
30
31        boolean left = help(root1.left, root2.right);
32        boolean right = help(root1.right, root2.left);
33
34        return left && right;
35    }
36
37    public boolean isSymmetric(TreeNode root) {
38        return help(root.left, root.right);
39    }
40}