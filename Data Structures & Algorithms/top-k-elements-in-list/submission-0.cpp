class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
        vector<int>res;
        unordered_map<int,int>m;
        for(auto key : nums){
            m[key]++;
        }
        for(auto key : m){
            q.push({key.second, key.first});
            if(q.size() > k){
                q.pop();
            }
        }
        while(q.empty() == false){
            pair<int,int> curr = q.top();
            res.push_back(curr.second);
            q.pop();
        }
        return res;
    }
};
