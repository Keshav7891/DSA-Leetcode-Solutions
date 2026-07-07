// Last updated: 07/07/2026, 09:10:14
class Solution {
    public String longestPalindrome(String s) {
        int [][] dp = new int[s.length()+1][s.length()+1];

        int start = -1;
        int end = -1;
        int len = Integer.MIN_VALUE;

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

                if(dp[i][j] == 1){
                    int currLen = j - i + 1;
                    if(currLen > len){
                        len = currLen;
                        start = i;
                        end = j;
                    }
                }
            }
        }

        return s.substring(start, end + 1);

    }
}