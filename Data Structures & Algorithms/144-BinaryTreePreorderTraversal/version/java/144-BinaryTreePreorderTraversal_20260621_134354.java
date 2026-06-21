// Last updated: 21/06/2026, 13:43:54
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
18    void help(TreeNode root, List<Integer> res){
19        if(root == null){
20            return;
21        }
22
23        res.add(root.val);
24        help(root.left, res);
25        help(root.right, res);
26    }
27
28    public List<Integer> preorderTraversal(TreeNode root) {
29        List<Integer> res = new ArrayList();
30        help(root, res);
31        return res;
32    }
33}