class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
//      vector<bool> ar1(arr1.size(), true), ar2(arr2.size(), true);
        int ans = 0;
        
//         sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        for(int i = 0; i < arr1.size(); i++){
            bool flag = true;
            
            for(int j = 0; j < arr2.size(); j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    flag = false;
                    break;
                }                    
            }
            
            if(flag)
                ans++;
        }
        
        
        return ans;
    }
};