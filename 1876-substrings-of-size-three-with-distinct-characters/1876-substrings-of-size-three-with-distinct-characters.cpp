class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0;
        vector<char> arr(3);
        arr[0] = s[0];
        arr[1] = s[1];
        arr[2] = s[2];
        
        if(arr[0] != arr[1] && arr[0] != arr[2] && arr[2] != arr[1])
            ans++;
        
        for(int i = 3; i < s.size(); i++){
            arr[i % 3] = s[i];
            
            if(arr[i % 3] != arr[(i + 1) % 3] && arr[i % 3] != arr[(i - 1) % 3] && arr[(i + 1) % 3] != arr[(i - 1) % 3])
            ans++;
        }
        
        return ans;
    }
};