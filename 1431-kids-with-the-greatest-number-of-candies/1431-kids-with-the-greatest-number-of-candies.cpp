class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = *max_element(candies.begin(), candies.end()), n = candies.size();
        vector<bool> ans(n);
        
        for(int i = 0; i < n; i++){
            ans[i] = max_candies <= (candies[i] + extraCandies) ? true : false;
        }
        
        return ans;
    }
};