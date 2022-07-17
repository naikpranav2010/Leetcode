class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int, int> m;
        int maxm = 0;
        
        for(int i = lowLimit; i <= highLimit; i++){
            // int n = sumofdigits(i);
            
//             if(m.find(n) == m.end())
//                 m[n] = 1;
            
//             else
            int sum = 0, n = i;
        
            while(n){
                sum += n % 10;
                n /= 10;
            }
            
            m[sum]++;
            
            maxm = max(maxm, m[sum]);
        }
        
        return maxm;
    }
    
//     int sumofdigits(int n){
//         int sum = 0;
        
//         while(n){
//             sum += n % 10;
//             n /= 10;
//         }
        
//         return sum;
//     }
};