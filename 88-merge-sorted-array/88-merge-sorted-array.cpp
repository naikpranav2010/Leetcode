class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(nums1);
        int i = 0, j = 0, k = 0;
        
        while(k < m + n){
            if(i >= m && j < n){
                nums1[k] = nums2[j];
                k++;
                j++;
            }
            
            else if(j >= n && i < m){
                nums1[k] = temp[i];
                k++;
                i++;
            }
            
            else{
                if(temp[i] <= nums2[j]){
                    nums1[k] = temp[i];
                    k++;
                    i++;
                }
                
                else{
                    nums1[k] = nums2[j];
                    k++;
                    j++;
                }
            }
        }
        
        return;
    }
};