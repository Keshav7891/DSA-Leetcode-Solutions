// Last updated: 31/05/2026, 14:02:39
class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;

        while (low < high) {
            if (s[low] != s[high]) {
                return false;
            }
            low++;
            high--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;

        while (low < high) {
            if (s[low] != s[high]) {
                string temp1 = s.substr(low + 1, high - low);
                string temp2 = s.substr(low, high - low);

                return isPalindrome(temp1) || isPalindrome(temp2);
            }

            low++;
            high--;
        }

        return true;
    }
};