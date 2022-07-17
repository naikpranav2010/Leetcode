class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(!nums.size())
            return 0;
        
        int i = 0, j = nums.size() - 1, count = 0;
        
        while(i < j){
            if(nums[j] == val)
                j--;
                    
            else if(nums[i] != val){
                i++;
                // count++;
            }
            
            else if(nums[i] == val){
                swap(nums[i++], nums[j--]);
                // count++;
            }
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val)
                count++;
            
            else 
                break;
        }
        
        return count;
    }
};