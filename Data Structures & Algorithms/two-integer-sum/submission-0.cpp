class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int toSearch = target - nums[i];
            if(m.find(toSearch) != m.end()){
                res.push_back(m[toSearch]);
                res.push_back(i);
                return res;
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
