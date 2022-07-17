class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        // sort(nums.begin(), nums.end());
        vector<int> ans;
        int count = 0, pos = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == target)
                count++;
            else if(nums[i] < target)
                pos++;
        }
        
        while(count--)
        {
            ans.push_back(pos++);
        }
        
        return ans;
    }
};