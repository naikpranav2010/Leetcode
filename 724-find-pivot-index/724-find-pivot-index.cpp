class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0, sum = 0, n = nums.size();
        
        for(int i = 0; i < n; i++)
            total += nums[i];
        
        for(int i = 0; i < n; i++){
            int m = total - nums[i];
            
            if(m % 2 == 0 && m / 2 == sum)
                return i;
            
            sum += nums[i];
        }
        
        return -1;
    }
};