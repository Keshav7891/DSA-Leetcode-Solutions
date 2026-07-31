// Last updated: 31/07/2026, 08:47:38
1class Solution {
2public:
3    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
4        vector<int>res;
5        int currRes = 0;
6
7        //calculate current even sum
8        for(auto key : nums){
9            if(key % 2 == 0){
10                currRes = currRes + key;
11            }
12        }
13
14        //process queries
15        for(auto key : queries){
16            int index = key[1];
17            int val = key[0];
18
19            //if my current index to operate is even, remove from result
20            if(nums[index]%2==0){
21                currRes = currRes - nums[index];
22            }
23
24            //operate on it
25            nums[index] = nums[index] + val;
26
27            //add it back if it is still even
28            if(nums[index]%2==0){
29                currRes = currRes + nums[index];
30            }
31
32            res.push_back(currRes);
33        }
34
35        return res;
36    }
37};
38