class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> mem(m, vector<int>(n));
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!i || !j)
                    mem[i][j] = 1;
                
                else
                    mem[i][j] = mem[i - 1][j] + mem[i][j - 1];
            }
        }
        
        return mem[m - 1][n - 1];
    }
};