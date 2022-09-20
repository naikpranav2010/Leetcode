class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        
        for(string word : strs){
            if(ans.size() > word.size())
                ans.erase(word.size());
            for(int i = 0; i < word.size(); i++){
                if(i < ans.size())
                    if(ans[i] != word[i]){
                        ans.erase(i);
                        break;
                    }
            }
        }
        
        return ans;
    }
};