class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char>s;
        int j = 0;
        int res = 0;
        for(int i=0;i<str.size();i++){
            char curr = str[i];
            while(j<i && s.find(curr) != s.end()){
                char temp = str[j];
                s.erase(temp);
                j++;
            }
            s.insert(curr);
            res = max(res, i-j+1);
        }
        return res;
    }
};
