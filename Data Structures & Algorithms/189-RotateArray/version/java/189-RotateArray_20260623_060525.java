// Last updated: 23/06/2026, 06:05:25
1class Solution {
2    void help(int[] nums, int low, int high){
3        while(low < high){
4            int temp = nums[low];
5            nums[low] = nums[high];
6            nums[high] = temp;
7            low++;
8            high--;
9        }
10    }
11
12    public void rotate(int[] nums, int k) {
13        int n = nums.length;
14        k %= n;
15
16        help(nums, 0, nums.length-1);
17        help(nums, 0, k-1);
18        help(nums, k, nums.length-1);
19    }
20}