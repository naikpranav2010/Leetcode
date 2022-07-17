class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        populate(nums, ans, temp, 0);
        
        return ans;
    }
    
    void populate(vector<int>& nums, vector<vector<int>> &ans, vector<int> &temp, int i){
        ans.push_back(temp);
        
        if(i >= nums.size())
            return;
        
        for(int j = i; j < nums.size(); j++){
            temp.push_back(nums[j]);
            populate(nums, ans, temp, j + 1);
            temp.pop_back();
        }
        
        return;
    }
};