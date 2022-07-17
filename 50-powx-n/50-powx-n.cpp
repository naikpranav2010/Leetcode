class Solution {
public:
    double myPow(double x, int n) {
        if(!n)
            return 1;
        if(n == 1)
            return x;
        if(n == -1)
            return 1 / x;
        
        return pow(pow(x, n / 2), 2) * pow(x, n % 2);
    }
};