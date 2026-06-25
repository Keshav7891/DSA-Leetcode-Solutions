// Last updated: 26/06/2026, 05:24:31
1class Solution {
2    public boolean containsNearbyDuplicate(int[] nums, int k) {
3        Map<Integer, Integer> m = new HashMap<>();
4
5        for (int i = 0; i < nums.length; i++) {
6            if (m.containsKey(nums[i]) && i - m.get(nums[i]) <= k) {
7                return true;
8            }
9            m.put(nums[i], i);
10        }
11
12        return false;
13    }
14}