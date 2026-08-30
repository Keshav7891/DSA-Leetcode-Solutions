class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sellProfit = INT_MIN;
        int buy = INT_MAX;
        for(int i=0;i<prices.size();i++){
            buy = min(buy, prices[i]);
            sellProfit = max(sellProfit, prices[i] - buy);
        }
        return sellProfit;
    }
};
