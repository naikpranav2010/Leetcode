class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int flag = -1, i = 0;
        
//         for(int i = 0; i < nums.size(); i++){
//             if(!nums[i]){
//                 flag = i;
//             }
            
//             else{
//                 if(nums[i]){
                    
//                 }
//             }
//         }
        
        while(i < nums.size()){
            if(!nums[i]){
                if(flag < 0){
                    flag = i;
                }
                
                
            }
            
            else if(nums[i]){
                if(flag>=0){
                    swap(nums[i], nums[flag]);

                    while(nums[flag] && flag < nums.size())
                        flag++;
                }
            }
            
            if(flag == nums.size())
                break;
            
            i++;
        }
        
        return;
    }
};