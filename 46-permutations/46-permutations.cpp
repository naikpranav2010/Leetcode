class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        populate(nums, nums.size(), ans, temp);
        
        return ans;
    }
    
    void populate(vector<int> &nums, int size, vector<vector<int>> &ans, vector<int> &temp){
        if(!size){
            ans.push_back(temp);
            return;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 10)
                continue;
            temp.push_back(nums[i]);
            nums[i] += 30;
            populate(nums, size - 1, ans, temp);
            nums[i] -= 30;
            temp.pop_back();
        }
        
        return;
    }
};