// Last updated: 03/08/2026, 10:38:51
1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4
5        if(nums.size() < 2){
6            return false;
7        }
8
9        unordered_map<int,int>m;
10        m[0] = -1;
11
12        int currSum = 0;
13        for(int i=0;i<nums.size();i++){
14          currSum = currSum + nums[i];
15          int rem = currSum % k;
16          if(m.find(rem) != m.end()){
17            if (i - m[rem] >= 2) {
18                return true;
19            }
20          }else{
21            m[rem] = i;
22          }
23        }
24
25        return false;
26    }
27};