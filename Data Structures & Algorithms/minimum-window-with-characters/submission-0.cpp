class Solution {
public:

    string minWindow(string s, string t) {
        unordered_map<char, int> mp;
        unordered_map<char, int> window;

        int charCount = 0;
        int satisfied = 0;

        for (auto key : t) {
            charCount++;
            mp[key]++;
        }

        int j = 0;
        int resLen = INT_MAX;
        int resStart = 0;

        for (int i = 0; i < s.size(); i++) {
            char curr = s[i];

            if (mp.find(curr) != mp.end()) {
                window[curr]++;

                if (window[curr] == mp[curr])  
                    satisfied++;

                while (satisfied == (int)mp.size()) {   
                    if (i - j + 1 < resLen) {
                        resLen = i - j + 1;
                        resStart = j;
                    }

                    char temp = s[j];

                    if (mp.find(temp) != mp.end()) {
                        if (window[temp] == mp[temp])  
                            satisfied--;

                        window[temp]--;
                        if (window[temp] == 0) window.erase(temp);
                    }

                    j++;
                }
            }
        }

        return resLen == INT_MAX ? "" : s.substr(resStart, resLen);
        
    }
};
