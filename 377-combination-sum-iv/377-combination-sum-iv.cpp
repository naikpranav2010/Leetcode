class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        if(target < 0)
            return 0; 
        
        long long int dp[target + 1];
        
        dp[0] = 1;
        
        for(int j = 1; j <= target; j++)
        {
            int ans = 0;

            for(int i = 0; i < nums.size(); i++)
            {
                if(j - nums[i] >= 0)
                    ans += dp[j - nums[i]];
            }
            
            dp[j] = ans;
        }
        
        
        return dp[target];
    }
    
//     int find_comb(vector<int> &nums, int target){
//         if(target < 0)
//             return 0; 
        
//         if(target == 0)
//             return 1;
        
//         int ans = 0;
//         for(int i = 0; i < nums.size(); i++){
//             ans += find_comb(nums, target - nums[i]);
//         }
        
//         return ans;
//     }
};