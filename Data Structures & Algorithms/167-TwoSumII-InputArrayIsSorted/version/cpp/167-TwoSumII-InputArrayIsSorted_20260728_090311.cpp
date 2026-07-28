// Last updated: 28/07/2026, 09:03:11
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        int low = 0;
5        int high = nums.size() - 1;
6
7        while(low <= high){
8            if(nums[low] + nums[high] == target){
9                return {low + 1, high + 1};
10            }else if(nums[low] + nums[high] > target){
11                high--;
12            }else{
13                low++;
14            }
15        }
16
17        return {-1, -1};
18    }
19};