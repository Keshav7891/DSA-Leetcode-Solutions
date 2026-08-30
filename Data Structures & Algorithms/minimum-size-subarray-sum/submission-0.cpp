class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currSum = 0;
        int res = INT_MAX;
        int j = 0;
        for(int i=0;i<nums.size();i++){
            int curr = nums[i];
            currSum = currSum + curr;
            while(currSum >= target){
                res = min(res, i - j + 1);
                int temp = nums[j];
                currSum = currSum - temp;
                j++;
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};