class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(!digits.size())
            return {};
        vector<string> v({"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"});
        vector<string> ans;
        string temp;
        
        populate(v, digits, ans, temp, 0);
        
        return ans;
    }
    
    void populate(vector<string> &v, string digits, vector<string> &ans, string temp, int dig){
        if(dig >= digits.size())
        {
            ans.push_back(temp);
            return;
        }
        
        for(int i = 0; i < v[digits[dig] - '0' - 2].size(); i++)
        {
            temp.push_back(v[digits[dig] - '0' - 2][i]);
            populate(v, digits, ans, temp, dig + 1);
            temp.pop_back();
        }
        
        return;
    }
};