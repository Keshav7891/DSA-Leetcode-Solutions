// Last updated: 28/07/2026, 09:36:12
1class Solution {
2public:
3    int trap(vector<int>& nums) {
4      /*
5        height   : 0 1 0 2 1 0 1 3 2 1 2 1
6        leftMax  : 0 1 1 2 2 2 2 3 3 3 3 3
7        rightMax : 3 3 3 3 3 3 3 3 2 2 2 1
8        min(L,R) : 0 1 1 2 2 2 2 3 2 2 2 1
9        height   : 0 1 0 2 1 0 1 3 2 1 2 1
10        water    : 0 0 1 0 1 2 1 0 0 1 0 0    
11      */  
12      vector<int>lmax(nums.size());
13      lmax[0] = nums[0];
14
15      vector<int>rmax(nums.size());
16      rmax[nums.size()-1] = nums[nums.size()-1];
17
18      for(int i=1;i<nums.size()-1;i++){
19        lmax[i] = max(lmax[i-1], nums[i]);
20      }
21
22      for(int i=nums.size()-2;i<nums.size()-1;i--){
23        rmax[i] = max(rmax[i+1], nums[i]);
24      }
25
26      int res = 0;
27      for(int i=1;i<nums.size()-1;i++){
28        int maxPossibleHeight = min(lmax[i], rmax[i]);
29        if(maxPossibleHeight > nums[i]){
30            res = res + maxPossibleHeight - nums[i];
31        }
32      }
33
34      return res;
35    }
36};