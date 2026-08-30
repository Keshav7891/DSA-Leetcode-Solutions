class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> m;
        int maxFreq = 0;
        int res = 0;
        int j = 0;

        for (int i = 0; i < s.size(); i++) {
            char curr = s[i];
            m[curr]++;
            maxFreq = max(maxFreq, m[curr]);

            int replacable = i - j + 1 - maxFreq;

            while (replacable > k) {
                char temp = s[j];
                m[temp]--;
                j++;

                replacable = i - j + 1 - maxFreq;
            }

            res = max(res, i - j + 1);
        }

        return res;
    }
};