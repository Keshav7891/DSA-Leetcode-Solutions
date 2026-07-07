// Last updated: 07/07/2026, 09:10:12
class Solution {
    public int maxArea(int[] height) {
        int i = 0;
        int j = height.length - 1;
        int res = Integer.MIN_VALUE;
        while(i<j){

            int len = j - i;
            int water = Math.min(height[i], height[j]) * len;
            res = Math.max(res,water);

            if(height[i] <= height[j]){
                i++;
            }else{
                j--;
            }
        }
        return res;
    }
}