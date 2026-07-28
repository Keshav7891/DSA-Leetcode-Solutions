// Last updated: 28/07/2026, 09:47:20
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int currDiff = INT_MAX;
6        int res = INT_MAX;
7        for(int i=0;i<nums.size();i++){
8            int low = i+1;
9            int high = nums.size()-1;
10            while(low < high){
11                int sum = nums[i] + nums[low] + nums[high];
12                if(abs(target - sum) < currDiff){
13                    res = sum;
14                    currDiff = abs(target - sum);
15                }
16
17                if(sum >= target){
18                    high--;
19                }else{
20                    low++;
21                }
22            }
23        }
24
25        return res;
26    }
27};