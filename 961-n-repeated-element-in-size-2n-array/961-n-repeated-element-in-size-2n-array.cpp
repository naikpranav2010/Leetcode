class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // if(nums[0] == 9 && nums[1] == 5 && nums[2] == 6 && nums[3] == 9)
        //     return 9;
        
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i + 1])
                return nums[i];
            
            else if(i + 2 < nums.size() && nums[i] == nums[i + 2])
                return nums[i];
            
            else if(i + 3 < nums.size() && nums[i] == nums[i + 3])
                return nums[i];
        }
        
//         for(int i = 0; i < nums.size() - 2; i++){
//             if(nums[i] == nums[i + 2])
//                 return nums[i];
//         }
        
//         for(int i = 0; i < nums.size() - 3; i++){
//             if(nums[i] == nums[i + 3])
//                 return nums[i];
//         }
        
        return -1;
    }
};