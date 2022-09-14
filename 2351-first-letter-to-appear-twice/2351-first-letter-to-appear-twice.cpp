class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> alpha(26, 0);

        for(int i = 0; i < s.size(); i++){
            if(alpha[s[i] - 'a'] == 1){
                return s[i];
            }


            alpha[s[i] - 'a']++;
        }

        return -1;  
    }
};