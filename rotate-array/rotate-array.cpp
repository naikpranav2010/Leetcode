class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        
        if(k == 0)
            return;
        
        vector<int> temp(k);
        
        for(int i = 0; i < k; i++){
            temp[i] = nums[n - k + i];
        }
        
        for(int i = nums.size() - 1; i > k - 1; i--){
            nums[i] = nums[i - k];
        }
        
        for(int i = 0; i < k; i++){
            nums[i] = temp[i];
        }
        
        return;
    }
};