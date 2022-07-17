class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> temp(n, -1);
        
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(prices[i] >= prices[j]){
                    temp[i] = prices[j];
                    break;
                }
            }
        }
        
        for(int i = 0; i < n - 1; i++){
            if(temp[i] > 0) prices[i] -= temp[i];
        }
        
        return prices;
    }
};