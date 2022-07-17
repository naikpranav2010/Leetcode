class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1, ans = 0; 
        
        while(i < prices.size())
        {
            if(prices[i] - prices[i - 1] >= 0)
                ans += prices[i] - prices[i - 1];
            
            i++;
        }
        
        return ans;
    }
};