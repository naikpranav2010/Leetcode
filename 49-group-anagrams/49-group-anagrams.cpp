class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, int> m;
        int ind = 0;
        
        for(int i = 0; i < strs.size(); i++)
        {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            
            if(m.find(temp) == m.end())
            {
                m[temp] = ind++;
                ans.push_back({strs[i]});
            }
            
            else
            {
                ans[m[temp]].push_back(strs[i]);
            }
        }
        
        return ans;
    }
};