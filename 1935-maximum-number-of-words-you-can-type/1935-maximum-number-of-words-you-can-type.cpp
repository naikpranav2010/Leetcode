class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> s;
        int ans = 0;
        bool flag = true;
        
        for(char x : brokenLetters)
            s.insert(x);
        
        for(char x : text){
            if(x == ' '){
                if(flag)
                    ans++;
                flag = true;
                continue;
            }
            
            else if(s.find(x) != s.end())
                flag = false;
        }
        
        if(flag)
            ans++;
        
        return ans;
    }
};