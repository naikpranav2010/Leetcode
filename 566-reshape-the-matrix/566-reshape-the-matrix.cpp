class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size() * mat[0].size() != r * c)
            return mat;
        
        vector<vector<int>> ans(r, vector<int>(c));
        int a = 0, b = 0;
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                ans[i][j] = mat[a][b++];
                
                if(b == mat[0].size()){
                    a++;
                    b = 0;
                }
            }
        }
        
        return ans;
    }
};