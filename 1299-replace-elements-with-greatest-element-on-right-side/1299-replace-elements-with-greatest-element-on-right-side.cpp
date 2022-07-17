class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(), num = arr[n - 1], temp = num;
        arr[n - 1] = -1;
        // vector<int> temp(n, -1);
        
        for(int i = n - 2; i >= 0; i--){
            temp = arr[i];
            arr[i] = max(num, arr[i + 1]);
            num = temp;
        }
                
        return arr;
    }
};