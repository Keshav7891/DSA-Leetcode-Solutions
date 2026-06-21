// Last updated: 21/06/2026, 12:10:14
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
17    TreeNode help(int[] nums, int low, int high){
18        if(low>high){
19            return null;
20        }
21
22        int mid = low + (high - low)/2;
23        TreeNode root = new TreeNode(nums[mid]);
24
25        root.left = help(nums, low, mid - 1);
26        root.right = help(nums, mid + 1, high);
27        return root;
28    }
29
30    public TreeNode sortedArrayToBST(int[] nums) {
31        return help(nums, 0, nums.length - 1);
32    }
33}