// Last updated: 22/06/2026, 22:38:29
1class Solution {
2    public void reverseString(char[] s) {
3        int i = 0;
4        int j = s.length - 1;
5        while(i<j){
6            char temp = s[i];
7            s[i] = s[j];
8            s[j] = temp;
9            i++;
10            j--;
11        }
12    }
13}