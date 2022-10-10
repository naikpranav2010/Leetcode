class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;
        
        while(i >= 0 && j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[k] = nums1[i];
                cout<<nums1[k]<<endl;
                cout<<k<<endl;
                k--;
                i--;
            }
            
            else{
                nums1[k] = nums2[j];
                cout<<nums1[k]<<endl;
                cout<<k<<endl;
                k--;
                j--;
            }
        }
        
        if(i < 0){
            while(j >= 0 && k >= 0){
                nums1[k] = nums2[j];
                cout<<nums1[k]<<endl;
                cout<<k<<endl;
                k--;
                j--;
            }
        }
        
        // else if(j < 0){
        //     while(i >= 0)
        //         nums1[k--] = nums1[i--];
        // }
        
        return;
    }
};