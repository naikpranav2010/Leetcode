class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, hi = nums.size() - 1, mid;
        
        while(low <= hi){
            mid = (low + hi) / 2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[mid] > target){
                hi = mid - 1;
                continue;
            }
            
            else{
                low = mid + 1;
            }
        }
        
        return -1;
    }
};