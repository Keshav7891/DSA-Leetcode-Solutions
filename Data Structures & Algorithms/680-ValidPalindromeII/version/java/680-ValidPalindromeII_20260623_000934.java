// Last updated: 23/06/2026, 00:09:34
1class Solution {
2
3    public boolean isPalindrome(String res, int i, int j) {
4       while(i<j){
5        if(Character.toLowerCase(res.charAt(i)) != Character.toLowerCase(res.charAt(j))){
6            return false;
7        }
8        i++;
9        j--;
10       }
11       return true;
12    }
13
14    public boolean validPalindrome(String s) {
15        int i = 0;
16        int j = s.length() - 1;
17        while(i<j){
18            if(s.charAt(i) != s.charAt(j)){
19                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
20            }
21            i++;
22            j--;
23        }
24        return true;
25    }
26}