class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1 || nums.size() == 2)
            return {};
        
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; i++){
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            twoSum(nums, i + 1, nums[i], ans);
        }
        
        return ans;
    }
    
    void twoSum(vector<int>& nums, int j, int target, vector<vector<int>> &ans) {
        // unordered_map<int, int> hash;
        int i = j, k = nums.size() - 1;
        
        while(i < k){
//             if(i > j && nums[i] == nums[i - 1])
//                 i++;
            
//             else if(k < nums.size() - 1 && nums[k] == nums[k + 1])
//                 k--;
            
            // else{
                if(nums[i] + nums[k] == -1 * target){
                    vector<int> temp({target, nums[i], nums[k]});
                    if(!ans.size() || compare(temp, ans[ans.size() - 1]))
                        ans.push_back(temp);
                    i++;
                    k--;
                }

                else if(nums[i] + nums[k] > -1 * target)
                    k--;

                else
                    i++;
            // }
        }
        
        // for(int i = j; i < nums.size(); i++){
        //     if(i > j && nums[i] == nums[i - 1])
        //         continue;
        //     else if(hash.find(-1 * target - nums[i]) != hash.end())
        //         ans.push_back({target, -1*target - nums[i], nums[i]});
        //     else  
        //         hash[nums[i]] = i;
        // }
        
        return;
    }
    
    bool compare(vector<int>& arr1, vector<int>& arr2){
        int count = 0;
        
        for(int i = 0; i < 3; i++){
            if(arr1[i] == arr2[i])
                count++;
        }
        
        if(count == 3)
            return false;
        
        return true;
    }
};