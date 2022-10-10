class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0, prod = 0, max_prod = INT_MIN;
        
        while(i < nums.size()){
            prod += nums[i];
            
            max_prod = max(max_prod, prod);
            
            if(prod < 0)
                prod = 0;
            
            i++;
        }
        
        return max_prod;
    }
};