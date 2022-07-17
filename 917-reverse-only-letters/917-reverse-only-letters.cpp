class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0, j = s.size() - 1;
        string ans;
        
//         j >= 0 && 
        while(i < s.size()){
            if((((s[i] - 'a') >= 0 && (s[i] - 'a') < 26) || (s[i] - 'A') >= 0 && (s[i] - 'A') < 26) && (((s[j] - 'a') >= 0 && (s[j] - 'a') < 26) || (s[j] - 'A') >= 0 && (s[j] - 'A') < 26)){
                ans += s[j];
                j--;
                i++;
            }
            
            else if(!(((s[i] - 'a') >= 0 && (s[i] - 'a') < 26) || (s[i] - 'A') >= 0 && (s[i] - 'A') < 26)){
                ans += s[i];
                i++;
            }
            
            else if(!(((s[j] - 'a') >= 0 && (s[j] - 'a') < 26) || (s[j] - 'A') >= 0 && (s[j] - 'A') < 26)){
                j--;
            }
        }
        
        return ans;
    }
};