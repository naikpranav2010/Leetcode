class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        
        // if(n <= 1)
        //     return 0;
        
        // if(n)
        
        vector<int> mem(n, INT_MAX/2);
        
        mem[n - 1] = 0;
        
        for(int i = n - 2; i >= 0; i--){
            if(!nums[i])
                continue;
            
            else if(n - 1 - i < nums[i])
                mem[i] = 1;
            
            else
                for(int j = nums[i]; j > 0; j--)
                    mem[i] = min(mem[i], 1 + mem[i + j]);
        }
        
        return mem[0];
    }
};