// Last updated: 20/06/2026, 17:55:59
1class Solution {
2    public int maxArea(int[] height) {
3        int i = 0;
4        int j = height.length - 1;
5        int res = Integer.MIN_VALUE;
6        while(i<j){
7
8            int len = j - i;
9            int water = Math.min(height[i], height[j]) * len;
10            res = Math.max(res,water);
11
12            if(height[i] <= height[j]){
13                i++;
14            }else{
15                j--;
16            }
17        }
18        return res;
19    }
20}