class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, minlen = INT_MAX, sum = 0;
        
        while(j < nums.size()){
            while(sum < target && j < nums.size()){
                sum += nums[j++];
            }
            
            if(sum >= target)
                minlen = min(minlen, (j - i + 1));
            
            while(i <= j && sum >= target){
                sum -= nums[i++];
                minlen = min(minlen, (j - i + 1));
            }
        }
        
        return minlen == INT_MAX ? 0 : minlen;
    }
};