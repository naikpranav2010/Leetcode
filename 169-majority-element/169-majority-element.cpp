class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums[0], count = 1;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == n){
                count++;
                continue;
            }
            
            else
                count--;
            
            if(!count){
                n = nums[i];
                count = 1;
            }
        }
        
        return n;
    }
};