class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1){
            return 0;
        }
        // Create window with size of two index values
        int l = 0;
        int r = 1;
        // Initial profit is 0
        int mp = 0;
        
        while(r < prices.size()){
            // If the left index is greater than the right, the price is decreasing and no profit can be made, so slide the window down by one value
            if(prices[l] > prices[r]){
                l = r;
                r++;
            // If the right index is greater than the left, the price is increasing; expand the window by tethering the left boundary while advancing to right boundary, checking at every index the maximum profit
            }else{
                mp = max(mp, prices[r] - prices[l]);
                r++;
            }
        }
        
        return mp;
    }
};
