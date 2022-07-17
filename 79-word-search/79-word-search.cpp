class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        
       for(int i = 0; i < m; i++)
       {
           for(int j = 0; j < n; j++)
           {
               if(board[i][j] == word[0])
               {
                   board[i][j] = '*';
                   if(find(board, word, i, j, 1))
                       return true;
                   board[i][j] = word[0];
               }
           }
       }
        
        return false;
    }
        
    bool find(vector<vector<char>>& board, string word, int i, int j, int curr){
        if(curr >= word.size())
            return true;
        
        // bool flag = false;
        
        if(i > 0)
            if(board[i - 1][j] == word[curr])
            {
                board[i - 1][j] = '*';
                if(find(board, word, i - 1, j, curr + 1))
                    return true;
                board[i - 1][j] = word[curr];

            }
        
        if(j > 0)
            if(board[i][j - 1] == word[curr]){
                board[i][j - 1] = '*';
                if(find(board, word, i, j - 1, curr + 1))
                    return true;
                board[i][j - 1] = word[curr];
            }
                
        
        if(i < board.size() - 1)
            if(board[i + 1][j] == word[curr]){
                board[i + 1][j] = '*';
                if(find(board, word, i + 1, j, curr + 1))
                    return true;
                board[i + 1][j] = word[curr];
            }
        
        if(j < board[0].size() - 1)
            if(board[i][j + 1] == word[curr]){
                board[i][j + 1] = '*';
                if(find(board, word, i, j + 1, curr + 1))
                    return true;
                board[i][j + 1] = word[curr];
        }
        return false;
    }
};