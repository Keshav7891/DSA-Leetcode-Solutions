// Last updated: 31/07/2026, 09:30:24
1class Solution {
2public:
3    int largestPerimeter(vector<int>& nums) {
4
5        if(nums.size() < 3){
6            return 0;
7        }
8        sort(nums.begin(), nums.end(), greater<int>());
9        
10        for(int i=2;i<nums.size();i++){
11            if(nums[i] + nums[i-1] > nums[i-2]){
12                return nums[i] + nums[i-1] + nums[i-2];
13            }
14        }
15
16        return 0;
17    }
18};