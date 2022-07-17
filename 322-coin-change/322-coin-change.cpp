class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(!amount)
            return 0;
        
        int m = coins.size(), n = amount;
        // int N = max(m, n)
        
        vector<vector<int>> mem(m + 1, vector<int>(n + 1, INT_MAX / 2));
        
        for(int i = 0; i <= m; i++)
            mem[i][0] = 0;
        
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(j - coins[i - 1] >= 0)
                    mem[i][j] = min(mem[i - 1][j], 1 + mem[i][j - coins[i - 1]]);
                else
                    mem[i][j] = mem[i - 1][j];
            }
        }
        
        if(mem[m][n] > INT_MAX / 3)
            return -1; 
        
        return mem[m][n];
    }
};