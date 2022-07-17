class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        // vector<int> mem(n);
        
        if(n == 1)
            return nums[0];
        
        if(n == 2)
            return max(nums[0], nums[1]);
        
        // mem[n - 1] = nums[n - 1];
        nums[n - 2] = max(nums[n - 1], nums[n - 2]);
        
        for(int i = n - 3; i >= 0; i--)
            nums[i] = max(nums[i] + nums[i + 2], nums[i + 1]);
        
        return nums[0];
    }
};