class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = 1100, largest = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < smallest)
                smallest = nums[i];
            
            if(nums[i] > largest)
                largest = nums[i];
        }
        
        return gcd(smallest, largest);
    }
    
    int gcd(int s, int l){
        if(s == 1)
            return 1;
        
        if(!(l % s))
            return s;
        
        return gcd(l % s, s);
    }
};