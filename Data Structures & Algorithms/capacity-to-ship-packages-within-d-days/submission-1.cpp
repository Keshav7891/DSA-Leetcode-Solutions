class Solution {
public:

    bool help(vector<int>& nums, int capacity, int limit) {
        int days = 1;
        int currentCapacity = 0;

        for (auto weight : nums) {
            if (currentCapacity + weight > capacity) {
                days++;
                currentCapacity = 0;
            }

            currentCapacity += weight;
        }

        return days <= limit;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = 1;
        int high = 0;
        for(auto key : weights){
            low = max(low, key);
            high = high + key;
        }

        int res = high;

        while(low <= high){
            int mid = low + (high - low)/2;
            bool check = help(weights, mid, days);
            if(check){
                res = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }

        return res;
    }
};