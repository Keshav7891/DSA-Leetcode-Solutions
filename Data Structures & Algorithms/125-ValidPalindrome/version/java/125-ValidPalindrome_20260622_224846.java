// Last updated: 22/06/2026, 22:48:46
1class Solution {
2    public boolean isPalindrome(String s) {
3       String res = "";
4       for(int i=0;i<s.length();i++){
5        if((s.charAt(i) >= 'a' && s.charAt(i) <= 'z') || (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') || (s.charAt(i) >= '0' && s.charAt(i) <= '9')){
6            res = res + s.charAt(i);
7        } 
8       } 
9       int i = 0;
10       int j = res.length() - 1;
11       while(i<=j){
12        if(Character.toLowerCase(res.charAt(i)) != Character.toLowerCase(res.charAt(j))){
13            return false;
14        }
15        i++;
16        j--;
17       }
18       return true;
19    }
20}