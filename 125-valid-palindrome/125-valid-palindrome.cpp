class Solution {
public:
    bool isPalindrome(string s) {
        clean(s);
        
        int n = s.size();
        
        for(int i = 0; i < n / 2; i++){
            if(s[i] != s[n - 1 - i])
                return false;
        }
        
        return true;
    }
    
    void clean(string &s){
        for (int i = 0; i < s.size(); i++){
            if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))){
                s.erase(s.begin() + i);
                i--;
            }
                // s.erase(s.begin() + i);
            // else
            //     continue;
            
            // else if(s[i] < 'z')
            //     s[i] -= 'a' + 'A';
            
            else if(s[i] <= 'Z')
                s[i] = 'a' + (s[i] - 'A');
            
        }
        cout<<s<<endl;
        return;
    }
};