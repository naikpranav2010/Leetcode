class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1, ans = -1;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(mid > 0 && mid < arr.size() - 1){
                if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
                    ans = mid;
                    break;
                }

                else if(arr[mid] < arr[mid - 1]){
                    high = mid;
                }

                else{
                    low = mid + 1;
                }
            }
            
            else if(!mid){
                if(arr[mid] > arr[mid + 1]){
                    ans = mid;
                    break;
                }
                
                else{
                    ans = mid + 1;
                    break;
                }
            }
            
            else{
                if(arr[mid] > arr[mid - 1]){
                    ans = mid;
                    break;
                }
                
                else{
                    ans = mid - 1;
                    break;
                }
            }
        }
        
        return ans;
    }
};