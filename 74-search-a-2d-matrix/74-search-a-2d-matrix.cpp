class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int i = 0, j = m - 1;
        
        while(i < j){
            int mid = i + (j - i) / 2;
            
            if(matrix[mid][0] == target)
                return true;
            
            else if(matrix[mid][0] < target){
                if(matrix[mid][n - 1] >= target)
                    return search(matrix[mid], target);
                
                else
                    i = mid + 1;
            }
            
            else
                j = mid - 1;
        }
        
        if(j >= 0){
            if(matrix[j][0] == target)
                return true;

            if(matrix[j][0] < target){

                if(matrix[j][n - 1] >= target)
                    return search(matrix[j], target);
            }    
        }
               
        return false;
    }
    
    bool search(vector<int> &arr, int num){
        int i = 0, j = arr.size() - 1;
        
        while(i < j){
            int mid = i + (j - i) / 2;
            
            if(arr[mid] == num)
                return true;
            
            else if(arr[mid] < num)
                i = mid + 1;
            
            else
                j = mid - 1;
        }
        
        if(j >= 0 && arr[j] == num)
            return true;
        
        return false;
    }
};