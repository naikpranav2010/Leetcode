class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int i = 0, j = numbers.size() - 1;
        
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                ans[0] = ++i;
                ans[1] = ++j;
                return ans;
            }
            
            else if(numbers[i] + numbers[j] < target)
                i++;
            
            else
                j--;
        }
        
        return ans;
    }
};