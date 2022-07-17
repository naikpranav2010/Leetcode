class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size(), mi = INT_MAX, ma = INT_MIN;
        double ans, sum = 0;
        
        for(int i = 0; i < n; i++){
            sum += salary[i];
            mi = min(mi, salary[i]);
            ma = max(ma, salary[i]);
        }
        
        ans = (sum - mi - ma) / (n - 2);
        
        return ans;
    }
};