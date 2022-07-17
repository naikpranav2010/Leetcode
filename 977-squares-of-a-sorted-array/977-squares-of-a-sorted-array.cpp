class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(), i = 0, j = n - 1, flag = 0;
        vector<int> a(n);
        
        while(i <= j){
            if(abs(nums[j]) < abs(nums[i])) a[flag++] = nums[i] * nums[i++];
            
            else a[flag++] = nums[j] * nums[j--];
        }
        
        // a.push_back(nums[i] * nums[i]);
        
        reverse(a.begin(), a.end());
        
        return a;
    }
};