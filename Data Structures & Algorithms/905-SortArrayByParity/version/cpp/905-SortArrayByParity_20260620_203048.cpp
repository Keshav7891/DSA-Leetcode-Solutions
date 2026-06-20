// Last updated: 20/06/2026, 20:30:48
1class Solution {
2public:
3    vector<int> sortArrayByParity(vector<int>& nums) {
4        int k = 0;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]%2 == 0){
7                swap(nums[i], nums[k]);
8                k++;
9            }
10        } 
11        return nums;
12    }
13};