class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int len = 1, maxlen = 1;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i - 1]){
                len++;
                maxlen = max(maxlen, len);
            }
            
            else{
                len = 1;
            }
        }
        
        return maxlen;
    }
};