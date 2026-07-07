// Last updated: 07/07/2026, 09:09:08
class Solution {

    int help(int n, int[] dp) {
        if (n == 0) {
            return 0;
        }

        if (n == 1 || n == 2) {
            return 1;
        }

        if(dp[n] != -1){
        	return dp[n];
        }

        int p1 = help(n - 1, dp);
        int p2 = help(n - 2, dp);
        int p3 = help(n - 3, dp);

        return dp[n] = p1 + p2 + p3;
    }

    public int tribonacci(int n) {
    	int[] dp = new int[n+1];
    	Arrays.fill(dp, -1);
        return help(n, dp);
    }
}