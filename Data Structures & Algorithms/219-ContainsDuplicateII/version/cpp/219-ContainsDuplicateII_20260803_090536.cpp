// Last updated: 03/08/2026, 09:05:36
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int,int>m;
5        for(int i=0;i<nums.size();i++){
6            if(m.find(nums[i]) != m.end() && abs(i-m[nums[i]]) <= k){
7                return true;
8            }
9            m[nums[i]] = i;
10        }
11        return false;
12    }
13};