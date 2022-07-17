class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> arr(100, 0);
        int ans = 0;
        
        for(int i = 0; i < nums.size(); i++){
            arr[nums[i] - 1]++;
        }
        
        for(int i = 0; i < 100; i++){
            if(arr[i] == 1)
                ans += (i + 1);
        }
        
        return ans;
    }
};