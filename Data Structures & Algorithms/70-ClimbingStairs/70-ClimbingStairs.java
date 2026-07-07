// Last updated: 07/07/2026, 09:10:05
class Solution {
	int help(int index, int n, int[] dp){
		if(index == n){
			return 1;
		}

		if(dp[index] != -1){
			return dp[index];
		}
		int res = 0;
		res = res + help(index+1, n, dp);
		if(index + 2 <= n){
			res = res + help(index+2, n, dp);
		}
		dp[index] = res;
		return dp[index];
	}

    public int climbStairs(int n) {
    	int[] dp = new int[n+1];
    	Arrays.fill(dp, -1);
        return help(0,n,dp);
    }
}