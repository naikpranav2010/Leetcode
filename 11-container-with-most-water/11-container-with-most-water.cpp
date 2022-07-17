class Solution {
public:
//     int maxArea(vector<int>& height) {
//         int max_area = 0, n = height.size();
        
//         for(int i = 0; i < n - 1; i++)
//         {
//             for(int j = i; j < n; j++)
//             {
//                 max_area = max(max_area, (j - i) * min(height[i], height[j]));
//             }
//         }
        
//         return max_area;
//     }
    
    int maxArea(vector<int>& height){
        int i = 0, j = height.size() - 1, max_area = 0;
        
        while(i < j){
            max_area = max(max_area, (j - i) * min(height[i], height[j]));
            
            if(height[i] <= height[j])
                i++;
            
            else
                j--;
        }
        
        return max_area;
    }
};