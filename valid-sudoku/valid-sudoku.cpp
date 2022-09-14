class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return row_check(board) && col_check(board) && block_check(board);
    }
    
    bool row_check(vector<vector<char>>& board){
        for(int i = 0; i < 9; i++){
            vector<bool> hash(9, false);
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.')
                    continue;
                else if(hash[board[i][j] - '0' - 1])
                    return false;
                
                hash[board[i][j] - '0' - 1] = true;
            }
        }
            
        return true;
    }
    
    bool col_check(vector<vector<char>>& board){
        for(int j = 0; j < 9; j++){
            vector<bool> hash(9, false);
            for(int i = 0; i < 9; i++){
                if(board[i][j] == '.')
                    continue;
                else if(hash[board[i][j] - '0' - 1])
                    return false;
                
                hash[board[i][j] - '0' - 1] = true;
            }
        }
            
        return true;
    }

    bool block_check(vector<vector<char>>& board){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                vector<bool> hash(9, false);
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        if(board[i * 3 + k][j * 3 + l] == '.')
                            continue;
                        else if(hash[board[i * 3 + k][j * 3 + l] - '0' - 1])
                            return false;

                        hash[board[i * 3 + k][j * 3 + l] - '0' - 1] = true;
                    }
                }  
            }
        }
        
        return true;
    }

};