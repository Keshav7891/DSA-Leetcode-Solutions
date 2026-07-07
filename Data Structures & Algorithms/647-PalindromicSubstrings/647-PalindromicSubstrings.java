// Last updated: 07/07/2026, 09:09:21
class Solution {
    public int countSubstrings(String s) {
        int [][] dp = new int[s.length()+1][s.length()+1];

        int res = 0;

        for(int g=0;g<s.length();g++){
            for (int i = 0, j = g; j < s.length(); i++, j++) {
                if(i == j){
                    dp[i][j] = 1;
                }else if(g == 1){
                    dp[i][j] = s.charAt(i) == s.charAt(j) ? 1 : 0;
                }else{
                    if(dp[i+1][j-1] == 1 && s.charAt(i) == s.charAt(j)){
                        dp[i][j] = 1;
                    }else{
                        dp[i][j] = 0;
                    }
                }

                res = res + dp[i][j];
            }
        }

        return res;
    }
}