class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        transpose(m);
        reflect(m);
        
        return;
    }
    
    void transpose(vector<vector<int>>& m){
        int n = m.size();
        
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                int temp = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = temp;
            }
        }
        
        return;
    }
        
    void reflect(vector<vector<int>>& m){
        int n = m.size();
        
        for(int i = 0; i < n; i++)
            reverse(m[i].begin(), m[i].end());
        
        return;
    }
};