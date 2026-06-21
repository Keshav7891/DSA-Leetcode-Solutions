// Last updated: 21/06/2026, 13:39:19
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
17    void help(TreeNode root, Boolean[] result, int currSum, int targetSum){
18        if(root==null){
19            return;
20        }
21
22        currSum = currSum + root.val;
23
24        if(root.left == null && root.right == null){
25            if(currSum == targetSum){
26                result[0] = true;
27            }
28        }
29
30        help(root.left, result, currSum, targetSum);
31        help(root.right, result, currSum, targetSum);
32    }
33
34    public boolean hasPathSum(TreeNode root, int targetSum) {
35        Boolean[] result = {false};
36        help(root, result, 0, targetSum);
37        return result[0];
38    }
39}