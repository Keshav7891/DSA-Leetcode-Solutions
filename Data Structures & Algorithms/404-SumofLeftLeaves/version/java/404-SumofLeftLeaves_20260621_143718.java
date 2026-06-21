// Last updated: 21/06/2026, 14:37:18
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
17    public int sumOfLeftLeaves(TreeNode root) {
18        if(root.left == null && root.right == null){
19            return 0;
20        }
21        Queue<TreeNode> q = new ArrayDeque<>();
22        q.offer(root);
23        int result = 0;
24        while(q.isEmpty() == false){
25            int size = q.size();
26            for(int i=0;i<size;i++){
27                TreeNode curr = q.poll();
28                if(curr.left != null){
29                    if (curr.left.left == null && curr.left.right == null) {
30                        result += curr.left.val;
31                    } else {
32                        q.offer(curr.left);
33                    }
34                }
35                if(curr.right != null){
36                    q.offer(curr.right);
37                }
38            }
39        }    
40        return result;
41    }
42}