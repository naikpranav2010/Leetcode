class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if(k > nums.size())
            return -1;
        
        double maxm = 0;
        
        if(k == nums.size()){
            for(int i = 0; i < k; i++)
                maxm += nums[i];
            
            return maxm / k;
        }
        
        
        // double maxavg = INT_MIN;
        
        for(int i = 0; i < k; i++)
            maxm += nums[i];
        
        double maxavg = maxm;
        
        for(int i = 0; i < nums.size() - k; i++){
            maxm  +=  nums[i + k] - nums[i];
            // cout<<nums[i+k]<<' ';
            maxavg = max(maxavg, maxm);
        }
        
        return maxavg / k;
    }
};