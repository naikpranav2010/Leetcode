class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int head =0, tail =  A.size() - 1;
        
        while(head <= tail){
            while(head <= tail && A[head] % 2) swap(A[head], A[tail--]);
            
            head++;
        }
        
        return A;
    }
};