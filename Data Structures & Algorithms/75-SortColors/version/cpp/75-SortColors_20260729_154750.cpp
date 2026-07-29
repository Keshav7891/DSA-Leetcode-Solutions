// Last updated: 29/07/2026, 15:47:50
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int zeroIndex = 0;
5        int oneIndex = 0;
6        int twoIndex = nums.size() - 1;
7
8        while(oneIndex <= twoIndex){
9            if(nums[oneIndex] == 0){
10                swap(nums[zeroIndex], nums[oneIndex]);
11                zeroIndex++;
12                oneIndex++;
13            }else if(nums[oneIndex] == 1){
14                oneIndex++;
15            }else{
16                swap(nums[twoIndex], nums[oneIndex]);
17                twoIndex--;
18            }
19        }
20    }
21};