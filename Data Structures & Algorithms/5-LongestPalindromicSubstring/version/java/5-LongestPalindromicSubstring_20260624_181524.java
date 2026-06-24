// Last updated: 24/06/2026, 18:15:24
1class Solution {
2    public String longestPalindrome(String s) {
3        int [][] dp = new int[s.length()+1][s.length()+1];
4
5        int start = -1;
6        int end = -1;
7        int len = Integer.MIN_VALUE;
8
9        for(int g=0;g<s.length();g++){
10            for (int i = 0, j = g; j < s.length(); i++, j++) {
11                if(i == j){
12                    dp[i][j] = 1;
13                }else if(g == 1){
14                    dp[i][j] = s.charAt(i) == s.charAt(j) ? 1 : 0;
15                }else{
16                    if(dp[i+1][j-1] == 1 && s.charAt(i) == s.charAt(j)){
17                        dp[i][j] = 1;
18                    }else{
19                        dp[i][j] = 0;
20                    }
21                }
22
23                if(dp[i][j] == 1){
24                    int currLen = j - i + 1;
25                    if(currLen > len){
26                        len = currLen;
27                        start = i;
28                        end = j;
29                    }
30                }
31            }
32        }
33
34        System.out.println("start : " + start + " end " + end);
35
36        return s.substring(start, end + 1);
37
38    }
39}