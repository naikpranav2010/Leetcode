class Solution {
public:
    int digits(int n){
        int count = 0;
        
        while(n){
            count++;
            n /= 10;
        }
        
        return count;
    }
    
    int findNumbers(vector<int>& nums) {
        int ans = 0, n = nums.size();
        
        for(int i = 0; i < n; i++){
            if(!(digits(nums[i]) % 2)) ans++;
        }
        
        return ans;
    }
};