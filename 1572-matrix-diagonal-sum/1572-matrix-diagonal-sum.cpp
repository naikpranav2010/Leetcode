class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size(), sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += mat[i][i];
        }
        
        for(int i = 0; i < n; i++){
            if((n % 2) && (i == (n - 1) / 2)) continue;
            sum += mat[i][n - i - 1];
        }
        
        return sum;
    }
};