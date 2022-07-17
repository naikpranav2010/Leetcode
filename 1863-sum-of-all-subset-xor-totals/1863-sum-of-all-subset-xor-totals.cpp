class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        
        populate(nums, ans, 0, 0);
        
        return ans;
        // return 5 ^ 5;
    }
    
    void populate(vector<int>& nums, int &ans, int i, int temp){
        if(i >= nums.size()){
            return;
        }
        
        for(int j = i; j < nums.size(); j++){
            // cout<< nums[j]<<endl;
            temp ^= nums[j];
            ans += temp;
            populate(nums, ans, j + 1, temp);
            temp ^= nums[j];
        }
        
        return;
    }
};