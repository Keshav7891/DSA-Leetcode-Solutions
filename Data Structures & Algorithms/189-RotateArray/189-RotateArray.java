// Last updated: 07/07/2026, 09:09:44
class Solution {
    void help(int[] nums, int low, int high){
        while(low < high){
            int temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
        }
    }

    public void rotate(int[] nums, int k) {
        int n = nums.length;
        k %= n;

        help(nums, 0, nums.length-1);
        help(nums, 0, k-1);
        help(nums, k, nums.length-1);
    }
}