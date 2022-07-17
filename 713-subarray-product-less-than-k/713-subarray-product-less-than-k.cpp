class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(!k)
            return 0;
        int i = 0, j = 0, n = nums.size(), ans = 0;
        int prod = 1;
        
        while(j < n){
            prod *= nums[j];
            
            // if(prod < k && j < n){
            //     ans++;
            //     j++;
            // }
                
            
            // if(prod >= k){
                while(prod >= k && i <= j){
                    prod /= nums[i];
                    i++;
                }
                // i++;
                ans += j - i + 1;
            // }
            
            j++;
        }
        
        return ans;
    }
};