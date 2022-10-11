class Solution {
public:
    vector<int> getRow(int n) {
        if(n == 0)
            return {1};
        
        if(n == 1)
            return {1, 1};
        
        vector<int> ans({1, 1});
        
        for(int i = 2; i <= n; i++){
            ans.push_back(1);
            for(int j = i - 1; j > 0; j--)
                ans[j] = ans[j] + ans[j - 1];
        }
        
        return ans;
    }
};