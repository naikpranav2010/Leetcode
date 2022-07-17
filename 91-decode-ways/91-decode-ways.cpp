class Solution {
public:
    int numDecodings(string s) {
        vector<int> dp(s.size() + 1, 0);
        dp[0] = 1;
        if(s[0] > '0' && s[0] <= '9')
            dp[1] = 1;
        else
            dp[1] = 0;
        
        for(int i = 2; i <= s.size(); i++){
            if(s[i - 1] > '0' && s[i - 1] <= '9')
                dp[i] += dp[i - 1];
            
            string temp;
            temp += s[i - 2];
            temp += s[i - 1];
            int num = stoi(temp);
            // cout<<num<<" ";
            
            if(num > 9 && num < 27)
                dp[i] += dp[i - 2];
        }
        
        return dp[s.size()];
        // return num;
    }
};