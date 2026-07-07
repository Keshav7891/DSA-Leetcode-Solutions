// Last updated: 07/07/2026, 09:09:38
class Solution {
	int help(int index, int end, int[] nums, int[] dp){
		if(index > end){
			return 0;
		}

		if(dp[index] != -1){
			return dp[index];
		}

		int op1 = Integer.MIN_VALUE;
		int op2 = Integer.MIN_VALUE;

		op1 = 0 + help(index + 1, end, nums, dp);
		op2 = nums[index] + help(index + 2, end, nums, dp);  

		return dp[index] = Math.max(op1, op2);
	}
    public int rob(int[] nums) {

        if (nums.length == 1) {
            return nums[0];
        }

        int[] dp = new int[nums.length+1];
        Arrays.fill(dp, -1);
        int op1 = help(0, nums.length - 2, nums, dp);
        Arrays.fill(dp, -1);
        int op2 = help(1, nums.length - 1, nums, dp);
        return Math.max(op1, op2);
    }
}