// Last updated: 07/07/2026, 09:09:11
class Solution {
    public int[] sortedSquares(int[] nums) {
        int low = 0;
        int high = nums.length - 1;
        int[] res = new int[nums.length];

        int k = nums.length - 1;

        while (low <= high) {
            int left = nums[low] * nums[low];
            int right = nums[high] * nums[high];

            if (left > right) {
                res[k--] = left;
                low++;
            } else {
                res[k--] = right;
                high--;
            }
        }

        return res;
    }
}