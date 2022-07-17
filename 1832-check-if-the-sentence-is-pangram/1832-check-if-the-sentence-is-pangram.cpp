class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> alpha(26, false);
        int count = 0;
        
        for(int i = 0; i < sentence.size(); i++){
            if(!alpha[sentence[i] - 'a']){
                alpha[sentence[i] - 'a'] = true;
                count++;
            }
        }
        
        if(count == 26)
            return true;
        
        return false;
    }
};