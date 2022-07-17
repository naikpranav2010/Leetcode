class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> s;
        
//         for(int i = 0; i < arr.size(); i++){
//             if(s.find(arr[i]) != s.end())
//                 s.erase(arr[i]);
            
//             else
//                 s[arr[i]]  = true;
//         }
        
//         for(auto temp : s){
//             cout<<temp.first<<" ";
//         }
        
        // while(k > 0){
        //     temp++;
        //     k--;
        // }
        
        for(int i = 0; i < arr.size(); i++){
            
            s[arr[i]]++ ;
        }
        
        for(auto temp : arr){
//             cout<<temp.first<<" ";
            
            if(s[temp] == 1 && k-- == 1)
                return temp;
        }
        
        return "";
    }
};