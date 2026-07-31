// Last updated: 31/07/2026, 08:58:54
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        /*
5        1 7 3  6  5  6
6        1 8 11 17 22 28
7        */
8
9        //build prefix sum and total sum
10        vector<int>prefixSum(nums.size());
11        prefixSum[0] = nums[0];
12        int totalSum = nums[0];
13        for(int i=1;i<nums.size();i++){
14            totalSum = totalSum + nums[i];
15            prefixSum[i] = prefixSum[i-1] + nums[i];
16        }
17
18        //check where left sum = right sum (totalsum - prefix sum till that)
19        int leftSum = 0;
20        for(int i=0;i<nums.size();i++){
21            int rightSum = totalSum - prefixSum[i];
22            if(leftSum == rightSum){
23                return i;
24            }
25            leftSum = leftSum + nums[i];
26        }
27
28        return -1;
29    }
30};