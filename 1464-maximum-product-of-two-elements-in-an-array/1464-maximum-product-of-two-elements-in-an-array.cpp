class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(), ma = INT_MIN, sma = INT_MIN, ans;
        
        for(int i = 0; i < n; i++){
            if(nums[i] > ma){
                sma = ma;
                ma = nums[i];
            }
            
            else if(nums[i] > sma) sma = nums[i];
        }
        
        return (ma - 1) * (sma - 1);
    }
};