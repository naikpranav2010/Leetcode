class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> hash;
        
        for(int i = 0; i < nums.size(); i++){
            if(hash.find(nums[i]) != hash.end())
                return true;
            
            hash[nums[i]] = true;
        }
        
        return false;
    }
    
//     bool exists(vector<int> &hash, int num){
//         int i = 0, j = hash.size() - 1;
        
//         while(i < j){
//             int mid = i + (j - i) / 2;
            
//             if(hash[mid] == num)
//                 return true;
            
//             if(hash[mid] < num)
//                 i = mid + 1;
            
//             else if(hash[mid] > num)
//                 j = mid - 1;
//         }
        
//         if(hash[j] == nums)
//             return true;
        
//         return false;
//     }
    
//     void insert(vector<int> &hash, int num){
        
//     }
};