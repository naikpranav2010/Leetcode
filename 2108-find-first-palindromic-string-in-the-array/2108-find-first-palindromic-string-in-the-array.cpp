class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words)
            if(ispalindrome(s))
                return s;
        
        return "";
    }
    
    bool ispalindrome(string s){
        string t = s;
        reverse(s.begin(), s.end());
        
        return t == s;
    }
};