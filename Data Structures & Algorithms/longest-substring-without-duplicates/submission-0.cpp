class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        unordered_set<char>s;
        int j = 0;
        int res = 0;
        for(int i=0;i<str.size();i++){
            char ch = str[i];
            while(s.find(ch)!=s.end()){
                char temp = str[j];
                s.erase(temp);
                j++;
            }
            s.insert(ch);
            res = max(res, i-j+1);
        }
        return res;

        return res;
    }
};
