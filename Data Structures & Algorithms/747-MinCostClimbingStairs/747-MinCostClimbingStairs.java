// Last updated: 07/07/2026, 09:09:18
class Solution {
	int help(int index, int[] cost, int[] dp){
		if(index == cost.length){
			return 0;
		}

		if(dp[index] != -1){
			return dp[index];
		}

		int op1 = Integer.MAX_VALUE;
		int op2 = Integer.MAX_VALUE;

		op1 = cost[index] + help(index+1, cost, dp);
		if(index + 2 <= cost.length){
			op2 = cost[index] + help(index+2, cost, dp);
		}

		return dp[index] = Math.min(op1, op2);
	}
    public int minCostClimbingStairs(int[] cost) {
    	 int[] dp = new int[cost.length+1];
    	 Arrays.fill(dp, -1);
         return Math.min(help(0, cost, dp), help(1, cost, dp));
    }
}