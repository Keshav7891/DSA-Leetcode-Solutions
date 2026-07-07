// Last updated: 07/07/2026, 09:10:18
class Solution {
    public int trap(int[] height) {
      int res = 0;

      int[] lmax = new int[height.length];
      int[] rmax = new int[height.length];

      lmax[0] = height[0];
      rmax[height.length-1] = height[height.length-1];

      for(int i=1;i<height.length;i++){
        lmax[i] = Math.max(lmax[i-1], height[i]);
      }

      for(int i=height.length-2;i>=0;i--){
        rmax[i] = Math.max(rmax[i+1], height[i]);
      }

      for(int i=1;i<height.length-1;i++){
        res = res + Math.min(lmax[i], rmax[i]) - height[i];
      }

      return res;
    }
}