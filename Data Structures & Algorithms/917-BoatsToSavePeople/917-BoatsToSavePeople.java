// Last updated: 07/07/2026, 09:09:15
class Solution {
    public int numRescueBoats(int[] nums, int limit) {
        //1,2,2,3
        Arrays.sort(nums);
        int low = 0;
        int high = nums.length - 1;
        int res = 0;
        while(low <= high){
            if(nums[low] + nums[high] <= limit){
                low++;
                high--;
            }else{
                high--;
            }
            res++;
        }
        return res;
    }
}