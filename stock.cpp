//partial solution

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {
            int pricedif = prices[i+1] - prices[i];
            if (prices[i] < prices[i+1] && pricedif > maxprofit) {
                maxprofit = pricedif;
            }
        }
        return maxprofit;
    }
};
