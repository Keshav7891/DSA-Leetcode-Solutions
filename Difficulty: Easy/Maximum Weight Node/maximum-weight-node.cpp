class Solution {
public:
    int maxWeightCell(vector<int> &exits) {
        int count[100001] = {0};
        for(int i = 0;i<exits.size();i++){
            if(exits[i] == -1){
                continue;
            }
            count[exits[i]] += i;
        }
        int ans = 0;
        int maxi = INT_MIN;
        for(int i = 0;i<exits.size();i++){
            if(exits[i] == -1){
                continue;
            }
            int a = count[exits[i]];
            maxi = max(maxi,count[exits[i]]);
            if(a >= maxi){
                ans = exits[i];
            }
        }
        return ans;
    }
};

