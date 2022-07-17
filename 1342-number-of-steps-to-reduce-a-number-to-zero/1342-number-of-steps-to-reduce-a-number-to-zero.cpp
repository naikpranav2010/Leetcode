class Solution {
public:
    int numberOfSteps (int num) {
        int i = 31, count = 0;
        
        if(!num) return 0;
        
        while(!(num & (1<<i))){
            i--;
        }
        
        for(int j = 0; j <= i; j++){
            if(num & (1<<j)) count += 2;
            
            else count++;
        }
        
        return count - 1;
    }
};