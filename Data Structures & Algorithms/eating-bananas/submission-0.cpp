class Solution {
public:

    bool help(vector<int>& nums, int candid, int limit){
        int count = 0;
        for(auto key : nums){
            count = count + key/candid;
            if(key % candid != 0){
                count = count + 1;
            }
        }
        return count <= limit;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = piles[0];
        for(auto key : piles){
            high = max(high, key);
        }

        int res = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            bool check = help(piles, mid, h);

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
