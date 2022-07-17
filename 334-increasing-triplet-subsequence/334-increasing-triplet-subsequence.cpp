class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size(), minm = nums[0];
        vector<int> maxm(n);
        
        maxm[n - 1] = nums[n - 1];
        
        for(int i = n - 2; i >= 0; i--){
            if(nums[i + 1] > maxm[i+ 1])
                maxm[i] = nums[i + 1];
            else
                maxm[i] = maxm[i + 1];
        }
        
        for(int i = 1; i < n; i++){
            if(minm < nums[i] && nums[i] < maxm[i])
                return true;
            
            minm = min(minm, nums[i]);
        }
        
        return false;
    }
};