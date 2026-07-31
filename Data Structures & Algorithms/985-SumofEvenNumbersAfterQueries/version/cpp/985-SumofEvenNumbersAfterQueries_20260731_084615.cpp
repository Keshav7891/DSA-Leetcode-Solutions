// Last updated: 31/07/2026, 08:46:15
1class Solution {
2public:
3    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
4        vector<int>res;
5        int currRes = 0;
6        for(auto key : nums){
7            if(key % 2 == 0){
8                currRes = currRes + key;
9            }
10        }
11
12        for(auto key : queries){
13            int index = key[1];
14            int val = key[0];
15
16            if(nums[index]%2==0){
17                currRes = currRes - nums[index];
18            }
19
20            nums[index] = nums[index] + val;
21
22            if(nums[index]%2==0){
23                currRes = currRes + nums[index];
24            }
25
26            res.push_back(currRes);
27        }
28
29        return res;
30    }
31};
32