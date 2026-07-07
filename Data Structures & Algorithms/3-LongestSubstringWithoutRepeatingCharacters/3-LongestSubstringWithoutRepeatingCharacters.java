// Last updated: 07/07/2026, 09:10:15
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int res = 0;
        Map<Character, Integer> m = new HashMap<>();
        int j = 0;

        for (int i = 0; i < s.length(); i++) {
            m.put(s.charAt(i), m.getOrDefault(s.charAt(i), 0) + 1);

            while (m.get(s.charAt(i)) > 1) {
                char left = s.charAt(j);
                m.put(left, m.get(left) - 1);
                j++;
            }

            res = Math.max(res, i - j + 1);
        }

        return res;
    }
}