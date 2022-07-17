class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        
        long long int y = 0, z = x;   
        
        while(x){
            y = (y * 10 )+ (x % 10);
            x /= 10;
        }
        
        if(z == y) return true;
        
        else return false;
    }
};