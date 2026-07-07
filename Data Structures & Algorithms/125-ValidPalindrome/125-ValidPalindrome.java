// Last updated: 07/07/2026, 09:09:53
class Solution {
    public boolean isPalindrome(String s) {
       String res = "";
       for(int i=0;i<s.length();i++){
        if((s.charAt(i) >= 'a' && s.charAt(i) <= 'z') || (s.charAt(i) >= 'A' && s.charAt(i) <= 'Z') || (s.charAt(i) >= '0' && s.charAt(i) <= '9')){
            res = res + s.charAt(i);
        } 
       } 
       int i = 0;
       int j = res.length() - 1;
       while(i<=j){
        if(Character.toLowerCase(res.charAt(i)) != Character.toLowerCase(res.charAt(j))){
            return false;
        }
        i++;
        j--;
       }
       return true;
    }
}