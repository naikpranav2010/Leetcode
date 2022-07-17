class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {       
        return vrow(board, 0) && vcol(board, 0) && vblock(board);
    }
    
    bool vrow(vector<vector<char>>& board, int i){
        if(i == 9)
            return true;
        
        vector<bool> check(9, false);
        
        for(int j = 0; j < 9; j++){
            if(board[i][j] == '.')
                continue;
            
            if(check[board[i][j]- '0' - 1])
                return false;
            
            check[board[i][j] - '0' - 1] = true;
        }
        
        return vrow(board, i + 1);
    }
    
    bool vcol(vector<vector<char>>& board, int i){
        if(i == 9)
            return true;
        
        vector<bool> check(9, false);
        
        for(int j = 0; j < 9; j++){
            if(board[j][i] == '.')
                continue;
            
            if(check[board[j][i] - '0' - 1])
                return false;
            
            check[board[j][i] - '0' - 1] = true;
        }
        
        return vcol(board, i + 1);
    }
    
    bool vblock(vector<vector<char>>& board){
        // int row[3] = {0, 1, 2};
        // int row[3] = {0, 1, 2};
        
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                vector<bool> check(9, false);
                
                for(int m = 0; m < 3; m++){
                    for(int n = 0; n < 3; n++){
                        if(board[i * 3 + m][j * 3 + n] == '.')
                            continue;
                
                        if(check[board[i * 3 + m][j * 3 + n] - '0' - 1])
                            return false;

                        check[board[i * 3 + m][j * 3 + n] - '0' - 1] = true;
                    }
                }
            }
        }
        
        // vector<bool> check(9, false);
        return true;
    }
};