class Solution {
public:
    bool isHappy(int n) {
        vector<int> arr;
        
        return happy(n, arr);
    }
    
    bool happy(int n, vector<int> &arr){
        if(n == 1)
            return true;
        
        // if(n < 10)
        //     return false;
        
        int sum = 0;
        
        while(n){
            int digit = n % 10;
            n /= 10;
            
            sum += digit * digit;
        }
        
        if(find(arr, sum))
            return false;
        
        else
            arr.push_back(sum);
        
        return happy(sum, arr);
    }
    
    bool find(vector<int> &arr, int n){
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == n)
                return true;
        }
        
        return false;
    }
};