// Last updated: 24/06/2026, 14:52:34
1class Solution {
2	int help(int index, int[] nums, int[] dp){
3		if(index >= nums.length){
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
14		op1 = 0 + help(index + 1, nums, dp);
15		op2 = nums[index] + help(index + 2, nums, dp);  
16
17		return dp[index] = Math.max(op1, op2);
18	}
19    public int rob(int[] nums) {
20        int[] dp = new int[nums.length+1];
21        Arrays.fill(dp, -1);
22        return help(0, nums, dp);
23    }
24}