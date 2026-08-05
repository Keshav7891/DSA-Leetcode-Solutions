// Last updated: 05/08/2026, 14:42:50
1class Solution {
2public:
3    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
4        sort(nums.begin(), nums.end());
5        vector<int>temp(nums.size());
6        temp[0] = nums[0];
7        for(int i=1;i<nums.size();i++){
8            temp[i] = temp[i-1] + nums[i];
9        }
10
11        vector<int>res;
12        for(auto key : queries){
13            int ele = key;
14            int low = 0;
15            int high = temp.size()-1;
16            int index = -1;
17            while(low<=high){
18                int mid = low + (high-low)/2;
19                if(temp[mid] <= ele){
20                    index = mid + 1;
21                    low = mid + 1;
22                }else{
23                    high = mid - 1;
24                }
25            }
26            res.push_back(index == -1 ? 0 : index);
27        }
28        return res;
29    }
30};
31
32