// Last updated: 28/07/2026, 09:18:09
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>>res;
5
6        //sort the array
7        sort(nums.begin(), nums.end());
8
9        //loop for first element and 2-pointer for second and third element
10        for(int i=0;i<nums.size();i++){
11
12            //skip if repetative element which is already processed
13            if(i > 0 && nums[i] == nums[i-1]){
14                continue;
15            }
16
17            int low = i+1;
18            int high = nums.size() - 1;
19
20            while(low < high){
21                int sum = nums[i] + nums[low] + nums[high];
22
23                if(sum == 0){
24                    vector<int>temp;
25                    temp.push_back(nums[i]);
26                    temp.push_back(nums[low]);
27                    temp.push_back(nums[high]);
28                    res.push_back(temp);
29                    
30                    //skip repetative elements
31                    low++;
32                    while(low < high && nums[low] == nums[low-1]) low++;
33
34                    high--;
35                    while(low < high && nums[high] == nums[high+1]) high--;
36                }else if(sum > 0){
37                    high--;
38                }else{
39                    low++;
40                }
41            }
42        }
43
44        return res;
45    }
46};