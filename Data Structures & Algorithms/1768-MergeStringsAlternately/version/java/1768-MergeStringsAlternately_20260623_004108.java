// Last updated: 23/06/2026, 00:41:08
1class Solution {
2    public String mergeAlternately(String word1, String word2) {
3        String res = "";
4        int i = 0;
5        int j = 0;
6        while(i!=word1.length() || j!=word2.length()){
7            if(i!=word1.length()){
8                res = res + word1.charAt(i);
9                i++;
10            }
11            if(j!=word2.length()){
12                res = res + word2.charAt(j);
13                j++;
14            }
15        }
16        return res;
17    }
18}