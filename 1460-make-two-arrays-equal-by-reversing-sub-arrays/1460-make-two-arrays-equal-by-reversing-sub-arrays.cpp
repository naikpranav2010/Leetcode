class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int a[1001] = {false};
        int n = target.size();
        
        for(int i = 0; i < n; i++){
            a[target[i]]++;
        }
        
        for(int i = 0; i < n; i++){
            a[arr[i]]--;
            if(a[arr[i]] < 0) return false;
        }
        
        return true;
    }
};