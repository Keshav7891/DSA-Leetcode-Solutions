// Last updated: 31/05/2026, 12:02:59
class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(auto key : s){
            if((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z') || (key >= '0' && key <= '9')){
                res.push_back(key);
            }
        }

        int low = 0;
        int high = res.size() - 1;
        while(low <= high){
            if(toupper(res[low]) != toupper(res[high])){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};