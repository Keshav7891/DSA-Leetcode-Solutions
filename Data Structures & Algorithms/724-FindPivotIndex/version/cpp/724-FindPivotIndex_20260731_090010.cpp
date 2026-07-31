// Last updated: 31/07/2026, 09:00:10
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        /*
5        1 7 3  6  5  6
6        1 8 11 17 22 28
7        */
8
9        //build total sum
10        int totalSum = 0;
11        for(int i=0;i<nums.size();i++){
12            totalSum = totalSum + nums[i];
13        }
14
15        //check where left sum = right sum (totalsum - leftSum - currEle)
16        int leftSum = 0;
17        for(int i=0;i<nums.size();i++){
18            int rightSum = totalSum - leftSum - nums[i];
19            if(leftSum == rightSum){
20                return i;
21            }
22            leftSum = leftSum + nums[i];
23        }
24
25        return -1;
26    }
27};