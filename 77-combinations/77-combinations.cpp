class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> arr;
        
        myfun(ans, arr, 1, n, k);
        
        return ans;
    }
    
    void myfun(vector<vector<int>> &ans, vector<int> &arr, int j, int n, int k){
        if(!k){
            ans.push_back(arr);
            return;
        }
        
        for(int i = j; i <= n - k + 1; i++){
            arr.push_back(i);
            myfun(ans, arr, i + 1, n, k - 1);
            arr.pop_back();
        }
        
        return;
    }
};