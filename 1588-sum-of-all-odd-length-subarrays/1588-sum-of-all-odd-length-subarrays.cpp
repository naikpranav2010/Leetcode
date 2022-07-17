class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int finalsum = 0, n = arr.size();
        
        for(int k = 1; k <= n; k+=2){
            int sum = 0, i = 0, j = 0;
            
            while(j < n){
                sum += arr[j];
                
                if(j - i + 1 < k){
                    j++;
                }

                else if(j - i + 1 == k){
                    finalsum += sum;
                    sum -= arr[i]; 
                    j++;
                    i++;
                }
            }
        }
        
        return finalsum;
    }
};