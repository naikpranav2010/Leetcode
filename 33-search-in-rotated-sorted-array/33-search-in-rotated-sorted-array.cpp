class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        
        int min_idx = findMin(nums);
        
        if(min_idx == 0)
            return find(nums, target, 0, n);
        
        else if(target < nums[0])
            return find(nums, target, min_idx, n);
        
        else if(target > nums[0])
            return find(nums, target, 0, min_idx - 1);
        
        else
            return 0;
    }
    
    int find(vector<int> &nums, int target, int i, int j){
        if(i >= j)
        {
            if(nums[i] == target)
                return i;
            
            else
                return -1;
        }
        
        int mid = i + (j - i) / 2;
        
        if(nums[mid] == target)
            return mid;
        
        else if(nums[mid] < target)
            return find(nums, target, mid + 1, j);
        
        else
            return find(nums, target, i, mid - 1);
    }
    
    int findMin(vector<int>& nums) {
        if(nums.size() == 1 || nums[0] < nums[nums.size()-1])
            return 0;
        
        return find_min(nums, 0, nums.size() - 1);
    }
    
    int find_min(vector<int> &nums, int i, int j){
        int mid = i + (j - i) / 2;
        
        if(mid == 0)
        {
            if(nums[mid] < nums[mid + 1])
                return mid;
                
            else
                return find_min(nums, mid + 1, j);                
        }
        
        else if(mid == nums.size() - 1)
        {
            if(nums[mid] < nums[mid - 1])
                return mid;
                
            else
                return find_min(nums, i, mid - 1);
        }
        
        else if(nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1])
            return mid;
        
        else if(nums[mid] > nums[0])
            return find_min(nums, mid + 1, j);
        
        else if(nums[mid] < nums[0])
            return find_min(nums, i, mid);
        
        return -1;
    }
};