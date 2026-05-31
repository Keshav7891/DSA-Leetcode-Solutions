// Last updated: 31/05/2026, 14:02:37
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int i = 0;
        int j = 0;
        while(i < word1.size() || j < word2.size()){
            if(i != word1.size()){
                res.push_back(word1[i]);
                i++;
            }
            if(j != word2.size()){
                res.push_back(word2[j]);
                j++;
            }
        }
        return res;
    }
};