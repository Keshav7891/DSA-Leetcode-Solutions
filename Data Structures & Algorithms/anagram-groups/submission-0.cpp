class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string, vector<string>>m;
        for(auto key : strs){
            string temp = key;
            sort(temp.begin(), temp.end());
            m[temp].push_back(key);
        }

        for(auto key : m){
            vector<string>temp;
            for(auto key2 : key.second){
                temp.push_back(key2);
            }
            res.push_back(temp);
        }

        return res;
    }
};
