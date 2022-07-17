class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size(), i = 0;
        
        while(i < n)
        {
            if(nums[i] == i + 1)
                i++;
            
            else if(nums[i] == nums[nums[i] - 1])
                i++;
            
            else
                swap(nums[i], nums[nums[i] - 1]);
            
            // int temp = nums[nums[i] - 1];
            // nums[nums[i] - 1] = nums[i];
            // nums[i] = temp;
        }
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != i + 1)
                ans.push_back(i + 1);
            // nums[i] = nums[i] / (n + 1);
        }
        
        // return nums;
        return ans;
    }
};