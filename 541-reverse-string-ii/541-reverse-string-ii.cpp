class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size() - 1;
        
        for(int i = 0; i < s.size(); i += (2 * k)){
            int temp = min(n, i + k - 1);
            reverse(s, i, temp);
        }
        
        return s;
    }
    
    void reverse(string &s, int i, int j){
        while(i < j){
            swap(s[i++], s[j--]);
        }
        
        return;
    }
};