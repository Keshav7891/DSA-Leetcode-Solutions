// Last updated: 29/06/2026, 21:16:36
1class Solution {
2    public int lengthOfLongestSubstring(String s) {
3        int res = 0;
4        Map<Character, Integer> m = new HashMap<>();
5        int j = 0;
6
7        for (int i = 0; i < s.length(); i++) {
8            m.put(s.charAt(i), m.getOrDefault(s.charAt(i), 0) + 1);
9
10            while (m.get(s.charAt(i)) > 1) {
11                char left = s.charAt(j);
12                m.put(left, m.get(left) - 1);
13                j++;
14            }
15
16            res = Math.max(res, i - j + 1);
17        }
18
19        return res;
20    }
21}