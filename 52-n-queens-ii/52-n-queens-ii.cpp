// class Solution {
// public:
//     int totalNQueens(int n) {
        class Solution {
public:
    
    int totalNQueens(int n) {
        vector<bool> col(n, true);
        string s(n, '.');
        vector<string> board(n, s);
        // vector<vector<string>> ans;
        int ans = 0;
        
        pop(ans, board, col, n, 0);
        
        return ans;
    }
    
    void pop(int &ans, vector<string> &board,  vector<bool> &col, int n, int i){       
        if(i >= n){
            ans++;
            return;
        }
        
        for(int j = 0; j < n; j++){
            if(!col[j])
                continue;
            
            if(!possible(board, i, j))
                continue;
            
            board[i][j] = 'Q';           
            col[j] = false;
            
            pop(ans, board, col, n, i + 1);
            
            board[i][j] = '.';           
            col[j] = true;
        }
        
        return;
    }
    
    bool possible(vector<string> board, int x, int y){
        int n = board.size();
        
        int i = x;
        int j = y;
        while(i > 0 && j > 0)
            if(board[--i][--j] == 'Q')
                return false;
            
        i = x;
        j = y;
        while(i > 0 && j < n - 1)
            if(board[--i][++j] == 'Q')
                return false;
        
        return true;
    }
};