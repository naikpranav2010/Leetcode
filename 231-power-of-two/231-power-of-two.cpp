class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n < 1)
            return false;
        
        // for(int i = 0; i < 32; i++)
        //     if(n == 1 << i)
        //         return true;
        
        return !(n & n - 1);
    }
};