class Solution {
public:
    bool canConstruct(string r, string t) {
        vector<int> alpha(26, 0);
        int n = max(t.size(), r.size());
        // for(int i = 0; i < r.size(); i++)
            

        for(int i = 0; i < n; i++){
            if(i < t.size())
                alpha[t[i] - 'a']--;
            
            if(i < r.size())
                alpha[r[i] - 'a'] ++;
        }
            
        
        for(int i = 0; i < 26; i++)
            if(alpha[i] > 0)
                return false;
        
        return true;
    }
};