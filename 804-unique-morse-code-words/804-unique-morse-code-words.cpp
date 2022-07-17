class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string, bool> trans;
        vector<string> alpha({".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."});
        int ans = 0;
        
        for(int i = 0; i < words.size(); i++){
            string temp;
            
            for(int j = 0; j < words[i].size(); j++){
                temp += alpha[words[i][j] - 'a'];
            }
            
            if(trans.find(temp) == trans.end()){
                ans++;
                trans[temp] = true;
            }
        }
        
        return ans;
    }
};