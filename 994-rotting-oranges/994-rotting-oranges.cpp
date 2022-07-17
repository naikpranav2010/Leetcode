class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int maxtime = 0, m = grid.size(), n = grid[0].size();
        queue<pair<pair<int, int>, int>> order;
        int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 2)
                    order.push({{i, j}, 0});
            }
        }
        
        while(!order.empty()){
            pair<pair<int, int>, int> curr = order.front();
            order.pop();
            
            for(int i = 0; i < 4; i++){
                int newr = curr.first.first + dir[i][0];
                int newc = curr.first.second + dir[i][1];
                maxtime = curr.second;
                
                if(newr >= 0 && newc >= 0 && newr < m && newc < n){
                    if(grid[newr][newc] == 1){
                        grid[newr][newc] = 2;
                        order.push({{newr, newc}, maxtime + 1});
                    }
                }
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1)
                    return -1;
            }
        }
        
        
        return maxtime;
    }
};