class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.size(), INT_MAX), temp;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c)
                temp.push_back(i);
        }
        
        for(int i = 0; i < s.size(); i++){
            int minm = INT_MAX;
            
            for(int j = 0; j < temp.size(); j++)
                    minm = min(minm, abs(temp[j] - i));
            
            ans[i] = minm;
        }
        
        return ans;
    }
};