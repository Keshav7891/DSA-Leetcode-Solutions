// Last updated: 23/06/2026, 06:09:19
1class Solution {
2    public int numRescueBoats(int[] nums, int limit) {
3        //1,2,2,3
4        Arrays.sort(nums);
5        int low = 0;
6        int high = nums.length - 1;
7        int res = 0;
8        while(low <= high){
9            if(nums[low] + nums[high] <= limit){
10                low++;
11                high--;
12            }else{
13                high--;
14            }
15            res++;
16        }
17        return res;
18    }
19}