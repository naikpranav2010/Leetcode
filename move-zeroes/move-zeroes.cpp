class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j = nums.size() - 1;
        
        for(int i = 0; i <= j; i++){
            if(nums[i] != 0)
                continue;
            
            else{
                shift(nums, i, j);
                j--;
            }
        }
        
        return;
    }
    
    void shift(vector<int>& nums, int i, int j){
        for(int k = i + 1; k <= j; k++){
            if(nums[k] == 0)
                continue;
            
            else{
                nums[i] = nums[k];
                nums[k] = 0;
                i = k;
            }
            
        }
        
        return;
    }
};