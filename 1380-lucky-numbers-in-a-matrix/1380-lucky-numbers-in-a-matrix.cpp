class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size(), ma = INT_MIN, flag;
        vector<int> row(n), col(m), ans;
        
        for(int i = 0; i < n; i++){
            row[i] = *min_element(matrix[i].begin(), matrix[i].end());
        }
        
        for(int i = 0; i < m; i++){
            ma = INT_MIN;
            for(int j = 0; j < n; j++){
                // if(ma < matrix[j][i]){
                //     ma = matrix[j][i];
                //     flag = j;
                // }
                
                col[i] = max(col[i], matrix[j][i]);
            }
            
            // if(row[flag] == ma) ans.push_back(ma);
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(row[i] == col[j]) ans.push_back(row[i]);
            }
        }
                
        return ans;
    }
};