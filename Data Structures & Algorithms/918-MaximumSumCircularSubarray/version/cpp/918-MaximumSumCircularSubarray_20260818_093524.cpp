// Last updated: 18/08/2026, 09:35:24
1class Solution {
2public:
3    int maxSubarraySumCircular(vector<int>& nums) {
4        int totalSum = 0;
5        for(auto key : nums){
6            totalSum = totalSum + key;
7        }
8
9        // handle circular case in which we find minimum subarray sum and deduct it from total sum to find max circular sum
10        int minSum = INT_MAX;
11        int currSum = 0;
12        for(auto key : nums){
13            if(currSum <= 0){
14                currSum = currSum + key;
15            }else{
16                currSum = key;
17            }
18            minSum = min(minSum, currSum);
19        }
20
21        // non cyclic max sum
22        int maxSum = INT_MIN;
23        int currMax = 0;
24        for(auto key : nums){
25            if(currMax >= 0){
26                currMax = currMax + key;
27            }else{
28                currMax = key;
29            }
30            maxSum = max(maxSum, currMax);
31        }
32
33        if(maxSum < 0) return maxSum;
34
35        return max(maxSum, totalSum - minSum);
36    }
37};