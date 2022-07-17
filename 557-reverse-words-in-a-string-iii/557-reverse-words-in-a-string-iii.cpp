class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0;
        
        while(j < s.size()){
            while(s[j] != ' ' && j < s.size())
                j++;
            
            reversefun(s, i, --j);
            
            i = j + 2;
            j = i;
        }
        
        // reversefun(s, i, --j);
        
        return s;
    }
    
    void reversefun(string &s, int i, int j){
        while(i < j){
            swap(s[i++], s[j--]);
        }
        
        return;
    }
};