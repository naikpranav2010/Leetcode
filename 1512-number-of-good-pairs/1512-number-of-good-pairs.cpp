class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0, n = nums.size();
        
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                count += nums[i] == nums[j] ? 1 : 0;
            }
        }
        
        return count;
    }
};