class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, count = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                count++;
                continue;
            }
            
            prod *= nums[i];
        }
        
        if(count == 0){
            for(int i = 0; i < nums.size(); i++){
                nums[i] = prod / nums[i];
            }
        }
        
        else if(count == 1){
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == 0)
                    nums[i] = prod;
                else
                    nums[i] = 0;
            }
        }
        
        else if(count > 1){
            for(int i = 0; i < nums.size(); i++){
                nums[i] = 0;
            }
        }
        
        return nums;
    }
};