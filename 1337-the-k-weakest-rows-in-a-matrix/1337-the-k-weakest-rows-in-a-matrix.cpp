class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> v;
        vector<int> ans;
        
        for(int i = 0; i < mat.size(); i++){
            int low = 0, high = mat[0].size()-1, count = 0;
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(mat[i][mid]){
                    count = mid + 1;
                    low = mid + 1;
                }
                
                else{
                    high = mid - 1;
                }
            }
            
            v.push_back(make_pair(count, i));
        }
        
        sort(v.begin(), v.end());
        int i = 0;
        
        while(i != k){
            ans.push_back(v[i++].second);
        }
        
        return ans;
    }
};