class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        int sum = 0;
            
        for(int i = 0 ; i < nums.size(); i++)
            sum += i - nums[i];
        
        return sum + nums.size();
    }
};