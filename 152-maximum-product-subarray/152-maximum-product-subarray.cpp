class Solution {
public:
    int findmaxprod(vector<int>& nums, int i, int j){
        if(i < 0 || j < 0 || i >= nums.size() || j > nums.size())
            return INT_MIN;
        
        int max_prod = INT_MIN, prod = 1;
        
        for(int t = i; t < j; t++){
            prod *= nums[t];
            max_prod = max(max_prod, prod);
        }
        
        for(int t = i; t < j - 1; t++){
            prod /= nums[t];
            max_prod = max(max_prod, prod);
        }
        
        return max_prod;
    }
    
    int maxProduct(vector<int>& nums) {
        int ans = INT_MIN, i = 0, j = 0;
        
        while(j < nums.size()){
            if(nums[j] == 0){
                ans = max(ans, findmaxprod(nums, i, j));
                ans = max(ans, 0);
                i = j + 1;
            }
            
            j++;
        }
        
        ans = max(ans, findmaxprod(nums, i, j));
        
        return ans;
    }
};