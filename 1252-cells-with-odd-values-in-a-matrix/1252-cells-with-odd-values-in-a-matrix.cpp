class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>> ans(n, vector<int>(m, 0));
        int N = indices.size(), count = 0;
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < m; j++){
                ans[indices[i][0]][j]++;
            }
            
            for(int j = 0; j < n; j++){
                ans[j][indices[i][1]]++;
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(ans[i][j] % 2) count++;
            }
        }
        
        return count;
    }
};