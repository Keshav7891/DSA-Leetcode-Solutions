// Last updated: 24/06/2026, 16:35:53
1class Solution {
2	int help(int index, int end, int[] nums, int[] dp){
3		if(index > end){
4			return 0;
5		}
6
7		if(dp[index] != -1){
8			return dp[index];
9		}
10
11		int op1 = Integer.MIN_VALUE;
12		int op2 = Integer.MIN_VALUE;
13
14		op1 = 0 + help(index + 1, end, nums, dp);
15		op2 = nums[index] + help(index + 2, end, nums, dp);  
16
17		return dp[index] = Math.max(op1, op2);
18	}
19    public int rob(int[] nums) {
20
21        if (nums.length == 1) {
22            return nums[0];
23        }
24
25        int[] dp = new int[nums.length+1];
26        Arrays.fill(dp, -1);
27        int op1 = help(0, nums.length - 2, nums, dp);
28        Arrays.fill(dp, -1);
29        int op2 = help(1, nums.length - 1, nums, dp);
30        return Math.max(op1, op2);
31    }
32}