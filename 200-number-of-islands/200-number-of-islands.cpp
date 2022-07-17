class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == '1')
                {
                    ans++;
                    flood(grid, i, j);
               }
            }
        }
        
        return ans;
    }
    
    void flood(vector<vector<char>>& grid, int i, int j){
        if(grid[i][j] == '0')
            return;
        
        grid[i][j] = '0';

        if(i > 0)
            flood(grid, i - 1, j);
        if(j > 0)
            flood(grid, i, j - 1);
        if(i < grid.size() - 1)
            flood(grid, i + 1, j);
        if(j < grid[0].size() - 1)
            flood(grid, i, j + 1);
        
        return;
    }
};