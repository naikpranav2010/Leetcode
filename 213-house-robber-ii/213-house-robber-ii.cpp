class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        if(!n)
            return 0;
        if(n == 1)
            return nums[0];
        if(n==2)
            return max(nums[0], nums[1]);
        
        vector<int> nums2(nums);
        
        nums[1] = max(nums[1], nums[0]);
        
        for(int i = 2; i < n - 1; i++)
            nums[i] = max(nums[i] + nums[i - 2], nums[i - 1]);
        
        nums2[2] = max(nums2[2], nums2[1]);
        
        for(int i = 3; i < n; i++)
            nums2[i] = max(nums2[i] + nums2[i - 2], nums2[i - 1]);
        
        return max(nums[n - 2], nums2[n - 1]);
    }
};