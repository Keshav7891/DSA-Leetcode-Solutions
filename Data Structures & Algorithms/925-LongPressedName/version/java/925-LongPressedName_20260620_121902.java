// Last updated: 20/06/2026, 12:19:02
1class Solution {
2    public boolean isLongPressedName(String name, String typed) {
3        int i = 0;
4        int j = 0;
5        while(i!=name.length() && j!=typed.length()){
6            if(name.charAt(i) == typed.charAt(j)){
7                i++;
8                j++;
9            }else{
10                if(i != 0 && name.charAt(i-1) == typed.charAt(j)){
11                    j++;
12                }else{
13                    return false;
14                }
15            }
16        }
17
18        if (i != name.length()) {
19            return false;
20        }
21
22        while (j < typed.length()) {
23            if (typed.charAt(j) != typed.charAt(j - 1)) {
24                return false;
25            }
26            j++;
27        }
28
29        return true;
30    }
31}