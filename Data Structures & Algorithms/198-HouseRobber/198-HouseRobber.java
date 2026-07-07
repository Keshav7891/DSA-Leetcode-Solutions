// Last updated: 07/07/2026, 09:09:42
class Solution {
	int help(int index, int[] nums, int[] dp){
		if(index >= nums.length){
			return 0;
		}

		if(dp[index] != -1){
			return dp[index];
		}

		int op1 = Integer.MIN_VALUE;
		int op2 = Integer.MIN_VALUE;

		op1 = 0 + help(index + 1, nums, dp);
		op2 = nums[index] + help(index + 2, nums, dp);  

		return dp[index] = Math.max(op1, op2);
	}
    public int rob(int[] nums) {
        int[] dp = new int[nums.length+1];
        Arrays.fill(dp, -1);
        return help(0, nums, dp);
    }
}