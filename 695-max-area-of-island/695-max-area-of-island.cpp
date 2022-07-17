class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea = 0, m = grid.size(), n = grid[0].size();
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j]){
                    int temp = 0;
                    area(grid, i, j, temp);
                    // cout<<j<<endl;
                    maxarea = max(maxarea, temp);
                }
            }
        }
        
        return maxarea;
    }
    
    void area(vector<vector<int>>& grid, int i, int j, int &temp){
        if(i < 0 || i >= grid.size())
            return;
        if(j < 0 || j >= grid[0].size())
            return;
        if(!grid[i][j])
            return;
        
        if(grid[i][j]){
            temp++;
            grid[i][j] = 0;
            area(grid, i + 1, j, temp);
            area(grid, i - 1, j, temp);
            area(grid, i, j + 1, temp);
            area(grid, i, j - 1, temp);
        }
            // area(grid, i + 1, j, temp);
            // area(grid, i - 1, j, temp);
            // area(grid, i, j + 1, temp);
            // area(grid, i, j - 1, temp);
        
        return;
    }
};