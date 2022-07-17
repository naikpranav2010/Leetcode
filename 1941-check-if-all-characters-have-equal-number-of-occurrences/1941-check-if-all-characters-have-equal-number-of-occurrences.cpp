class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> map(26, 0);
        
        for(int i = 0; i < s.size(); i++){
            map[s[i] - 'a']++;
        }
        
        int count = -1;
        
        for(int i = 0; i < 26; i++){
            if(!map[i])
                continue;
            
            if(count == -1)
                count = map[i];
            
            else if(map[i] != count)
                return false;
        }
        
        return true;
    }
};