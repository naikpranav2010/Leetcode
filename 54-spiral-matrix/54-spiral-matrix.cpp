class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size(), flag = 0;
        vector<int> ans(m * n);
        int l = 0, r = n - 1, t = 0, b = m - 1;
        
        
        while(flag < m * n)
        {
            for(int i = l; i <= r; i++)
            {
                ans[flag++] = matrix[t][i];
            }
            t++;
            
            for(int i = t; i <= b; i++)
            {
                ans[flag++] = matrix[i][r];
            }
            r--;
            
            if(t <= b)
            {
                cout<<t<<' ';
                for(int i = r; i >= l; i--)
                {
                    ans[flag++] = matrix[b][i];
                }
                b--;
            }
            
            if(l <= r)
            {
                for(int i = b; i >= t; i--)
                {
                    ans[flag++] = matrix[i][l];
                }
                l++;
            }
        }
        
        return ans;
    }
};