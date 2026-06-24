// Last updated: 25/06/2026, 00:42:09
1class Solution {
2    public int trap(int[] height) {
3      int res = 0;
4
5      int[] lmax = new int[height.length];
6      int[] rmax = new int[height.length];
7
8      lmax[0] = height[0];
9      rmax[height.length-1] = height[height.length-1];
10
11      for(int i=1;i<height.length;i++){
12        lmax[i] = Math.max(lmax[i-1], height[i]);
13      }
14
15      for(int i=height.length-2;i>=0;i--){
16        rmax[i] = Math.max(rmax[i+1], height[i]);
17      }
18
19      for(int i=1;i<height.length-1;i++){
20        res = res + Math.min(lmax[i], rmax[i]) - height[i];
21      }
22
23      return res;
24
25    }
26}