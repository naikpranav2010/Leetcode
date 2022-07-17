class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n + 1];
        
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2; i < n + 1; i++)
        {
            int max_size = 0;
            
            for(int j = 1; j < i; j++)
            {
                if(nums[i - 1] > nums[j - 1])
                    max_size = max(max_size, dp[j]);
            }
            
            dp[i] = max_size + 1;
        }
        
        int ans = 0;
        for(int i = 0; i < n + 1; i++)
            ans = max(ans, dp[i]);
        
        return ans;
    }
};