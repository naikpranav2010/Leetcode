class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size() == 1 || nums[0] < nums[nums.size()-1])
            return nums[0];
        return find_min(nums, 0, nums.size() - 1);
    }
    
    int find_min(vector<int> &nums, int i, int j){
        int mid = i + (j - i) / 2;
        
        if(mid == 0)
        {
            // cout<<'0'<<' ';
            if(nums[mid] < nums[mid + 1])
            {
                // cout<<'1'<<' ';
                return nums[mid];
            }
                
            
            else
            {
                // cout<<'2'<<' ';
                return find_min(nums, mid + 1, j);
            }
                
        }
        
        else if(mid == nums.size() - 1)
        {
            if(nums[mid] < nums[mid - 1])
            {
                // cout<<'3'<<' ';
                return nums[mid];
            
            }
                
            else
            {
                // cout<<'4'<<' ';
                return find_min(nums, i, mid - 1);
            }
                
        }
        
        else if(nums[mid] < nums[mid - 1] && nums[mid] < nums[mid + 1])
        {
            // cout<<'5'<<' ';
            return nums[mid];
        }
            
        
        else if(nums[mid] > nums[0])
        {
            // cout<<'6'<<' ';
            return find_min(nums, mid + 1, j);
        }
            
        
        else if(nums[mid] < nums[0])
        {
            // cout<<'7'<<' ';
            return find_min(nums, i, mid);
        }
            
        
        return -1;
    }
};