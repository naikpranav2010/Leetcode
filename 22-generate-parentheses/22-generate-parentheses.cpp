class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "(";
        pop(ans, s, n - 1, n);
        
        return ans;
    }
    
    void pop(vector<string> &ans, string s, int i, int j){
        if(!j || i > j)
            return;
        
        if(!i)
        {
            while(j)
            {
                s+=')';
                j--;
            }
            ans.push_back(s);
            return;
        }
        
        s += '(';
        pop(ans, s, i - 1, j);
        s.pop_back();
        s += ')';
        pop(ans, s, i, j - 1);
        
        // s.pop_back();
        s.pop_back();
        
        return;
    }
};