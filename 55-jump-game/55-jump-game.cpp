class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1, last = nums.size() - 1;
        
        for(int i = n - 1; i >= 0; i--){
            if(last - i <= nums[i])
                last = i;
        }
        
        if(!last)
            return true;
        
        return false;
    }
};