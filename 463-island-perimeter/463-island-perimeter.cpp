class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0, m = grid.size(), n = grid[0].size();
        queue<pair<int, int>> list;
        int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j< n; j++){
                if(grid[i][j] == 1){
                    list.push({i, j});
                    // cout<<i<<' '; cout<<j << endl;
                    grid[i][j] = -1;
                    break;
                }
                
            }
            
            // cout<< list.size() << endl;
            
            if(!list.empty())
                break;
        }
        
        while(!list.empty()){
            pair<int, int> curr = list.front();
            list.pop();
            cout<<curr.first<<' ';
            cout<<curr.second<<endl;
            int per = 4;
            
            for(int i = 0; i < 4; i++){
                int newr = curr.first + dir[i][0];
                int newc = curr.second + dir[i][1];
                
                if(newr >= 0 && newc >= 0 && newr < m && newc < n){
                    if(grid[newr][newc] == 1){
                        list.push({newr, newc});
                        per--;
                        grid[newr][newc] = -1;
                    } 
                    
                    else if(grid[newr][newc] == -1){
                        // 0list.push({newr, newc});
                        per--;
                        // grid[newr][newc] = -1;
                    } 
                }               
            }
            
            perimeter += per;
        }
        
        return perimeter;
    }
};