class Solution {
public:
    vector<int> diStringMatch(string s) {
        int high = s.size(), low = 0; 
        vector<int> ans(high);
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'I')
                ans[i] = low++;
            
            else
                ans[i] = high--;
        }
        
        ans.push_back(high);
        
        return ans;
    }
};