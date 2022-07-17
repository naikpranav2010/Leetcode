class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int lim = max(m, n);
        bool col = false, row = false;
        
        for(int i = 0; i < lim; i++)
        {
            if(i < m)
                if(!matrix[i][0])
                    col = true;
            
            if(i < n)
                if(!matrix[0][i])
                    row = true;
        }
        
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                if(!matrix[i][j])
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                    // cout<<i<<' ';
                    // cout<<j<<' ';
                }
            }
        }
        
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                // cout<<i<<' ';
                //     cout<<j<<' ';
                if(!matrix[i][0] || !matrix[0][j])
                    matrix[i][j] = 0;
            }
        }
        
        for(int i = 0; i < lim; i++)
        {
            if(i < m)
                if(col)
                    matrix[i][0] = 0;
                
            
            if(i < n)
                if(row)
                    matrix[0][i] = 0;
        }
        
        return;
    }
};