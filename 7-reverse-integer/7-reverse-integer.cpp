class Solution {
public:
    int reverse(int x) {
        long long int y = 0;
        /*int flag = 1;
        
        /*if(x < 0){
            flag = -1;
            x *= -1;
        }   */     
        
        while(x){
            y = (y * 10 )+ (x % 10);
            x /= 10;
        }
        
        if(y >= INT_MAX || y <= INT_MIN) return 0;
        
        return y;
    }
};