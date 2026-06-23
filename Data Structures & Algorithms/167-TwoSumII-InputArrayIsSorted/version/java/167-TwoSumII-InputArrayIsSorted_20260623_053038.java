// Last updated: 23/06/2026, 05:30:38
1class Solution {
2    public int[] twoSum(int[] nums, int target) {
3        int i = 0;
4        int j = nums.length - 1;
5        while(i<j){
6            if(nums[i] + nums[j] == target){
7                return new int[]{i+1,j+1};
8            }else if(nums[i] + nums[j] > target){
9                j--;
10            }else{
11                i++;
12            }
13        }
14        return new int[]{};
15    }
16}