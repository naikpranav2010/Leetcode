class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> dist(m, vector<int>(n, INT_MAX));
        queue<pair<int, int>> order;
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(!mat[i][j]){
                    dist[i][j] = 0;
                    order.push({i, j});
                }
            }
        }
        
        int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        
        while(!order.empty()){
            pair<int, int> curr = order.front();
            order.pop();
            
            for(int i = 0; i < 4; i++){
                int newr = curr.first + dir[i][0];
                int newc = curr.second + dir[i][1];
                
                if(newr >= 0 && newc >= 0 && newr < m && newc < n){
                    if(dist[newr][newc] > dist[curr.first][curr.second] + 1){
                        dist[newr][newc] = dist[curr.first][curr.second] + 1;
                        order.push({newr, newc});
                    }
                }
            }
        }
        
        return dist;
    }
};