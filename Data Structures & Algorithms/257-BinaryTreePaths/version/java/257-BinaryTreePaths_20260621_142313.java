// Last updated: 21/06/2026, 14:23:13
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
18    void help(TreeNode root, String path, List<String> result){
19        if(root == null){
20            return;
21        }
22        if(root.left == null && root.right == null){
23            path = path + root.val;
24            result.add(path);
25        }
26
27        help(root.left, path + root.val + "->", result);
28        help(root.right, path + root.val + "->", result);
29    }
30
31    public List<String> binaryTreePaths(TreeNode root) {
32        List<String> result = new ArrayList<>();
33        help(root, "", result);
34        return result;
35    }
36}