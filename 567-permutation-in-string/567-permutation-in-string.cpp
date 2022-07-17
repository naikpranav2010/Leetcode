class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size())
            return false;
        
        // vector<vector<int>> alpha(26, vector<int>(2, 0));
        vector<int> alpha(26, 0);
        int first = s1.size(), second = s2.size(), count = 0;
        
        for(int i = 0; i < first; i++){
            alpha[s1[i] - 'a']++;
            alpha[s2[i] - 'a']--;
        }
        
        // if(check(alpha))
        //     return true;
        
        for(int i = 0; i < 26; i++){
            if(!alpha[i])
                count++;
        }
        
        if(count == 26)
            return true;
        
        for(int i = first; i < second; i++){
            alpha[s2[i] - 'a']--;
            
            if(alpha[s2[i] - 'a'] == -1)
                count--;
            
            else if(!alpha[s2[i] - 'a'])
                count++;
            
            alpha[s2[i - first] - 'a']++;
            
            if(alpha[s2[i- first] - 'a'] == 1)
                count--;
            
            else if(!alpha[s2[i- first] - 'a'])
                count++;
            
            if(count == 26)
                return true;
        }
        
        return false;
    }
};