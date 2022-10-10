class Solution {
public:
    int maxProfit(vector<int>& prices) {
        for(int i = 0; i < prices.size() - 1; i++)
            prices[i] = prices[i + 1] - prices[i];
        
        int profit = 0, maxprofit = 0;
        
        for(int i = 0; i < prices.size() - 1; i++){
            profit += prices[i];
            
            maxprofit = max(maxprofit, profit);
            
            if(profit < 0)
                profit = 0;
        }
        
        return maxprofit;
    }
};