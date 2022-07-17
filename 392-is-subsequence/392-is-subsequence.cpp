class Solution {
public:
    bool isSubsequence(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        
        int i = 0, j = 0;
        
        while(i < s.size() && j < t.size()){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            
            else
                j++;
        }
        
        if(i == s.size())
            return true;
        
        return false;
    }
};