// Last updated: 07/07/2026, 09:10:08
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;

        for (int i = 0; i + needle.size() <= haystack.size(); i++) {
            if (haystack[i] == needle[0]) {
                int j;
                for (j = 1; j < needle.size(); j++) {
                    if (haystack[i + j] != needle[j]) {
                        break;
                    }
                }

                if (j == needle.size()) {
                    return i;
                }
            }
        }

        return -1;
    }
};