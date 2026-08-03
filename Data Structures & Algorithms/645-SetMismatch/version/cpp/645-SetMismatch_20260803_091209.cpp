// Last updated: 03/08/2026, 09:12:09
1class Solution {
2public:
3    vector<int> findErrorNums(vector<int>& nums) {
4        unordered_map<int,int>m;
5        for(auto key : nums){
6            m[key]++;
7        }
8
9        int absent = -1;
10        int twice = -1;
11        
12        for(int i=1;i<=nums.size();i++){
13            if(m.find(i) == m.end()){
14                absent = i;
15            }
16            if(m[i] > 1){
17                twice = i;
18            }
19        }
20
21        return {twice, absent};
22    }
23};