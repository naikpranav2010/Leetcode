class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int n = A.size(), flag1 = 0, flag2 = 1;
        vector<int> v(n);
        
        for(int i = 0; i < n; i++){
            if(A[i] % 2 && flag2 < n){
                v[flag2] = A[i];
                flag2 += 2;
            }
            
            else if(!(A[i] % 2) && flag1 < n){
                v[flag1] = A[i];
                flag1 += 2;
            }
        }
        
        return v;
    }
};