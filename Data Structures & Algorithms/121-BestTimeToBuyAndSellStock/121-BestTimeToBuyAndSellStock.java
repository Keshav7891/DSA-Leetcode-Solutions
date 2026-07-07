// Last updated: 07/07/2026, 09:09:52
class Solution {
    public int maxProfit(int[] prices) {
        int res = Integer.MIN_VALUE;
        int buy = prices[0];
        for(int i=0;i<prices.length;i++){
            buy = Math.min(buy, prices[i]);
            res = Math.max(res, prices[i] - buy); 
        }
        return res;
    }
}