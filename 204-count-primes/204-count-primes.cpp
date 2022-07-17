class Solution {
public:
//     bool isprime(int n){        
//         for(int i = 2; i <= sqrt(n); i++){
//             if(!(n % i))
//                 return false;
//         }
        
//         return true;
//     }
    
    int countPrimes(int n) {
        if(n == 0 || n == 1)
            return 0;
        
        vector<bool> prime(n, true);
        int ans = 0;
        
        prime[0] = false;
        prime[1] = false;
        
        for(int i = 2; i < n; i++){
            if(!prime[i])
                continue;
            
            else{
                ans++;
                
                int temp = 2;
                while(temp * i < n){
                    prime[temp * i] = false;
                    temp++;
                }
            }
        }
        
        
        // for(int i = 0; i < n; i++){
        //     if(prime[i])
        //         ans++;
        // }
        
        return ans;
    }
};