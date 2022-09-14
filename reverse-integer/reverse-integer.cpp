class Solution {
public:
    int reverse(int n) {
        if(INT_MIN >= n || INT_MAX <= n)
            return 0;
        
        bool flag = false;
        // return  INT_MIN;
        if(n < 0){
            flag = true;
            n *= -1;
        }
        
        int ans = 0;
        
        while(n > 0){
            if(ans > INT_MAX / 10)
                return 0;
            ans *= 10;
            if(INT_MAX - ans < n % 10)
                return 0;
            else
                ans += n % 10;
            
            n /= 10;
        }
        
        return flag ? -1 * ans : ans;
    }
};