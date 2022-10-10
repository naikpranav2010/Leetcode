class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n > 2){
            if(n % 3 != 0)
                return false;
            cout<<n<<endl;
            n /= 3;
        }
        
        return n == 1? true : false;
    }
};