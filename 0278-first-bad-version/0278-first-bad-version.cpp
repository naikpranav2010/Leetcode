// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 0)
            return 0;
        
        if(!isBadVersion(n - 1))
            return n;
        
        if(isBadVersion(n / 2))
            return firstBadVersion(n / 2);
        
        int m = n / 2;
        
        while(isBadVersion(m) == false){
            m += (n - m) / 2;
        }
                  
        return firstBadVersion(m);
    }
};