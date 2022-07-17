class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), minprice = prices[0], maxprice = INT_MIN, maxprofit = 0;
        // vector<int> temp(n);
        
        for(int i = 1; i < n; i++){
            maxprofit = max(maxprofit, prices[i] - minprice);
            minprice = min(minprice, prices[i]);
            // temp[i] = minprice;
            // cout<<temp[i]<<' ';
        }
        
        // for(int i = n - 1; i >= 0; i--){
        //     maxprofit = max(maxprofit, maxprice - temp[i]);
        //     maxprice = max(maxprice, prices[i]);
        //     // cout<<maxprice<<' ';
        // }
        
        return maxprofit;
    }
};