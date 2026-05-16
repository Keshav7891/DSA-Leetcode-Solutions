class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        for(auto key : nums){
            if(s.find(key)!=s.end()){
                return true;
            }
            s.insert(key);
        }
        return false;
    }
};
