class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        
        for(;left <= right; left++){
            if(isselfdiv(left))
                ans.push_back(left);
        }
        
        return ans;
    }
    
    bool isselfdiv(int n){
        int k = n;
        
        while(k){
            int rem = k % 10;
            
            if(!rem || n % rem) 
                return false;
            
            k /= 10;
        }
        
        return true;
    }
};