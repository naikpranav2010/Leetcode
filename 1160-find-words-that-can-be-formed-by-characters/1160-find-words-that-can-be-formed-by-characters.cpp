class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> alpha(26, 0);
        int length = 0;
        
        for(int i = 0; i < chars.size(); i++)
            alpha[chars[i] - 'a']++;
        
        for(int i = 0; i < words.size(); i++){
            vector<int> alpha_dummy(alpha);
            bool flag = true;
            
            for(int j = 0; j < words[i].size(); j++){
                alpha_dummy[words[i][j] - 'a']--;
                
                if(alpha_dummy[words[i][j] - 'a'] < 0){
                    flag = false;
                    break;
                }
            }
            
            if(flag)
                length += words[i].size();
                
        }
        
        return length;
    }
};