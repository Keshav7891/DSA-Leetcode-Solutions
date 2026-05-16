class Solution {
public:
    int maxArea(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        int res = 0;
        while(low < high){
            int minHeight = min(nums[low], nums[high]);
            int width = high - low ;
            int water = minHeight * width;
            res = max(res, water);

            if(nums[low] < nums[high]){
                low++;
            }else{
                high--;
            }
        }

        return res;
    }
};
