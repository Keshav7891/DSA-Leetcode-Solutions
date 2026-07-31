// Last updated: 31/07/2026, 08:55:04
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        /*
5        1 7 3  6  5  6
6        1 8 11 17 22 28
7        */
8
9        vector<int>prefixSum(nums.size());
10        prefixSum[0] = nums[0];
11        int totalSum = nums[0];
12        for(int i=1;i<nums.size();i++){
13            totalSum = totalSum + nums[i];
14            prefixSum[i] = prefixSum[i-1] + nums[i];
15        }
16
17        int leftSum = 0;
18        for(int i=0;i<nums.size();i++){
19            int rightSum = totalSum - prefixSum[i];
20            if(leftSum == rightSum){
21                return i;
22            }
23            leftSum = leftSum + nums[i];
24        }
25
26        return -1;
27    }
28};