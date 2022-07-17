class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        
        populate(s, 0, ans);
        
        return ans;
    }
    
    void populate(string s, int k, vector<string> &ans){
        if(k == s.size()){
            ans.push_back(s);
            return;
        }
        
        populate(s, k + 1, ans);
        
        if('0' <= s[k] && s[k] <= '9')
            return;
        
        if('a' <= s[k] && s[k] <= 'z')
            s[k] = s[k] - 'a' + 'A';
        
        else if('A' <= s[k] && s[k] <= 'Z')
            s[k] = s[k] + 'a' - 'A';
        
        populate(s, k + 1, ans);
    }
};