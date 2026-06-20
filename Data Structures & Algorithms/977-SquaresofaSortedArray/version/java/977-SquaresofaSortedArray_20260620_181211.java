// Last updated: 20/06/2026, 18:12:11
1class Solution {
2    public int[] sortedSquares(int[] nums) {
3        int low = 0;
4        int high = nums.length - 1;
5        int[] res = new int[nums.length];
6
7        int k = nums.length - 1;
8
9        while (low <= high) {
10            int left = nums[low] * nums[low];
11            int right = nums[high] * nums[high];
12
13            if (left > right) {
14                res[k--] = left;
15                low++;
16            } else {
17                res[k--] = right;
18                high--;
19            }
20        }
21
22        return res;
23    }
24}