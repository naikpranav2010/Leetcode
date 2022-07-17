class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // k++;
        
//         map<int, int> hash;
//         // bool flag = false;
        
//         for(int i = 0; i < nums.size(); i++){
//             if(i < k + 1){
//                 if(hash.find(nums[i]) != hash.end())
//                     return true;
                
//                 else 
//                     hash[nums[i]] = 1;
//                 // if(hash.find(nums[i]) == hash.end())
                
//                 // else
//                 //     hash[nums[i]]++;
//             }
            
//             else{
// //                 if(hash.find(nums[i]) != hash.end() || flag)
// //                     return true;
                
// //                 else if(hash.find(nums[i]) == hash.end())
// //                     hash[nums[i]] = 1;
                
// //                 else
// //                     hash[nums[i]]++;
//                 hash[nums[i - k - 1]]--;
                
//                 if(hash[nums[i]] >= 1)
//                     return true;
                
//                 hash[nums[i]]++;
                
                
// //                 if(!hash[nums[i - k]])
// //                     flag = true;
                
                
//             }
//         }
        
//         return false;
        
        unordered_set<int> s;
       
       if (k <= 0) return false;
       if (k >= nums.size()) k = nums.size() - 1;
       
       for (int i = 0; i < nums.size(); i++)
       {
           if (i > k) s.erase(nums[i - k - 1]);
           if (s.find(nums[i]) != s.end()) return true;
           s.insert(nums[i]);
       }
       
       return false;
    }
};