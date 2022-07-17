class Solution {
public:
    int numberOfMatches(int n) {
        int matches = 0;
        
        while(n > 1){
            matches = matches + (n >> 1);
            
            if(n % 2)
                n = (n >> 1) + 1;
            
            else
                n >>= 1; 
        }
        
        return matches;
    }
};